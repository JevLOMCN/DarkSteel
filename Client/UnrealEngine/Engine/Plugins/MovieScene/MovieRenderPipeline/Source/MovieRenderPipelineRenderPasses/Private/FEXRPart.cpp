// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// FEXRPart @ 14ddc5200

FEXRPart * __thiscall FEXRImageWriteTask::FEXRPart::FEXRPart(FEXRPart *this,FEXRPart *param_1)

{
  FrameBuffer *this_00;
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  _Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *p_Var7;
  
  Imf_3_3::Header::Header(&this->Header,&param_1->Header);
  this_00 = &this->FrameBuffer;
  *(undefined8 *)&this_00->_map = 0;
  *(undefined8 *)&(this->FrameBuffer)._map.field_0x8 = 0;
  p_Var7 = ::operator_new(0x158);
  p_Var7->_Left = p_Var7;
  p_Var7->_Parent = p_Var7;
  p_Var7->_Right = p_Var7;
  p_Var7->_Color = '\x01';
  p_Var7->_Isnil = '\x01';
  *(_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> **)&this_00->_map = p_Var7;
  p_Var7 = std::
           _Tree<std::_Tmap_traits<Imf_3_3::Name,Imf_3_3::Slice,std::less<Imf_3_3::Name>,std::allocator<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>,0>_>
           ::_Copy_nodes<0>((_Tree<std::_Tmap_traits<Imf_3_3::Name,Imf_3_3::Slice,std::less<Imf_3_3::Name>,std::allocator<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>,0>_>
                             *)this_00,
                            *(_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> **)
                             (*(longlong *)&(param_1->FrameBuffer)._map + 8),p_Var7);
  *(_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> **)
   (*(longlong *)&this_00->_map + 8) = p_Var7;
  *(undefined8 *)&(this->FrameBuffer)._map.field_0x8 =
       *(undefined8 *)&(param_1->FrameBuffer)._map.field_0x8;
  plVar2 = *(longlong **)&this_00->_map;
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar3 + 0x19);
    plVar6 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar6 + 0x19);
      plVar3 = plVar6;
      plVar6 = (longlong *)*plVar6;
    }
    *plVar2 = (longlong)plVar3;
    lVar4 = *(longlong *)(*(longlong *)&this_00->_map + 8);
    lVar5 = *(longlong *)(lVar4 + 0x10);
    cVar1 = *(char *)(lVar5 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
      lVar4 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 0x10);
    }
    *(longlong *)(*(longlong *)&this_00->_map + 0x10) = lVar4;
  }
  else {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*(longlong *)&this_00->_map + 0x10) = *(longlong *)&this_00->_map;
  }
  this->Scanlines = param_1->Scanlines;
  this->BytesWritten = param_1->BytesWritten;
  return this;
}

// ~FEXRPart @ 14ddcad60

void __thiscall FEXRImageWriteTask::FEXRPart::~FEXRPart(FEXRPart *this)

{
  std::_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_>::
  _Erase_head<std::allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_> *
             )&this->FrameBuffer,
             (allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_> *)
             &this->FrameBuffer);
  Imf_3_3::Header::~Header(&this->Header);
  return;
}

