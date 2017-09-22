(function($) {
    const $sidebarNav = $('#sidebar-nav');

    $sidebarNav.on('click', '.sidebar-nav-item', function() {
        if ($sidebarNav.hasClass('collapse') && $sidebarNav.hasClass('show')) {
            $sidebarNav.collapse('hide');
        }
    });
})(jQuery);