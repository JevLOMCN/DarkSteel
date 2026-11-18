// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 2

// FGeometryCacheComponentResetAsset @ 14e6dff50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FGeometryCacheComponentResetAsset * __thiscall
FGeometryCacheComponentResetAsset::FGeometryCacheComponentResetAsset
          (FGeometryCacheComponentResetAsset *this,UGeometryCache *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  FGeometryCacheComponentResetAsset *pFVar8;
  longlong lVar9;
  undefined8 local_38;
  TObjectIterator<UGeometryCacheComponent> local_30;
  
  this->GeometryCache = param_1;
  (this->GeometryCacheComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometryCacheComponents).ArrayNum = 0;
  (this->GeometryCacheComponents).ArrayMax = 0;
  local_30.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ObjectArray.ArrayNum = 0;
  local_30.ObjectArray.ArrayMax = 0;
  local_30.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
  GetObjectsOfClass(pUVar7,&local_30.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UGeometryCacheComponent>::Advance(&local_30);
    lVar9 = (longlong)local_30.Index;
    if (local_30.Index < 0) break;
    if (local_30.ObjectArray.ArrayNum <= local_30.Index) break;
    uVar5 = 0;
    if (local_30.Index < local_30.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_30.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FGeometryCacheComponentResetAsset *)(*pcVar2)();
        return pFVar8;
      }
    }
    if (*(UGeometryCache **)
         (*(longlong *)(local_30.ObjectArray.AllocatorInstance.Data + lVar9 * 8) + 0x590) ==
        (UGeometryCache *)0x0) {
      bVar3 = param_1 == (UGeometryCache *)0x0;
    }
    else {
      bVar3 = *(UGeometryCache **)
               (*(longlong *)(local_30.ObjectArray.AllocatorInstance.Data + lVar9 * 8) + 0x590) ==
              param_1;
    }
    if (bVar3) {
      lVar9 = (longlong)local_30.Index;
      uVar5 = 0;
      if (local_30.Index < local_30.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_30.Index >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FGeometryCacheComponentResetAsset *)(*pcVar2)();
          return pFVar8;
        }
      }
      UGeometryCacheComponent::SetGeometryCache
                (*(UGeometryCacheComponent **)
                  (local_30.ObjectArray.AllocatorInstance.Data + lVar9 * 8),(UGeometryCache *)0x0);
      lVar9 = (longlong)local_30.Index;
      uVar5 = 0;
      if (local_30.Index < local_30.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_30.Index >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FGeometryCacheComponentResetAsset *)(*pcVar2)();
          return pFVar8;
        }
      }
      local_38 = *(undefined8 *)(local_30.ObjectArray.AllocatorInstance.Data + lVar9 * 8);
      pFVar1 = (this->GeometryCacheComponents).AllocatorInstance.Data;
      if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
         ((FScriptContainerElement *)&local_38 <
          pFVar1 + (longlong)(this->GeometryCacheComponents).ArrayMax * 8)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FGeometryCacheComponentResetAsset *)(*pcVar2)();
          return pFVar8;
        }
      }
      iVar6 = (this->GeometryCacheComponents).ArrayNum;
      if (iVar6 == (this->GeometryCacheComponents).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->GeometryCacheComponents).AllocatorInstance,
                           &(this->GeometryCacheComponents).ArrayMax);
      }
      (this->GeometryCacheComponents).ArrayNum = iVar6 + 1;
      *(undefined8 *)((this->GeometryCacheComponents).AllocatorInstance.Data + (longlong)iVar6 * 8)
           = local_38;
    }
  }
  if (local_30.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.ObjectArray.AllocatorInstance.Data);
  }
  return this;
}

// ~FGeometryCacheComponentResetAsset @ 14e6e1320

void __thiscall
FGeometryCacheComponentResetAsset::~FGeometryCacheComponentResetAsset
          (FGeometryCacheComponentResetAsset *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->GeometryCacheComponents).AllocatorInstance.Data;
  iVar1 = (this->GeometryCacheComponents).ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->GeometryCacheComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UGeometryCacheComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    UGeometryCacheComponent::SetGeometryCache
              (*(UGeometryCacheComponent **)pFVar3,this->GeometryCache);
    pFVar3 = pFVar3 + 8;
  }
  pFVar2 = (this->GeometryCacheComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

