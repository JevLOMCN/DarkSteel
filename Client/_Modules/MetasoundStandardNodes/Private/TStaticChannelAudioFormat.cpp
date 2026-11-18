// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 4

// TStaticChannelAudioFormat<1> @ 14aff63a0

/* WARNING: Enum "Type": Some values do not have unique names */

TStaticChannelAudioFormat<1> * __thiscall
Metasound::TStaticChannelAudioFormat<1>::TStaticChannelAudioFormat<1>
          (TStaticChannelAudioFormat<1> *this,
          TDataWriteReference<Metasound::FAudioBuffer> (*param_1) [1])

{
  int *piVar1;
  longlong lVar2;
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar3;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TStaticChannelAudioFormat<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined8 local_40;
  TReferenceControllerBase<0> *local_38;
  
  (this->WritableBuffers).DataPtr = (TDataWriteReference<Metasound::FAudioBuffer> *)0x0;
  (this->WritableBuffers).ArrayNum = 0;
  (this->ReadableBuffers).DataPtr = (TDataReadReference<Metasound::FAudioBuffer> *)0x0;
  (this->ReadableBuffers).ArrayNum = 0;
  (this->WritableBufferStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WritableBufferStorage).ArrayNum = 0;
  (this->WritableBufferStorage).ArrayMax = 0;
  (this->ReadableBufferStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadableBufferStorage).ArrayNum = 0;
  (this->ReadableBufferStorage).ArrayMax = 0;
  lVar10 = *(longlong *)&(*param_1)[0].field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar10 + 0x10) != *(int *)(lVar10 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar2 = *(longlong *)&(*param_1)[0].field_0x8;
  iVar7 = *(int *)(lVar10 + 8);
  lVar10 = lVar2;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    lVar10 = *(longlong *)&(*param_1)[0].field_0x8;
  }
  if (iVar7 != *(int *)(lVar2 + 8)) {
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar10 + 0x10) != *(int *)(lVar10 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumFrames == InBuffers[i]->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Public\\MetasoundAudioFormats.h"
                       ,0xf0,L"All buffers must have same number of frames (%d != %d)");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TStaticChannelAudioFormat<1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar9 = (this->WritableBufferStorage).AllocatorInstance.Data;
  if ((pFVar9 <= param_1) &&
     (param_1 < pFVar9 + (longlong)(this->WritableBufferStorage).ArrayMax * 0x20)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TStaticChannelAudioFormat<1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar7 = (this->WritableBufferStorage).ArrayNum;
  if (iVar7 == (this->WritableBufferStorage).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->WritableBufferStorage).AllocatorInstance,
                       &(this->WritableBufferStorage).ArrayMax);
  }
  (this->WritableBufferStorage).ArrayNum = iVar7 + 1;
  pFVar9 = (this->WritableBufferStorage).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
  *(undefined ***)pFVar9 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar9 + 8) = *(undefined8 *)&(*param_1)[0].field_0x8;
  lVar10 = *(longlong *)&(*param_1)[0].field_0x10;
  *(longlong *)(pFVar9 + 0x10) = lVar10;
  if (lVar10 != 0) {
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
  }
  *(undefined ***)pFVar9 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  local_40 = *(undefined8 *)&(*param_1)[0].field_0x8;
  local_38 = *(TReferenceControllerBase<0> **)&(*param_1)[0].field_0x10;
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  pFVar9 = (this->ReadableBufferStorage).AllocatorInstance.Data;
  local_48 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar1 = &(this->ReadableBufferStorage).ArrayMax;
  if ((pFVar9 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar9 + (longlong)*piVar1 * 0x20)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TStaticChannelAudioFormat<1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar7 = (this->ReadableBufferStorage).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->ReadableBufferStorage).AllocatorInstance,piVar1);
  }
  (this->ReadableBufferStorage).ArrayNum = iVar7 + 1;
  pFVar9 = (this->ReadableBufferStorage).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
  *(undefined ***)pFVar9 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar9 + 8) = local_40;
  *(TReferenceControllerBase<0> **)(pFVar9 + 0x10) = local_38;
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  *(undefined ***)pFVar9 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  pTVar3 = (TDataWriteReference<Metasound::FAudioBuffer> *)
           (this->WritableBufferStorage).AllocatorInstance.Data;
  iVar7 = (this->WritableBufferStorage).ArrayNum;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TStaticChannelAudioFormat<1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  (this->WritableBuffers).DataPtr = pTVar3;
  *(ulonglong *)&(this->WritableBuffers).ArrayNum = CONCAT44(uStack_4c,iVar7);
  pTVar4 = (TDataReadReference<Metasound::FAudioBuffer> *)
           (this->ReadableBufferStorage).AllocatorInstance.Data;
  iVar7 = (this->ReadableBufferStorage).ArrayNum;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TStaticChannelAudioFormat<1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  (this->ReadableBuffers).DataPtr = pTVar4;
  *(ulonglong *)&(this->ReadableBuffers).ArrayNum = CONCAT44(uStack_4c,iVar7);
  return this;
}

