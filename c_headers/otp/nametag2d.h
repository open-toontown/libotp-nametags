typedef struct {
  vtable_nametag_clickablepopup* vtable_clickablepopup; // 0
  int m_state; // 4
  void* vbtable; // 8
  int m_chat_contents; // 12
  int m_draw_order; // 16
  int m_has_draw_order; // 20
  int m_contents; // 24
  int m_active; // 28
  NametagGroup* m_group; // 32
  float m_wordwrap; // 36
  NodePath m_avatar; // 40
  __string m_ival_name; // 52
  void* m_ival; // 80
  MouseWatcherRegion* m_popup_region; // 84 [PopupMouseWatcherRegion*]
  int m_has_region; // 88
  int m_seq_Nametag; // 92
  void* m_mouse_watcher; // 96

  void* field_100;
  vtable_generic_marginpopup* vtable_typed; // 104
  void* field_108; // 108
  void* field_112; // 112
  __string _name; // 116
  void* _prev; // 144
  void* _next; // 148
  void* vbtable_node; // 152
  char paths_and_mutex_junk[48]; // 156
  void* _state; // 204
  TransformState* _transform; // 208
  TransformState* _prev_transform; // 212
  void* _effects; // 216
  char tag_junk[48]; // 220
  int _draw_control_mask; // 268
  int _draw_show_mask; // 272
  int _into_collide_mask; // 276
  int _bounds_type; // 280
  void* _user_bounds; // 284
  int _final_bounds; // 288
  int _fancy_bits; // 292
  int _net_collide_mask; // 296
  int _net_draw_control_mask; // 300
  int _net_draw_show_mask; // 304
  void* _off_clip_planes; // 308
  int _nested_vertices; // 312
  void* _external_bounds; // 316
  int _last_update; // 320
  int _next_update; // 324
  void* _down; // 328
  void* _stashed; // 332
  void* _up; // 336

  int m_seq; // 340
  NodePath m_np; // 344
  char m_managed; // 356
  char m_visible; // 357
  char __padding_1[2]; // 358
  float m_cell_width; // 360
  NodePath m_copied_np; // 364
  NodePath m_attached_np; // 376
  NodePath m_arrow; // 388
  NodePath m_unknown_np; // 400
  Vec3 m_trans_vec; // 412
  int m_on; // 424

  vtable_generic_refcount* vtable_refcount; // 428
  int refcount; // 432
  void* weak_ptr_list; // 436
} Nametag2d;
