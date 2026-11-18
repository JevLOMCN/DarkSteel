// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 6

// HoaRotatorNode @ 14f089270

HoaRotatorNode * __thiscall
vraudio::HoaRotatorNode::HoaRotatorNode
          (HoaRotatorNode *this,int param_1,SystemSettings *param_2,int param_3)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  
  ProcessingNode::ProcessingNode((ProcessingNode *)this);
  this->system_settings_ = param_2;
  this->_padding_ = (longlong)&_vftable__for__vraudio__Node__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__SubscriberNode<vraudio::AudioBuffer_const*___ptr64>__;
  this->_padding_ =
       (longlong)&_vftable__for__vraudio__PublisherNode<vraudio::AudioBuffer_const*___ptr64>__;
  HoaRotator::HoaRotator(&this->hoa_rotator_,param_3);
  AudioBuffer::AudioBuffer
            (&this->output_buffer_,((longlong)param_3 + 1) * ((longlong)param_3 + 1),
             param_2->frames_per_buffer_);
  pCVar1 = (this->output_buffer_).channel_views_._Mypair._Myval2._Mylast;
  for (pCVar2 = (this->output_buffer_).channel_views_._Mypair._Myval2._Myfirst; pCVar2 != pCVar1;
      pCVar2 = pCVar2 + 1) {
    pCVar2->enabled_ = true;
    memset(pCVar2->begin_itr_,0,pCVar2->size_ << 2);
  }
  (this->output_buffer_).source_id_ = param_1;
  return this;
}

// ~HoaRotator @ 14f089350

void __thiscall vraudio::HoaRotator::~HoaRotator(HoaRotator *this)

{
  ulong64 uVar1;
  Matrix<float,_1,_1,0,_1,_1> *pMVar2;
  Matrix<float,_1,_1,0,_1,_1> *pMVar3;
  
  FMemory_Free(*(void **)&this->rotation_matrix_);
  pMVar2 = (this->rotation_matrices_)._Mypair._Myval2._Myfirst;
  if (pMVar2 != (Matrix<float,_1,_1,0,_1,_1> *)0x0) {
    pMVar3 = (this->rotation_matrices_)._Mypair._Myval2._Mylast;
    for (; pMVar2 != pMVar3; pMVar2 = pMVar2 + 1) {
      FMemory_Free(*(void **)pMVar2);
    }
    pMVar2 = (this->rotation_matrices_)._Mypair._Myval2._Myfirst;
    uVar1 = (((longlong)(this->rotation_matrices_)._Mypair._Myval2._Myend - (longlong)pMVar2) / 0x18
            ) * 0x18;
    pMVar3 = pMVar2;
    if (0xfff < uVar1) {
      pMVar3 = *(Matrix<float,_1,_1,0,_1,_1> **)&pMVar2[-1].field_0x10;
      uVar1 = uVar1 + 0x27;
      if (0x1f < (ulonglong)((longlong)pMVar2 + (-8 - (longlong)pMVar3))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pMVar3,uVar1);
    (this->rotation_matrices_)._Mypair._Myval2._Myfirst = (Matrix<float,_1,_1,0,_1,_1> *)0x0;
    (this->rotation_matrices_)._Mypair._Myval2._Mylast = (Matrix<float,_1,_1,0,_1,_1> *)0x0;
    (this->rotation_matrices_)._Mypair._Myval2._Myend = (Matrix<float,_1,_1,0,_1,_1> *)0x0;
  }
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14f089428

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::HoaRotatorNode::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::HoaRotatorNode::_vector_deleting_destructor__adjustor_24__
          (HoaRotatorNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((HoaRotatorNode *)
                      &this[-1].output_buffer_.channel_views_._Mypair._Myval2._Mylast,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{32}' @ 14f089438

/* [thunk]:public: virtual void * __ptr64 __cdecl vraudio::HoaRotatorNode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
vraudio::HoaRotatorNode::_vector_deleting_destructor__adjustor_32__
          (HoaRotatorNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((HoaRotatorNode *)&this[-1].output_buffer_.channel_views_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f089450

void * __thiscall
vraudio::HoaRotatorNode::_scalar_deleting_destructor_(HoaRotatorNode *this,uint param_1)

{
  AudioBuffer::~AudioBuffer(&this->output_buffer_);
  HoaRotator::~HoaRotator(&this->hoa_rotator_);
  ProcessingNode::~ProcessingNode((ProcessingNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// AudioProcess @ 14f0894b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

AudioBuffer * __thiscall
vraudio::HoaRotatorNode::AudioProcess(HoaRotatorNode *this,NodeInput *param_1)

{
  SystemSettings *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  AudioBuffer *pAVar8;
  SourceParameters *pSVar9;
  AudioBuffer *pAVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pAVar8 = ProcessingNode::NodeInput::GetSingleInput(param_1);
  pSVar9 = SourceParametersManager::GetParameters
                     (&this->system_settings_->source_parameters_manager_,pAVar8->source_id_);
  if (pSVar9 == (SourceParameters *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                ::__l2::kNullStream,"Could not find source parameters");
    pAVar10 = (AudioBuffer *)0x0;
  }
  else {
    fVar2 = *(float *)&(pSVar9->object_transform).rotation;
    fVar3 = *(float *)&(pSVar9->object_transform).rotation.field_0x4;
    fVar4 = *(float *)&(pSVar9->object_transform).rotation.field_0x8;
    fVar5 = *(float *)&(pSVar9->object_transform).rotation.field_0xc;
    pSVar1 = this->system_settings_;
    fVar6 = *(float *)&(pSVar1->head_rotation_).field_0xc;
    uStack_2c = 0;
    local_38 = 0;
    fVar11 = -*(float *)&pSVar1->head_rotation_;
    fVar12 = -*(float *)&(pSVar1->head_rotation_).field_0x4;
    fVar13 = -*(float *)&(pSVar1->head_rotation_).field_0x8;
    uStack_30 = 0;
    local_28 = fVar4 * fVar12 + fVar2 * fVar6 + (fVar5 * fVar11 - fVar3 * fVar13);
    fStack_24 = fVar2 * fVar13 + fVar3 * fVar6 + (fVar5 * fVar12 - fVar4 * fVar11);
    fStack_20 = fVar3 * fVar11 + fVar4 * fVar6 + (fVar5 * fVar13 - fVar2 * fVar12);
    fStack_1c = -(fVar4 * fVar13 + fVar3 * fVar12) + (fVar5 * fVar6 - fVar2 * fVar11);
    bVar7 = HoaRotator::Process(&this->hoa_rotator_,(WorldRotation *)&local_28,pAVar8,
                                &this->output_buffer_);
    pAVar10 = &this->output_buffer_;
    if (!bVar7) {
      pAVar10 = pAVar8;
    }
  }
  return pAVar10;
}

