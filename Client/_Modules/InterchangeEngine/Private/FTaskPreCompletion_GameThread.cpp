// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// operator() @ 14e4dc7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::__l2::<lambda_1>::operator()
          (void *this,int param_1,
          TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
          *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FName FVar4;
  void *_Src;
  UObject *pUVar5;
  UInterchangePipelineBase *this_00;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  ForAnyElementType *pFVar17;
  UActorComponent *this_01;
  FString *pFVar18;
  UPackage *pUVar19;
  UClass *pUVar20;
  UObject *pUVar21;
  FUObjectItem *pFVar22;
  ulonglong uVar23;
  longlong *plVar24;
  FScriptContainerElement *pFVar25;
  ForAnyElementType FVar26;
  FSoftObjectPath *pFVar27;
  FSoftObjectPath *pFVar28;
  longlong lVar29;
  undefined8 *puVar30;
  uint uVar31;
  undefined1 auStackY_268 [32];
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215;
  undefined1 local_214;
  undefined1 local_213 [3];
  uint local_210;
  undefined1 local_208 [24];
  UObject *local_1f0;
  FSoftObjectPath *local_1e8;
  FLLMScope local_1e0 [2];
  longlong local_1d8;
  uint local_1d0;
  undefined8 *local_1c8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_1c0;
  undefined8 local_1a8;
  FName local_1a0;
  UActorComponent *local_198;
  FString FStack_190;
  undefined8 local_180;
  ForAnyElementType local_178;
  undefined8 local_170;
  ForAnyElementType local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  FSoftObjectPath *local_148;
  FString local_140;
  FString local_130;
  UActorComponent *local_120;
  undefined8 *local_118;
  TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>
  *local_110;
  FMemScope local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar14 = false;
  lVar29 = (longlong)param_1;
  local_210 = 0;
  local_208._16_4_ = param_1;
  local_1c8 = this;
  local_110 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name59,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_1e0,LLMScope_Name59,false,None,Default,true);
  FMemScope::FMemScope(&local_108,&LLMScope_Name59,true);
  plVar24 = *(longlong **)this;
  if ((*plVar24 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(char *)(*plVar24 + 0x170) == '\0') {
    plVar24 = *(longlong **)this;
    if ((*plVar24 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((param_1 < 0) || (*(int *)(*plVar24 + 0x40) <= param_1)) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6447210497908408245>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskCompletion.cpp"
                          ,0x4b,"AsyncHelper->SourceDatas.IsValidIndex(SourceIndex)");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    plVar24 = *(longlong **)this;
    local_1a0.ComparisonIndex.Value = 0;
    local_1a0.Number = 0;
    local_198 = (UActorComponent *)0x0;
    FStack_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_190.Data.ArrayNum = 0;
    FStack_190.Data.ArrayMax = 0;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    local_150 = 0;
    if ((*plVar24 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *plVar24;
    uVar31 = (uint)~param_1 >> 0x1f;
    uVar15 = 0;
    if (param_1 < *(int *)(lVar3 + 0x40)) {
      uVar15 = uVar31;
    }
    local_208._20_4_ = uVar31;
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar24 = *(longlong **)this;
    local_1a8 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + lVar29 * 8);
    local_1d8 = lVar29;
    if ((*plVar24 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *plVar24;
    uVar15 = 0;
    if (param_1 < *(int *)(lVar3 + 0x30)) {
      uVar15 = uVar31;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar24 = *(longlong **)this;
    local_180 = *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + lVar29 * 8);
    if ((*plVar24 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *plVar24;
    pFVar17 = (ForAnyElementType *)(lVar3 + 0x58);
    if (&local_178 != pFVar17) {
      iVar16 = *(int *)(lVar3 + 0x60);
      pFVar25 = pFVar17->Data;
      local_170 = CONCAT44(local_170._4_4_,iVar16);
      if (((iVar16 != 0) || (local_170._4_4_ != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar16,local_170._4_4_,&local_178,iVar16,(int *)((longlong)&local_170 + 4))
         , iVar16 != 0)) {
        memcpy(local_178.Data,pFVar25,(longlong)iVar16 << 3);
      }
    }
    plVar24 = *(longlong **)this;
    if ((*plVar24 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *plVar24;
    pFVar17 = (ForAnyElementType *)(lVar3 + 0x68);
    if (&local_168 != pFVar17) {
      iVar16 = *(int *)(lVar3 + 0x70);
      pFVar25 = pFVar17->Data;
      local_160 = CONCAT44(local_160._4_4_,iVar16);
      if ((iVar16 == 0) && (local_160._4_4_ == 0)) {
        local_160 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar16,local_160._4_4_,&local_168,iVar16,(int *)((longlong)&local_160 + 4));
        if (iVar16 != 0) {
          memcpy(local_168.Data,pFVar25,(longlong)iVar16 << 3);
        }
      }
    }
    plVar24 = *(longlong **)this;
    if ((*plVar24 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *plVar24;
    uVar15 = 0;
    if (param_1 < *(int *)(lVar3 + 0x50)) {
      uVar15 = uVar31;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar27 = (FSoftObjectPath *)(param_2->AllocatorInstance).Data;
    local_158 = *(undefined8 *)(*(longlong *)(lVar3 + 0x48) + lVar29 * 8);
    local_1d0 = param_2->ArrayNum;
    uVar23 = (ulonglong)(int)local_1d0;
    pFVar28 = (FSoftObjectPath *)((longlong)pFVar27 + uVar23 * 0x38);
    local_148 = pFVar28;
    while( true ) {
      local_1e8 = pFVar27;
      if (param_2->ArrayNum != (int)uVar23) {
        local_217 = 0;
        `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_217);
      }
      if (pFVar27 == pFVar28) break;
      this_01 = (UActorComponent *)FSoftObjectPath::TryLoad(pFVar27,(FUObjectSerializeContext *)0x0)
      ;
      local_120 = this_01;
      if ((bVar11) && (pFVar27[1].AssetPath.PackageName != (FName)0x0)) {
        local_1a0 = pFVar27[1].AssetPath.AssetName;
        FVar4 = pFVar27[1].AssetPath.AssetName;
        local_198 = this_01;
        if (FVar4 == (FName)0x0) {
          bVar14 = true;
          pFVar18 = &local_140;
          local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_140.Data.ArrayNum = 0;
          local_140.Data.ArrayMax = 0;
LAB_14e4dcccd:
          if (FStack_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_190.Data.AllocatorInstance.Data);
          }
          FStack_190.Data.AllocatorInstance.Data = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_190.Data.ArrayNum = (pFVar18->Data).ArrayNum;
          FStack_190.Data.ArrayMax = (pFVar18->Data).ArrayMax;
          (pFVar18->Data).ArrayNum = 0;
          (pFVar18->Data).ArrayMax = 0;
        }
        else {
          bVar7 = true;
          pFVar18 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)FVar4,&local_100);
          if (&FStack_190 != pFVar18) goto LAB_14e4dcccd;
        }
        if ((bVar14) &&
           (bVar14 = false, local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
           ) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        if ((bVar7) &&
           (bVar7 = false, local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        pFVar27 = local_1e8;
        local_150 = *(undefined1 *)&local_1e8[1].SubPathString.Data.AllocatorInstance.Data;
        (**(code **)(*(longlong *)local_1e8[1].AssetPath.PackageName + 0x300))();
      }
      if ((this_01 != (UActorComponent *)0x0) && (((uint)this_01->_padding_ >> 0x1e & 1) == 0)) {
        lVar29 = **(longlong **)((longlong)this + 8);
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar29 + 0x28);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        pUVar19 = GetTransientPackage();
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar19,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar20 = Z_Construct_UClass_UInterchangeResultSuccess_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar20);
        local_c8._8_8_ = pUVar19;
        pUVar21 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar24 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar24 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
        local_1f0 = pUVar21;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar21);
        }
        if (((*(UObject ***)(lVar29 + 0x50) <= &local_1f0) &&
            (&local_1f0 < *(UObject ***)(lVar29 + 0x50) + *(int *)(lVar29 + 0x5c))) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar16 = *(int *)(lVar29 + 0x58);
        if (iVar16 == *(int *)(lVar29 + 0x5c)) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(lVar29 + 0x50),(int *)(lVar29 + 0x5c));
        }
        *(int *)(lVar29 + 0x58) = iVar16 + 1;
        *(UObject **)(*(longlong *)(lVar29 + 0x50) + (longlong)iVar16 * 8) = local_1f0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1f0);
        }
        LeaveCriticalSection(lpCriticalSection);
        plVar24 = *(longlong **)this;
        if ((*plVar24 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar29 = *plVar24;
        uVar15 = 0;
        if ((int)local_208._16_4_ < *(int *)(lVar29 + 0x40)) {
          uVar15 = local_208._20_4_;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar29 = *(longlong *)(*(longlong *)(lVar29 + 0x38) + local_1d8 * 8);
        local_208._0_8_ = (FScriptContainerElement *)0x0;
        iVar16 = *(int *)(lVar29 + 0x30);
        _Src = *(void **)(lVar29 + 0x28);
        local_208._8_4_ = iVar16;
        if (iVar16 == 0) {
          local_208._8_8_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar16,0,(ForAnyElementType *)local_208,iVar16,(int *)(local_208 + 0xc));
          memcpy((void *)local_208._0_8_,_Src,(longlong)iVar16 * 2);
        }
        pUVar5 = pUVar21 + 1;
        if (pUVar5 == (UObject *)local_208) {
          if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_208._0_8_);
          }
        }
        else {
          if (*(void **)pUVar5 != (void *)0x0) {
            FMemory::Free(*(void **)pUVar5);
          }
          *(undefined8 *)pUVar5 = local_208._0_8_;
          *(undefined4 *)&pUVar21[1].field_0x8 = local_208._8_4_;
          *(undefined4 *)&pUVar21[1].field_0xc = local_208._12_4_;
          local_208._8_8_ = 0;
          local_208._0_8_ = (FScriptContainerElement *)0x0;
        }
        pFVar18 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)this_01,&local_f0,(UObject *)0x0);
        puVar1 = &pUVar21[1].field_0x10;
        if ((FString *)puVar1 != pFVar18) {
          if (*(void **)puVar1 != (void *)0x0) {
            FMemory::Free(*(void **)puVar1);
          }
          *(FScriptContainerElement **)puVar1 = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)&pUVar21[1].field_0x18 = (pFVar18->Data).ArrayNum;
          *(int *)&pUVar21[1].field_0x1c = (pFVar18->Data).ArrayMax;
          (pFVar18->Data).ArrayNum = 0;
          (pFVar18->Data).ArrayMax = 0;
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        pUVar5 = (UObject *)this_01->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        *(UObject **)&pUVar21[2].field_0x8 = pUVar5;
        pFVar22 = FUObjectArray::IndexToObject
                            (&GUObjectArray,*(int *)((longlong)&this_01->_padding_ + 4));
        FUObjectItem::ClearRootFlags(pFVar22,Async);
        local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c0.ArrayNum = 0;
        local_1c0.ArrayMax = 0;
        GetObjectsWithOuter((UObjectBase *)this_01,&local_1c0,true,RF_NoFlags,Borrowed);
        iVar16 = local_1c0.ArrayNum;
        uVar23 = (ulonglong)local_1c0.ArrayNum;
        pFVar25 = local_1c0.AllocatorInstance.Data + uVar23 * 8;
        FVar26.Data = local_1c0.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar23 != iVar16) {
            local_216 = 0;
            `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_216);
          }
          if (FVar26.Data == pFVar25) break;
          pFVar22 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)(*(longlong *)FVar26.Data + 0xc));
          FUObjectItem::ClearRootFlags(pFVar22,Async);
          uVar23 = local_1c0._8_8_ & 0xffffffff;
          FVar26.Data = FVar26.Data + 8;
        }
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_01);
        if (**(char **)((longlong)this + 0x10) == '\0') {
          pUVar20 = Z_Construct_UClass_AActor_NoRegister();
          iVar16 = (int)pUVar20->_padding_;
          if ((*(int *)(this_01->_padding_ + 0x38) < iVar16) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
              &pUVar20->_padding_)) {
            pUVar20 = Z_Construct_UClass_UActorComponent_NoRegister();
            iVar16 = (int)pUVar20->_padding_;
            if ((iVar16 <= *(int *)(this_01->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar16 * 8) ==
                &pUVar20->_padding_)) {
              UActorComponent::RegisterComponent(this_01);
            }
          }
          else {
            (**(code **)(this_01->_padding_ + 0x5b0))(this_01);
          }
        }
        plVar24 = *(longlong **)this;
        if ((*plVar24 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar29 = *plVar24;
        local_210 = *(uint *)(lVar29 + 0x60);
        uVar23 = (ulonglong)(int)local_210;
        puVar30 = *(undefined8 **)(lVar29 + 0x58);
        local_118 = puVar30 + uVar23;
        while( true ) {
          puVar10 = local_118;
          if (*(int *)(lVar29 + 0x60) != (int)uVar23) {
            local_215 = 0;
            `TCheckedPointerIterator<TObjectPtr<UInterchangePipelineBase>,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(&local_215);
          }
          if (puVar30 == puVar10) break;
          this_00 = (UInterchangePipelineBase *)*puVar30;
          FVar4 = local_1e8[1].AssetPath.AssetName;
          bVar12 = *(bool *)&local_1e8[1].SubPathString.Data.AllocatorInstance.Data;
          if (FVar4 == (FName)0x0) {
            bVar8 = true;
            pFVar18 = &local_130;
            local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_130.Data.ArrayNum = 0;
            local_130.Data.ArrayMax = 0;
          }
          else {
            bVar9 = true;
            pFVar18 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)FVar4,&local_e0);
          }
          plVar24 = (longlong *)*local_1c8;
          if ((*plVar24 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar3 = *plVar24;
          uVar15 = 0;
          if ((int)local_208._16_4_ < *(int *)(lVar3 + 0x30)) {
            uVar15 = local_208._20_4_;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          UInterchangePipelineBase::ScriptedExecutePostFactoryPipeline
                    (this_00,*(UInterchangeBaseNodeContainer **)
                              (*(longlong *)(lVar3 + 0x28) + local_1d8 * 8),pFVar18,
                     (UObject *)local_120,bVar12);
          if ((bVar8) &&
             (bVar8 = false, local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          if ((bVar9) &&
             (bVar9 = false, local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          uVar23 = (ulonglong)local_210;
          puVar30 = puVar30 + 1;
        }
        pFVar27 = local_1e8;
        pFVar28 = local_148;
        this = local_1c8;
        if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.AllocatorInstance.Data);
          pFVar27 = local_1e8;
          pFVar28 = local_148;
          this = local_1c8;
        }
      }
      pFVar27 = (FSoftObjectPath *)&pFVar27[1].SubPathString.Data.ArrayNum;
      uVar23 = (ulonglong)local_1d0;
      param_2 = local_110;
    }
    iVar16 = param_2->ArrayNum;
    pFVar27 = (FSoftObjectPath *)(param_2->AllocatorInstance).Data;
    pFVar28 = (FSoftObjectPath *)((longlong)pFVar27 + (longlong)iVar16 * 0x38);
    while( true ) {
      if (param_2->ArrayNum != iVar16) {
        local_214 = 0;
        `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_214);
      }
      if (pFVar27 == pFVar28) break;
      pUVar21 = FSoftObjectPath::TryLoad(pFVar27,(FUObjectSerializeContext *)0x0);
      if ((pUVar21 == (UObject *)0x0) || ((*(uint *)&pUVar21->field_0x8 >> 0x1e & 1) != 0)) {
LAB_14e4dd3e8:
        pFVar27 = (FSoftObjectPath *)&pFVar27[1].SubPathString.Data.ArrayNum;
      }
      else {
        plVar24 = *(longlong **)this;
        if (**(char **)((longlong)this + 0x10) == '\0') {
          if ((*plVar24 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          UE::Interchange::FImportResult::AddImportedObject
                    (*(FImportResult **)(*plVar24 + 0x160),pUVar21);
          goto LAB_14e4dd3e8;
        }
        if ((*plVar24 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        UE::Interchange::FImportResult::AddImportedObject
                  (*(FImportResult **)(*plVar24 + 0x150),pUVar21);
        pFVar27 = (FSoftObjectPath *)&pFVar27[1].SubPathString.Data.ArrayNum;
      }
    }
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
    if (FStack_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_190.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar2 = (param_2->AllocatorInstance).Data;
    iVar16 = param_2->ArrayNum;
    pFVar25 = pFVar2 + 0x20;
    while( true ) {
      if (param_2->ArrayNum != iVar16) {
        `TCheckedPointerIterator<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_213);
      }
      if (pFVar25 + -0x20 == pFVar2 + (longlong)iVar16 * 0x38) break;
      if (*(longlong **)pFVar25 != (longlong *)0x0) {
        (**(code **)(**(longlong **)pFVar25 + 0x2f8))();
      }
      pFVar25 = pFVar25 + 0x38;
    }
  }
  FMemScope::~FMemScope(&local_108);
  FLLMScope::~FLLMScope(local_1e0);
  return;
}

// Execute @ 14e4f1bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Interchange::FTaskPreCompletion_GameThread::Execute(FTaskPreCompletion_GameThread *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  FImportAsyncHelper *pFVar3;
  bool bVar4;
  atomic<int> aVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  TObjectPtr<UInterchangeResultsContainer>_u_0 local_res18;
  FMemScope local_res20;
  FImportAsyncHelper *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FImportAsyncHelper **local_b8;
  TObjectPtr<UInterchangeResultsContainer>_u_0 *pTStack_b0;
  undefined1 *local_a8;
  code *local_98 [5];
  undefined8 *local_70;
  code *local_68 [5];
  undefined8 *local_40;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId41,"UE::Interchange::FTaskPreCompletion_GameThread::DoTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskCompletion.cpp"
               ,0x29);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId41);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name46,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name46,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name46,true);
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskCompletion.cpp"
                         ,0x30,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_c0 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  local_c8 = (FImportAsyncHelper *)0x0;
  if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = local_c0->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        local_c0 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4f1cd5;
      }
      LOCK();
      aVar5 = local_c0->SharedReferenceCount;
      bVar4 = aVar2 == aVar5;
      if (bVar4) {
        local_c0->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar4);
    if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
      local_c8 = (this->WeakAsyncHelper).Object;
    }
  }
LAB_14e4f1cd5:
  if (local_c8 == (FImportAsyncHelper *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AsyncHelper.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskCompletion.cpp"
                       ,0x33,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((local_c8 == (FImportAsyncHelper *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = local_c8;
  local_98[0] = (code *)0x0;
  local_res18 = (((local_c8->AssetImportResult).Object)->Results).field0_0x0;
  local_b8 = &local_c8;
  pTStack_b0 = &local_res18;
  local_a8 = local_res8;
  local_res8[0] = 1;
  local_70 = FMemory::Malloc(0x20,8);
  *local_70 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_70[1] = &local_c8;
  local_70[2] = &local_res18;
  local_70[3] = local_res8;
  if (local_70 + 1 != (longlong *)0x0) {
    local_98[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::__l2::<lambda_1>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                  ::Call;
  }
  FImportAsyncHelper::IterateImportedAssetsPerSourceIndex
            (pFVar3,(TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
                     *)local_98);
  local_res8[0] = 0;
  if ((local_c8 == (FImportAsyncHelper *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = local_c8;
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x20,8);
  *local_40 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_40[1] = local_b8;
  local_40[2] = pTStack_b0;
  local_40[3] = local_a8;
  if (local_40 + 1 != (longlong *)0x0) {
    local_68[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Interchange::FTaskPreCompletion_GameThread::Execute'::__l2::<lambda_1>,void,int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&>
                  ::Call;
  }
  FImportAsyncHelper::IterateImportedSceneObjectsPerSourceIndex
            (pFVar3,(TFunction<void___cdecl(int,TArray<UE::Interchange::FImportAsyncHelper::FImportedObjectInfo,TSizedDefaultAllocator<32>_>_const_&)>
                     *)local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTaskThread @ 14e4f98d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EInterchangeTaskThread __thiscall
UE::Interchange::FTaskPreCompletion_GameThread::GetTaskThread(FTaskPreCompletion_GameThread *this)

{
  return GameThread;
}

