// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// GetShaderPlatform @ 144816ad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

EShaderPlatform __thiscall FSceneViewFamily::GetShaderPlatform(FSceneViewFamily *this)

{
  Type TVar1;
  
  TVar1 = GetFeatureLevel(this);
  if (TVar1 == Num) {
    return SP_NumPlatforms;
  }
  return GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar1];
}

// UseDebugViewPS @ 144838060

bool __thiscall FSceneViewFamily::UseDebugViewPS(FSceneViewFamily *this)

{
  EDebugViewShaderMode EVar1;
  
  EVar1 = GetDebugViewShaderMode(this);
  return EVar1 != DVSM_None;
}

// GetExtentionData<FMeshEdgesViewFamilyData> @ 144ee5e00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FMeshEdgesViewFamilyData * __thiscall
FSceneViewFamily::GetExtentionData<FMeshEdgesViewFamilyData>(FSceneViewFamily *this)

{
  int iVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ViewExtentionDatas).ArrayNum;
  pFVar3 = (this->ViewExtentionDatas).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ViewExtentionDatas).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<ISceneViewFamilyExtentionData,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    pwVar2 = (wchar_t *)(**(code **)(**(longlong **)pFVar3 + 8))();
    if (pwVar2 == L"FMeshEdgesViewFamilyData") {
      return *(FMeshEdgesViewFamilyData **)pFVar3;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return (FMeshEdgesViewFamilyData *)0x0;
}

// GetOrCreateExtentionData<FMeshEdgesViewFamilyData> @ 144ee6390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FMeshEdgesViewFamilyData * __thiscall
FSceneViewFamily::GetOrCreateExtentionData<FMeshEdgesViewFamilyData>(FSceneViewFamily *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMeshEdgesViewFamilyData *pFVar5;
  wchar_t *pwVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TArray<TSharedRef<ISceneViewFamilyExtentionData,1>,TSizedDefaultAllocator<32>_> *pTVar11;
  TReferenceControllerBase<1> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pFVar5 = GetExtentionData<FMeshEdgesViewFamilyData>(this);
  if (pFVar5 == (FMeshEdgesViewFamilyData *)0x0) {
    pTVar11 = &this->ViewExtentionDatas;
    pTStack_10 = ::operator_new(0x80);
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    if (pTStack_10 == (TReferenceControllerBase<1> *)0x0) {
      local_18 = ___xmm_00000000000000000000000000000010;
      pTStack_10 = _UNK_150651568;
    }
    else {
      pTStack_10->SharedReferenceCount = (atomic<int>)0x1;
      pTStack_10->WeakReferenceCount = (atomic<int>)0x1;
      pTStack_10->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFMeshEdgesViewFamilyData___00_SharedPointerInternals__6B_
      ;
      pTStack_10[4].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_10[4].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_10[5].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_10[5].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_10[6].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_10[6].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_10[7]._padding_ = 0;
      pTStack_10[1]._padding_ = (longlong)&___7FMeshEdgesViewFamilyData__6B_;
      pTStack_10[1].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_10[1].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_10[2]._padding_ = 0;
      pTStack_10[2].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_10[2].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_10[3]._padding_ = 0;
      pTStack_10[3].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_10[3].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_10[4]._padding_ = 0;
      pTStack_10[5]._padding_ = 0;
      pTStack_10[7].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_10[7].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_10[6]._padding_ =
           (longlong)
           &
           ___7__TFunction_OwnedObject_V<lambda_25_>_FMeshEdgesViewFamilySettings___0A__0A__Function_Private_Core_UE__6B_
      ;
      if (pTStack_10 != (TReferenceControllerBase<1> *)0xffffffffffffff98) {
        pTStack_10[5]._padding_ =
             (longlong)
             UE::Core::Private::Function::
             TFunctionRefCaller<FMeshEdgesViewFamilySettings::<lambda_25_>,void,FSceneViewFamily_&>
             ::Call;
      }
      if ((pTStack_10 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMeshEdgesViewFamilyData *)(*pcVar2)();
        return pFVar5;
      }
      LOCK();
      pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
      UNLOCK();
      pTVar10 = pTStack_10;
      local_18 = pTStack_10 + 1;
    }
    pFVar8 = (pTVar11->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 <
         pFVar8 + (longlong)(this->ViewExtentionDatas).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMeshEdgesViewFamilyData *)(*pcVar2)();
      return pFVar5;
    }
    iVar4 = (this->ViewExtentionDatas).ArrayNum;
    piVar1 = &(this->ViewExtentionDatas).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar11->AllocatorInstance,piVar1);
    }
    pFVar8 = (pTVar11->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    (this->ViewExtentionDatas).ArrayNum = iVar4 + 1;
    *(TReferenceControllerBase<1> **)pFVar8 = local_18;
    *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTStack_10;
    if (pTStack_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_10->SharedReferenceCount = (atomic<int>)((int)pTStack_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    iVar4 = (this->ViewExtentionDatas).ArrayNum;
    uVar7 = iVar4 - 1;
    uVar9 = 0;
    if ((int)uVar7 < iVar4) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMeshEdgesViewFamilyData *)(*pcVar2)();
      return pFVar5;
    }
    pFVar5 = *(FMeshEdgesViewFamilyData **)
              ((pTVar11->AllocatorInstance).Data +
              (longlong)(this->ViewExtentionDatas).ArrayNum * 0x10 + -0x10);
    pwVar6 = (wchar_t *)(**(code **)(pFVar5->_padding_ + 8))(pFVar5);
    if ((pwVar6 != L"FMeshEdgesViewFamilyData") &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ViewExtensionData->GetSubclassIdentifier() == TExtensionData::GSubclassIdentifier"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                           ,0xa4e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMeshEdgesViewFamilyData *)(*pcVar2)();
      return pFVar5;
    }
  }
  return pFVar5;
}

// SetScreenPercentageInterface @ 145504de0

void __thiscall
FSceneViewFamily::SetScreenPercentageInterface
          (FSceneViewFamily *this,ISceneViewFamilyScreenPercentage *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (ISceneViewFamilyScreenPercentage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InScreenPercentageInterface",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                       ,0xa24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ScreenPercentageInterface != (ISceneViewFamilyScreenPercentage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScreenPercentageInterface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                       ,0xa25,L"View family already had a screen percentage interface assigned.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ScreenPercentageInterface = param_1;
  return;
}

