/*************************************************************************************************/
/****************************************WIDGET INTERFACE********************************/
#ifndef iwidget_h
#define iwidget_h


class IWidget
{
    public:
        virtual ~IWidget() {}
        virtual void Draw() = 0;
};

#endif
