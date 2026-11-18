// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FStrings @ 1455769a0

FStrings * __thiscall ShaderPrint::FStrings::FStrings(FStrings *this,uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = param_1 * param_2;
  piVar1 = &(this->Chars).ArrayMax;
  (this->Chars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->Infos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Infos).ArrayNum = 0;
  (this->Infos).ArrayMax = 0;
  (this->Chars).ArrayNum = 0;
  if (-1 < (int)uVar2) {
    if (0 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar2,&(this->Chars).AllocatorInstance,0,piVar1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// Add @ 14557ee40

void __thiscall ShaderPrint::FStrings::Add(FStrings *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  int local_res10;
  FScriptContainerElement local_48 [16];
  
  iVar7 = (param_1->Data).ArrayNum;
  local_res10 = (this->Chars).ArrayNum;
  pFVar9 = (param_1->Data).AllocatorInstance.Data;
  iVar2 = (this->Infos).ArrayNum;
  FVar10 = (FScriptContainerElement)((char)iVar7 + -1);
  if (iVar7 == 0) {
    FVar10 = (FScriptContainerElement)0x0;
  }
  pFVar11 = pFVar9 + (longlong)iVar7 * 2 + -2;
  if (iVar7 == 0) {
    pFVar11 = pFVar9 + (longlong)iVar7 * 2;
  }
  while( true ) {
    if ((param_1->Data).ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar11) break;
    local_48[0] = *pFVar9;
    pFVar3 = (this->Chars).AllocatorInstance.Data;
    if ((pFVar3 <= local_48) && (local_48 < pFVar3 + (this->Chars).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->Chars).ArrayNum;
    piVar1 = &(this->Chars).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->Chars).AllocatorInstance,piVar1);
    }
    pFVar9 = pFVar9 + 2;
    (this->Chars).ArrayNum = iVar6 + 1;
    (this->Chars).AllocatorInstance.Data[iVar6] = local_48[0];
  }
  iVar7 = (this->Infos).ArrayNum;
  piVar1 = &(this->Infos).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,piVar1);
  }
  (this->Infos).ArrayNum = iVar7 + 1;
  lVar8 = (longlong)iVar7;
  pFVar9 = (this->Infos).AllocatorInstance.Data;
  *(int *)(pFVar9 + lVar8 * 8) = iVar2;
  pFVar9[lVar8 * 8 + 6] = FVar10;
  *(short *)(pFVar9 + lVar8 * 8 + 4) = (short)local_res10;
  return;
}

// Add @ 14557efb0

void __thiscall ShaderPrint::FStrings::Add(FStrings *this,FString *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [16];
  FScriptContainerElement local_48 [16];
  
  iVar7 = (param_1->Data).ArrayNum;
  iVar2 = (this->Chars).ArrayNum;
  pFVar9 = (param_1->Data).AllocatorInstance.Data;
  FVar10 = (FScriptContainerElement)((char)iVar7 + -1);
  if (iVar7 == 0) {
    FVar10 = (FScriptContainerElement)0x0;
  }
  pFVar11 = pFVar9 + (longlong)iVar7 * 2 + -2;
  if (iVar7 == 0) {
    pFVar11 = pFVar9 + (longlong)iVar7 * 2;
  }
  while( true ) {
    if ((param_1->Data).ArrayNum != iVar7) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar9 == pFVar11) break;
    local_48[0] = *pFVar9;
    pFVar3 = (this->Chars).AllocatorInstance.Data;
    if ((pFVar3 <= local_48) && (local_48 < pFVar3 + (this->Chars).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->Chars).ArrayNum;
    piVar1 = &(this->Chars).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->Chars).AllocatorInstance,piVar1);
    }
    pFVar9 = pFVar9 + 2;
    (this->Chars).ArrayNum = iVar6 + 1;
    (this->Chars).AllocatorInstance.Data[iVar6] = local_48[0];
  }
  iVar7 = (this->Infos).ArrayNum;
  piVar1 = &(this->Infos).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,piVar1);
  }
  (this->Infos).ArrayNum = iVar7 + 1;
  lVar8 = (longlong)iVar7;
  pFVar9 = (this->Infos).AllocatorInstance.Data;
  *(uint *)(pFVar9 + lVar8 * 8) = param_2;
  pFVar9[lVar8 * 8 + 6] = FVar10;
  *(short *)(pFVar9 + lVar8 * 8 + 4) = (short)iVar2;
  return;
}