// TStaticChannelAudioFormat<1> @ 14aff6710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TStaticChannelAudioFormat<1> * __thiscall
Metasound::TStaticChannelAudioFormat<1>::TStaticChannelAudioFormat<1>
          (TStaticChannelAudioFormat<1> *this,int param_1)

{
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar1;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TStaticChannelAudioFormat<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined4 uStack_6c;
  undefined **local_68;
  TReferenceControllerBase<0> *local_60;
  TReferenceControllerBase<0> *pTStack_58;
  undefined **local_48;
  TReferenceControllerBase<0> *local_40;
  TReferenceControllerBase<0> *local_38;
  
  (this->WritableBuffers).DataPtr = (TDataWriteReference<Metasound::FAudioBuffer> *)0x0;
  (this->WritableBuffers).ArrayNum = 0;
  (this->ReadableBuffers).DataPtr = (TDataReadReference<Metasound::FAudioBuffer> *)0x0;
  (this->ReadableBuffers).ArrayNum = 0;
  (this->WritableBufferStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WritableBufferStorage).ArrayNum = 0;
  (this->WritableBufferStorage).ArrayMax = 0;
  (this->ReadableBufferStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadableBufferStorage).ArrayNum = 0;
  (this->ReadableBufferStorage).ArrayMax = 0;
  iVar5 = 0;
  if (0 < param_1) {
    iVar5 = param_1;
  }
  pTStack_58 = ::operator_new(0x28);
  if (pTStack_58 == (TReferenceControllerBase<0> *)0x0) {
    local_60 = ___xmm_00000000000000000000000000000010;
    pTStack_58 = _UNK_150651568;
  }
  else {
    pTStack_58->SharedReferenceCount = 1;
    pTStack_58->WeakReferenceCount = 1;
    pTStack_58->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioBuffer_Metasound___0A__SharedPointerInternals__6B_
    ;
    FAudioBuffer::FAudioBuffer((FAudioBuffer *)(pTStack_58 + 1),iVar5);
    local_60 = pTStack_58 + 1;
    if ((local_60 == (TReferenceControllerBase<0> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TStaticChannelAudioFormat<1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_68 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  if (0 < local_60->SharedReferenceCount) {
    memset((void *)local_60->_padding_,0,(longlong)local_60->SharedReferenceCount << 2);
  }
  pFVar7 = (this->WritableBufferStorage).AllocatorInstance.Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar7 + (longlong)(this->WritableBufferStorage).ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TStaticChannelAudioFormat<1> *)(*pcVar3)();
    return pTVar6;
  }
  iVar5 = (this->WritableBufferStorage).ArrayNum;
  if (iVar5 == (this->WritableBufferStorage).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->WritableBufferStorage).AllocatorInstance,
                       &(this->WritableBufferStorage).ArrayMax);
  }
  (this->WritableBufferStorage).ArrayNum = iVar5 + 1;
  pFVar7 = (this->WritableBufferStorage).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(TReferenceControllerBase<0> **)(pFVar7 + 8) = local_60;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) = pTStack_58;
  if (pTStack_58 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_58->SharedReferenceCount = pTStack_58->SharedReferenceCount + 1;
  }
  *(undefined ***)pFVar7 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  local_40 = local_60;
  local_38 = pTStack_58;
  if (pTStack_58 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_58->SharedReferenceCount = pTStack_58->SharedReferenceCount + 1;
  }
  pFVar7 = (this->ReadableBufferStorage).AllocatorInstance.Data;
  local_48 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  if (((pFVar7 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar7 + (longlong)(this->ReadableBufferStorage).ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TStaticChannelAudioFormat<1> *)(*pcVar3)();
    return pTVar6;
  }
  iVar5 = (this->ReadableBufferStorage).ArrayNum;
  if (iVar5 == (this->ReadableBufferStorage).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->ReadableBufferStorage).AllocatorInstance,
                       &(this->ReadableBufferStorage).ArrayMax);
  }
  (this->ReadableBufferStorage).ArrayNum = iVar5 + 1;
  pFVar7 = (this->ReadableBufferStorage).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar7 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(TReferenceControllerBase<0> **)(pFVar7 + 8) = local_40;
  *(TReferenceControllerBase<0> **)(pFVar7 + 0x10) = local_38;
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  *(undefined ***)pFVar7 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_58);
  pTVar1 = (TDataWriteReference<Metasound::FAudioBuffer> *)
           (this->WritableBufferStorage).AllocatorInstance.Data;
  iVar5 = (this->WritableBufferStorage).ArrayNum;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TStaticChannelAudioFormat<1> *)(*pcVar3)();
    return pTVar6;
  }
  (this->WritableBuffers).DataPtr = pTVar1;
  *(ulonglong *)&(this->WritableBuffers).ArrayNum = CONCAT44(uStack_6c,iVar5);
  pTVar2 = (TDataReadReference<Metasound::FAudioBuffer> *)
           (this->ReadableBufferStorage).AllocatorInstance.Data;
  iVar5 = (this->ReadableBufferStorage).ArrayNum;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TStaticChannelAudioFormat<1> *)(*pcVar3)();
    return pTVar6;
  }
  (this->ReadableBuffers).DataPtr = pTVar2;
  *(ulonglong *)&(this->ReadableBuffers).ArrayNum = CONCAT44(uStack_6c,iVar5);
  return this;
}

