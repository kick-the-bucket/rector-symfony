<?php

namespace Rector\Symfony\Tests\Rector\ClassMethod\AddRouteAnnotationRector\Fixture;

use Symfony\Bundle\FrameworkBundle\Controller\Controller;

class AppController extends Controller
{
    public function allAction()
    {
    }

    public function missingAction()
    {
    }
}

?>
-----
<?php

namespace Rector\Symfony\Tests\Rector\ClassMethod\AddRouteAnnotationRector\Fixture;

use Symfony\Bundle\FrameworkBundle\Controller\Controller;

class AppController extends Controller
{
    /**
     * @\Symfony\Component\Routing\Annotation\Route(path="/all/{foo}/{page}", name="all", defaults={"foo"="foo123", "page"=1}, host="m.example.com", schemes={"http", "https"}, methods={"GET", "POST"}, condition="context.getMethod() in ['GET', 'HEAD'] and request.headers.get('User-Agent') matches '/firefox/i'", requirements={"page"="\d+"}, options={"compiler_class"="App\Routing\Utf8RouteCompiler", "expose"=true, "foo1"=5, "foo2"="bar"})
     */
    public function allAction()
    {
    }

    public function missingAction()
    {
    }
}

?>