// GetParameters @ 145599e50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FShaderParameters * __thiscall
ShaderPrint::FStrings::GetParameters
          (FStrings *this,FShaderParameters *__return_storage_ptr__,FRDGBuilder *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  FShaderParameters *pFVar8;
  ulong64 uVar9;
  FRDGBufferSRV *pFVar10;
  longlong lVar11;
  ulonglong uVar12;
  FEntryInfo *pFVar13;
  uint uVar14;
  FScriptContainerElement local_88;
  FScriptContainerElement local_87;
  FScriptContainerElement local_86;
  FScriptContainerElement local_85 [5];
  FRDGBufferSRVDesc local_80;
  FRDGBufferSRVDesc local_60;
  FRDGBufferDesc local_40;
  
  iVar7 = 0;
  if ((this->Infos).ArrayNum == 0) {
    piVar1 = &(this->Infos).ArrayMax;
    if (*piVar1 == 0) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)this,piVar1);
    }
    local_88 = (FScriptContainerElement)0x4e;
    (this->Infos).ArrayNum = iVar7 + 1;
    pTVar2 = &this->Chars;
    lVar11 = (longlong)iVar7;
    pFVar3 = (this->Infos).AllocatorInstance.Data;
    *(undefined4 *)(pFVar3 + lVar11 * 8) = 0xffffffff;
    pFVar3[lVar11 * 8 + 6] = (FScriptContainerElement)0x4;
    *(undefined2 *)(pFVar3 + lVar11 * 8 + 4) = 0;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= &local_88) && (&local_88 < pFVar3 + (this->Chars).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FShaderParameters *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->Chars).ArrayNum;
    if (iVar7 == (this->Chars).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar2->AllocatorInstance,&(this->Chars).ArrayMax);
    }
    (this->Chars).ArrayNum = iVar7 + 1;
    local_87 = (FScriptContainerElement)0x6f;
    (pTVar2->AllocatorInstance).Data[iVar7] = local_88;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= &local_87) && (&local_87 < pFVar3 + (this->Chars).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FShaderParameters *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->Chars).ArrayNum;
    if (iVar7 == (this->Chars).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar2->AllocatorInstance,&(this->Chars).ArrayMax);
    }
    (this->Chars).ArrayNum = iVar7 + 1;
    local_86 = (FScriptContainerElement)0x6e;
    (pTVar2->AllocatorInstance).Data[iVar7] = local_87;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= &local_86) && (&local_86 < pFVar3 + (this->Chars).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FShaderParameters *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->Chars).ArrayNum;
    if (iVar7 == (this->Chars).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar2->AllocatorInstance,&(this->Chars).ArrayMax);
    }
    (this->Chars).ArrayNum = iVar7 + 1;
    local_85[0] = (FScriptContainerElement)0x65;
    (pTVar2->AllocatorInstance).Data[iVar7] = local_86;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= local_85) && (local_85 < pFVar3 + (this->Chars).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FShaderParameters *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->Chars).ArrayNum;
    if (iVar7 == (this->Chars).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar2->AllocatorInstance,&(this->Chars).ArrayMax);
    }
    (this->Chars).ArrayNum = iVar7 + 1;
    (pTVar2->AllocatorInstance).Data[iVar7] = local_85[0];
  }
  uVar12 = (ulonglong)_tls_index;
  __return_storage_ptr__->InfoCount = (this->Infos).ArrayNum;
  __return_storage_ptr__->CharCount = (this->Chars).ArrayNum;
  pvVar5 = ThreadLocalStoragePointer;
  __return_storage_ptr__->InfoBuffer = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->CharBuffer = (FRDGBufferSRV *)0x0;
  if ((*(int *)(*(longlong *)((longlong)pvVar5 + uVar12 * 8) + 0x9d4c) <
       `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
    ::__l2::DummyElement.EntryID = 0;
    `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
    ::__l2::DummyElement.Offset = 0;
    `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
    ::__l2::DummyElement.Length = '\0';
    `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
    ::__l2::DummyElement.Pad0 = '\0';
    _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar14 = (this->Infos).ArrayNum;
  bVar6 = uVar14 != 0;
  if (bVar6) {
    pFVar13 = (FEntryInfo *)(this->Infos).AllocatorInstance.Data;
    uVar9 = (ulong64)(uVar14 * 8);
  }
  else {
    uVar14 = 1;
    pFVar13 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<ShaderPrint::FStrings::FEntryInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
               ::__l2::DummyElement;
    uVar9 = 8;
  }
  local_80.Buffer =
       CreateStructuredBuffer(param_1,L"ShaderPrint.Strings.Infos",8,uVar14,pFVar13,uVar9,!bVar6);
  uVar14 = (uint)local_80._padding_ >> 8;
  local_80._padding_._0_4_ = (uint)local_80._padding_ & 0xffffff00;
  local_80._padding_._4_4_ = 0;
  local_80._padding_ = 0;
  local_80._padding_._0_4_ = 0xffffffff;
  if ((((local_80.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_80._padding_._0_4_ = CONCAT31((int3)uVar14,0x1c);
  }
  pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_80);
  pFVar3 = (this->Chars).AllocatorInstance.Data;
  __return_storage_ptr__->InfoBuffer = pFVar10;
  local_80._padding_._4_4_ = (this->Chars).ArrayNum;
  local_80._padding_ = 0;
  local_60._padding_._4_4_ = 0;
  local_60._padding_ = 0;
  local_80._padding_._0_4_ = 0x4109;
  local_80._padding_._0_4_ = 1;
  local_40.NumElements = local_80._padding_._4_4_;
  local_40.BytesPerElement = 1;
  local_40._12_4_ = local_80._padding_._4_4_;
  local_40.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  local_60._padding_._0_1_ = 0x39;
  local_40.Metadata = (FShaderParametersMetadata *)0x0;
  local_60._padding_._0_4_ = 0xffffffff;
  local_60.Buffer =
       CreateVertexBuffer(param_1,L"ShaderPrint.Strings.Chars",&local_40,pFVar3,
                          (longlong)(int)local_80._padding_._4_4_,None);
  pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_60);
  __return_storage_ptr__->CharBuffer = pFVar10;
  return __return_storage_ptr__;
}

