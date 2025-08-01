#pragma once
#include "ListElement.h"
namespace UiElement
{
    //媒体库的播放列表列表
    class MediaLibPlaylist : public ListElement
    {
    public:
        static CListCache m_list_cache;
        virtual void Draw() override;
        enum Column
        {
            COL_NAME,
            COL_COUNT,
            COL_MAX
        };

        // 通过 ListElement 继承
        std::wstring GetItemText(int row, int col) override;
        int GetRowCount() override;
        int GetColumnCount() override;
        int GetColumnWidth(int col, int total_width) override;
        virtual int GetHighlightRow() override;
        virtual int GetColumnScrollTextWhenSelected() override;
        virtual CMenu* GetContextMenu(bool item_selected) override;
        virtual void OnDoubleClicked() override;
        virtual int GetHoverButtonCount() override;
        virtual int GetHoverButtonColumn() override;
        virtual IconMgr::IconType GetHoverButtonIcon(int index, int row) override;
        virtual std::wstring GetHoverButtonTooltip(int index, int row) override;
        virtual void OnHoverButtonClicked(int btn_index, int row) override;
    };
}