// TStaticChannelAudioFormat<2> @ 14aff6a70

/* WARNING: Enum "Type": Some values do not have unique names */

TStaticChannelAudioFormat<2> * __thiscall
Metasound::TStaticChannelAudioFormat<2>::TStaticChannelAudioFormat<2>
          (TStaticChannelAudioFormat<2> *this,
          TDataWriteReference<Metasound::FAudioBuffer> (*param_1) [2])

{
  int *piVar1;
  longlong lVar2;
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar3;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TStaticChannelAudioFormat<2> *pTVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined8 local_40;
  TReferenceControllerBase<0> *local_38;
  
  (this->WritableBuffers).DataPtr = (TDataWriteReference<Metasound::FAudioBuffer> *)0x0;
  (this->WritableBuffers).ArrayNum = 0;
  (this->ReadableBuffers).DataPtr = (TDataReadReference<Metasound::FAudioBuffer> *)0x0;
  (this->ReadableBuffers).ArrayNum = 0;
  (this->WritableBufferStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WritableBufferStorage).ArrayNum = 0;
  (this->WritableBufferStorage).ArrayMax = 0;
  (this->ReadableBufferStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadableBufferStorage).ArrayNum = 0;
  (this->ReadableBufferStorage).ArrayMax = 0;
  lVar2 = *(longlong *)&(*param_1)[0].field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar8 = *(int *)(lVar2 + 8);
  lVar2 = *(longlong *)&(*param_1)[0].field_0x8;
  lVar11 = lVar2;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    lVar11 = *(longlong *)&(*param_1)[0].field_0x8;
  }
  if (iVar8 != *(int *)(lVar2 + 8)) {
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar11 + 0x10) != *(int *)(lVar11 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumFrames == InBuffers[i]->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Public\\MetasoundAudioFormats.h"
                       ,0xf0,L"All buffers must have same number of frames (%d != %d)");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TStaticChannelAudioFormat<2> *)(*pcVar5)();
      return pTVar9;
    }
  }
  pFVar10 = (this->WritableBufferStorage).AllocatorInstance.Data;
  if (((pFVar10 <= param_1) &&
      (param_1 < pFVar10 + (longlong)(this->WritableBufferStorage).ArrayMax * 0x20)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TStaticChannelAudioFormat<2> *)(*pcVar5)();
    return pTVar9;
  }
  iVar7 = (this->WritableBufferStorage).ArrayNum;
  if (iVar7 == (this->WritableBufferStorage).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->WritableBufferStorage).AllocatorInstance,
                       &(this->WritableBufferStorage).ArrayMax);
  }
  (this->WritableBufferStorage).ArrayNum = iVar7 + 1;
  pFVar10 = (this->WritableBufferStorage).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = *(undefined8 *)&(*param_1)[0].field_0x8;
  lVar2 = *(longlong *)&(*param_1)[0].field_0x10;
  *(longlong *)(pFVar10 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  local_40 = *(undefined8 *)&(*param_1)[0].field_0x8;
  local_38 = *(TReferenceControllerBase<0> **)&(*param_1)[0].field_0x10;
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  pFVar10 = (this->ReadableBufferStorage).AllocatorInstance.Data;
  local_48 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  if (((pFVar10 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar10 + (longlong)(this->ReadableBufferStorage).ArrayMax * 0x20)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TStaticChannelAudioFormat<2> *)(*pcVar5)();
    return pTVar9;
  }
  iVar7 = (this->ReadableBufferStorage).ArrayNum;
  if (iVar7 == (this->ReadableBufferStorage).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->ReadableBufferStorage).AllocatorInstance,
                       &(this->ReadableBufferStorage).ArrayMax);
  }
  (this->ReadableBufferStorage).ArrayNum = iVar7 + 1;
  pFVar10 = (this->ReadableBufferStorage).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_40;
  *(TReferenceControllerBase<0> **)(pFVar10 + 0x10) = local_38;
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  lVar2 = *(longlong *)&(*param_1)[1].field_0x8;
  lVar11 = lVar2;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    lVar11 = *(longlong *)&(*param_1)[1].field_0x8;
  }
  if (iVar8 != *(int *)(lVar2 + 8)) {
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar11 + 0x10) != *(int *)(lVar11 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumFrames == InBuffers[i]->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Public\\MetasoundAudioFormats.h"
                       ,0xf0,L"All buffers must have same number of frames (%d != %d)");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TStaticChannelAudioFormat<2> *)(*pcVar5)();
      return pTVar9;
    }
  }
  pFVar10 = (this->WritableBufferStorage).AllocatorInstance.Data;
  if (((pFVar10 <= (FScriptContainerElement *)(*param_1 + 1)) &&
      ((FScriptContainerElement *)(*param_1 + 1) <
       pFVar10 + (longlong)(this->WritableBufferStorage).ArrayMax * 0x20)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TStaticChannelAudioFormat<2> *)(*pcVar5)();
    return pTVar9;
  }
  iVar8 = (this->WritableBufferStorage).ArrayNum;
  if (iVar8 == (this->WritableBufferStorage).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->WritableBufferStorage).AllocatorInstance,
                       &(this->WritableBufferStorage).ArrayMax);
  }
  (this->WritableBufferStorage).ArrayNum = iVar8 + 1;
  pFVar10 = (this->WritableBufferStorage).AllocatorInstance.Data + (longlong)iVar8 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = *(undefined8 *)&(*param_1)[1].field_0x8;
  lVar2 = *(longlong *)&(*param_1)[1].field_0x10;
  *(longlong *)(pFVar10 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  local_40 = *(undefined8 *)&(*param_1)[1].field_0x8;
  local_38 = *(TReferenceControllerBase<0> **)&(*param_1)[1].field_0x10;
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  pFVar10 = (this->ReadableBufferStorage).AllocatorInstance.Data;
  local_48 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  piVar1 = &(this->ReadableBufferStorage).ArrayMax;
  if (((pFVar10 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar10 + (longlong)*piVar1 * 0x20)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TStaticChannelAudioFormat<2> *)(*pcVar5)();
    return pTVar9;
  }
  iVar8 = (this->ReadableBufferStorage).ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->ReadableBufferStorage).AllocatorInstance,piVar1);
  }
  (this->ReadableBufferStorage).ArrayNum = iVar8 + 1;
  pFVar10 = (this->ReadableBufferStorage).AllocatorInstance.Data + (longlong)iVar8 * 0x20;
  *(undefined ***)pFVar10 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)(pFVar10 + 8) = local_40;
  *(TReferenceControllerBase<0> **)(pFVar10 + 0x10) = local_38;
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  *(undefined ***)pFVar10 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  pTVar3 = (TDataWriteReference<Metasound::FAudioBuffer> *)
           (this->WritableBufferStorage).AllocatorInstance.Data;
  iVar8 = (this->WritableBufferStorage).ArrayNum;
  if ((iVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TStaticChannelAudioFormat<2> *)(*pcVar5)();
    return pTVar9;
  }
  (this->WritableBuffers).DataPtr = pTVar3;
  *(ulonglong *)&(this->WritableBuffers).ArrayNum = CONCAT44(uStack_4c,iVar8);
  pTVar4 = (TDataReadReference<Metasound::FAudioBuffer> *)
           (this->ReadableBufferStorage).AllocatorInstance.Data;
  iVar8 = (this->ReadableBufferStorage).ArrayNum;
  if ((iVar8 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TStaticChannelAudioFormat<2> *)(*pcVar5)();
    return pTVar9;
  }
  (this->ReadableBuffers).DataPtr = pTVar4;
  *(ulonglong *)&(this->ReadableBuffers).ArrayNum = CONCAT44(uStack_4c,iVar8);
  return this;
}

// TStaticChannelAudioFormat<2> @ 14aff7050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TStaticChannelAudioFormat<2> * __thiscall
Metasound::TStaticChannelAudioFormat<2>::TStaticChannelAudioFormat<2>
          (TStaticChannelAudioFormat<2> *this,int param_1)

{
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar1;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TStaticChannelAudioFormat<2> *pTVar7;
  TReferenceControllerBase<0> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined4 uStack_6c;
  undefined **local_68;
  TReferenceControllerBase<0> *local_60;
  TReferenceControllerBase<0> *pTStack_58;
  undefined **local_48;
  TReferenceControllerBase<0> *local_40;
  TReferenceControllerBase<0> *local_38;
  
  (this->WritableBuffers).DataPtr = (TDataWriteReference<Metasound::FAudioBuffer> *)0x0;
  (this->WritableBuffers).ArrayNum = 0;
  (this->ReadableBuffers).DataPtr = (TDataReadReference<Metasound::FAudioBuffer> *)0x0;
  (this->ReadableBuffers).ArrayNum = 0;
  (this->WritableBufferStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WritableBufferStorage).ArrayNum = 0;
  (this->WritableBufferStorage).ArrayMax = 0;
  (this->ReadableBufferStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadableBufferStorage).ArrayNum = 0;
  (this->ReadableBufferStorage).ArrayMax = 0;
  iVar6 = 0;
  if (0 < param_1) {
    iVar6 = param_1;
  }
  pTStack_58 = ::operator_new(0x28);
  if (pTStack_58 == (TReferenceControllerBase<0> *)0x0) {
    local_60 = ___xmm_00000000000000000000000000000010;
    pTStack_58 = _UNK_150651568;
  }
  else {
    pTStack_58->SharedReferenceCount = 1;
    pTStack_58->WeakReferenceCount = 1;
    pTStack_58->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioBuffer_Metasound___0A__SharedPointerInternals__6B_
    ;
    FAudioBuffer::FAudioBuffer((FAudioBuffer *)(pTStack_58 + 1),iVar6);
    local_60 = pTStack_58 + 1;
    if ((local_60 == (TReferenceControllerBase<0> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TStaticChannelAudioFormat<2> *)(*pcVar3)();
      return pTVar7;
    }
  }
  local_68 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  if (0 < local_60->SharedReferenceCount) {
    memset((void *)local_60->_padding_,0,(longlong)local_60->SharedReferenceCount << 2);
  }
  pFVar9 = (this->WritableBufferStorage).AllocatorInstance.Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar9 + (longlong)(this->WritableBufferStorage).ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TStaticChannelAudioFormat<2> *)(*pcVar3)();
    return pTVar7;
  }
  iVar5 = (this->WritableBufferStorage).ArrayNum;
  if (iVar5 == (this->WritableBufferStorage).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->WritableBufferStorage).AllocatorInstance,
                       &(this->WritableBufferStorage).ArrayMax);
  }
  (this->WritableBufferStorage).ArrayNum = iVar5 + 1;
  pFVar9 = (this->WritableBufferStorage).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar9 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(TReferenceControllerBase<0> **)(pFVar9 + 8) = local_60;
  *(TReferenceControllerBase<0> **)(pFVar9 + 0x10) = pTStack_58;
  if (pTStack_58 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_58->SharedReferenceCount = pTStack_58->SharedReferenceCount + 1;
  }
  *(undefined ***)pFVar9 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  local_40 = local_60;
  local_38 = pTStack_58;
  if (pTStack_58 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_58->SharedReferenceCount = pTStack_58->SharedReferenceCount + 1;
  }
  pFVar9 = (this->ReadableBufferStorage).AllocatorInstance.Data;
  local_48 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  if (((pFVar9 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar9 + (longlong)(this->ReadableBufferStorage).ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TStaticChannelAudioFormat<2> *)(*pcVar3)();
    return pTVar7;
  }
  iVar5 = (this->ReadableBufferStorage).ArrayNum;
  if (iVar5 == (this->ReadableBufferStorage).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->ReadableBufferStorage).AllocatorInstance,
                       &(this->ReadableBufferStorage).ArrayMax);
  }
  (this->ReadableBufferStorage).ArrayNum = iVar5 + 1;
  pFVar9 = (this->ReadableBufferStorage).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar9 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(TReferenceControllerBase<0> **)(pFVar9 + 8) = local_40;
  *(TReferenceControllerBase<0> **)(pFVar9 + 0x10) = local_38;
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  *(undefined ***)pFVar9 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_58);
  local_68 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  pTVar8 = ::operator_new(0x28);
  if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
    local_60 = ___xmm_00000000000000000000000000000010;
    pTStack_58 = _UNK_150651568;
  }
  else {
    pTVar8->SharedReferenceCount = 1;
    pTVar8->WeakReferenceCount = 1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAudioBuffer_Metasound___0A__SharedPointerInternals__6B_
    ;
    FAudioBuffer::FAudioBuffer((FAudioBuffer *)(pTVar8 + 1),iVar6);
    local_60 = pTVar8 + 1;
    pTStack_58 = pTVar8;
    if ((local_60 == (TReferenceControllerBase<0> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TStaticChannelAudioFormat<2> *)(*pcVar3)();
      return pTVar7;
    }
  }
  local_68 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  if (0 < local_60->SharedReferenceCount) {
    memset((void *)local_60->_padding_,0,(longlong)local_60->SharedReferenceCount << 2);
  }
  pFVar9 = (this->WritableBufferStorage).AllocatorInstance.Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar9 + (longlong)(this->WritableBufferStorage).ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TStaticChannelAudioFormat<2> *)(*pcVar3)();
    return pTVar7;
  }
  iVar6 = (this->WritableBufferStorage).ArrayNum;
  if (iVar6 == (this->WritableBufferStorage).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->WritableBufferStorage).AllocatorInstance,
                       &(this->WritableBufferStorage).ArrayMax);
  }
  (this->WritableBufferStorage).ArrayNum = iVar6 + 1;
  pFVar9 = (this->WritableBufferStorage).AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar9 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(TReferenceControllerBase<0> **)(pFVar9 + 8) = local_60;
  *(TReferenceControllerBase<0> **)(pFVar9 + 0x10) = pTStack_58;
  if (pTStack_58 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_58->SharedReferenceCount = pTStack_58->SharedReferenceCount + 1;
  }
  *(undefined ***)pFVar9 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  local_40 = local_60;
  local_38 = pTStack_58;
  if (pTStack_58 != (TReferenceControllerBase<0> *)0x0) {
    pTStack_58->SharedReferenceCount = pTStack_58->SharedReferenceCount + 1;
  }
  pFVar9 = (this->ReadableBufferStorage).AllocatorInstance.Data;
  local_48 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  if (((pFVar9 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar9 + (longlong)(this->ReadableBufferStorage).ArrayMax * 0x20)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TStaticChannelAudioFormat<2> *)(*pcVar3)();
    return pTVar7;
  }
  iVar6 = (this->ReadableBufferStorage).ArrayNum;
  if (iVar6 == (this->ReadableBufferStorage).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->ReadableBufferStorage).AllocatorInstance,
                       &(this->ReadableBufferStorage).ArrayMax);
  }
  (this->ReadableBufferStorage).ArrayNum = iVar6 + 1;
  pFVar9 = (this->ReadableBufferStorage).AllocatorInstance.Data + (longlong)iVar6 * 0x20;
  *(undefined ***)pFVar9 = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(TReferenceControllerBase<0> **)(pFVar9 + 8) = local_40;
  *(TReferenceControllerBase<0> **)(pFVar9 + 0x10) = local_38;
  if (local_38 != (TReferenceControllerBase<0> *)0x0) {
    local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
  }
  *(undefined ***)pFVar9 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_38);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTStack_58);
  pTVar1 = (TDataWriteReference<Metasound::FAudioBuffer> *)
           (this->WritableBufferStorage).AllocatorInstance.Data;
  iVar6 = (this->WritableBufferStorage).ArrayNum;
  if ((iVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TStaticChannelAudioFormat<2> *)(*pcVar3)();
    return pTVar7;
  }
  (this->WritableBuffers).DataPtr = pTVar1;
  *(ulonglong *)&(this->WritableBuffers).ArrayNum = CONCAT44(uStack_6c,iVar6);
  pTVar2 = (TDataReadReference<Metasound::FAudioBuffer> *)
           (this->ReadableBufferStorage).AllocatorInstance.Data;
  iVar6 = (this->ReadableBufferStorage).ArrayNum;
  if ((iVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TStaticChannelAudioFormat<2> *)(*pcVar3)();
    return pTVar7;
  }
  (this->ReadableBuffers).DataPtr = pTVar2;
  *(ulonglong *)&(this->ReadableBuffers).ArrayNum = CONCAT44(uStack_6c,iVar6);
  return this;
}

