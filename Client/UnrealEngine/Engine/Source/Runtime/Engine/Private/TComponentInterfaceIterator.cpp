// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// TComponentInterfaceIterator<IPrimitiveComponent> @ 148087420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TComponentInterfaceIterator<IPrimitiveComponent> * __thiscall
TComponentInterfaceIterator<IPrimitiveComponent>::TComponentInterfaceIterator<IPrimitiveComponent>
          (TComponentInterfaceIterator<IPrimitiveComponent> *this,EObjectFlags param_1,bool param_2,
          EInternalObjectFlags param_3)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  code *pcVar5;
  EObjectFlags EVar6;
  EInternalObjectFlags EVar7;
  bool bVar8;
  EInternalObjectFlags EVar9;
  int iVar10;
  undefined8 uVar11;
  TComponentInterfaceIterator<IPrimitiveComponent> *pTVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  undefined1 local_res8 [8];
  EObjectFlags local_res10;
  bool local_res18;
  EInternalObjectFlags local_res20;
  undefined1 local_78 [4];
  uint local_74;
  longlong local_70;
  undefined8 local_68;
  FScriptContainerElement *local_60;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_58;
  
  piVar1 = &(this->Interfaces).ArrayMax;
  (this->Interfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interfaces).ArrayNum = 0;
  *piVar1 = 0;
  this->Index = -1;
  local_74 = IPrimitiveComponent::Implementers.ArrayNum;
  uVar15 = IPrimitiveComponent::Implementers._8_8_ & 0xffffffff;
  local_60 = IPrimitiveComponent::Implementers.AllocatorInstance.Data +
             (longlong)(int)local_74 * 0x40;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FVar16 = IPrimitiveComponent::Implementers.AllocatorInstance;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    pFVar3 = local_60;
    EVar7 = local_res20;
    bVar8 = local_res18;
    EVar6 = local_res10;
    if (IPrimitiveComponent::Implementers.ArrayNum != (int)uVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FComponentInterfaceImplementation,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar16.Data == pFVar3) {
      this->Index = 0;
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return this;
    }
    local_58.ArrayNum = 0;
    if ((local_58.ArrayMax < 0) && (local_58.ArrayMax != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    }
    EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
    GetObjectsOfClass(*(UClass **)FVar16.Data,&local_58,bVar8,EVar6,
                      EVar9 | EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted))
    ;
    iVar4 = (this->Interfaces).ArrayNum;
    uVar2 = iVar4 + local_58.ArrayNum;
    if ((int)uVar2 < 0) break;
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = local_58.ArrayNum;
    pFVar3 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
    FVar14.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      if (local_58.ArrayNum != iVar4) {
        local_78[0] = 0;
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_78);
      }
      if (FVar14.Data == pFVar3) break;
      local_68 = *(undefined8 *)FVar14.Data;
      UE::Core::Private::Function::CheckCallable(*(void **)(FVar16.Data + 0x10));
      pcVar5 = *(code **)(FVar16.Data + 0x10);
      pFVar13 = FVar16.Data + 0x20;
      if (*(FScriptContainerElement **)(FVar16.Data + 0x38) != (FScriptContainerElement *)0x0) {
        pFVar13 = *(FScriptContainerElement **)(FVar16.Data + 0x38);
      }
      uVar11 = (**(code **)(*(longlong *)pFVar13 + 8))();
      local_70 = (*pcVar5)(uVar11,&local_68);
      if (local_70 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Interface",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\ComponentInterfaceIterator.h"
                           ,0x1f,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TComponentInterfaceIterator<IPrimitiveComponent> *)(*pcVar5)();
          return pTVar12;
        }
      }
      pFVar13 = (this->Interfaces).AllocatorInstance.Data;
      if ((pFVar13 <= (FScriptContainerElement *)&local_70) &&
         ((FScriptContainerElement *)&local_70 < pFVar13 + (longlong)*piVar1 * 8)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TComponentInterfaceIterator<IPrimitiveComponent> *)(*pcVar5)();
          return pTVar12;
        }
      }
      iVar10 = (this->Interfaces).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this,piVar1);
      }
      FVar14.Data = FVar14.Data + 8;
      (this->Interfaces).ArrayNum = iVar10 + 1;
      *(longlong *)((this->Interfaces).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_70;
    }
    FVar16.Data = FVar16.Data + 0x40;
    uVar15 = (ulonglong)local_74;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// TComponentInterfaceIterator<IStaticMeshComponent> @ 1480876d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TComponentInterfaceIterator<IStaticMeshComponent> * __thiscall
TComponentInterfaceIterator<IStaticMeshComponent>::TComponentInterfaceIterator<IStaticMeshComponent>
          (TComponentInterfaceIterator<IStaticMeshComponent> *this,EObjectFlags param_1,bool param_2
          ,EInternalObjectFlags param_3)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  code *pcVar5;
  EObjectFlags EVar6;
  EInternalObjectFlags EVar7;
  bool bVar8;
  EInternalObjectFlags EVar9;
  int iVar10;
  undefined8 uVar11;
  TComponentInterfaceIterator<IStaticMeshComponent> *pTVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  undefined1 local_res8 [8];
  EObjectFlags local_res10;
  bool local_res18;
  EInternalObjectFlags local_res20;
  undefined1 local_78 [4];
  uint local_74;
  longlong local_70;
  undefined8 local_68;
  FScriptContainerElement *local_60;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_58;
  
  piVar1 = &(this->Interfaces).ArrayMax;
  (this->Interfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interfaces).ArrayNum = 0;
  *piVar1 = 0;
  this->Index = -1;
  local_74 = IStaticMeshComponent::Implementers.ArrayNum;
  uVar15 = IStaticMeshComponent::Implementers._8_8_ & 0xffffffff;
  local_60 = IStaticMeshComponent::Implementers.AllocatorInstance.Data +
             (longlong)(int)local_74 * 0x40;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FVar16 = IStaticMeshComponent::Implementers.AllocatorInstance;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    pFVar3 = local_60;
    EVar7 = local_res20;
    bVar8 = local_res18;
    EVar6 = local_res10;
    if (IStaticMeshComponent::Implementers.ArrayNum != (int)uVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FComponentInterfaceImplementation,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar16.Data == pFVar3) {
      this->Index = 0;
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return this;
    }
    local_58.ArrayNum = 0;
    if ((local_58.ArrayMax < 0) && (local_58.ArrayMax != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    }
    EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
    GetObjectsOfClass(*(UClass **)FVar16.Data,&local_58,bVar8,EVar6,
                      EVar9 | EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted))
    ;
    iVar4 = (this->Interfaces).ArrayNum;
    uVar2 = iVar4 + local_58.ArrayNum;
    if ((int)uVar2 < 0) break;
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,(ForAnyElementType *)this,iVar4,piVar1);
    }
    iVar4 = local_58.ArrayNum;
    pFVar3 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
    FVar14.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      if (local_58.ArrayNum != iVar4) {
        local_78[0] = 0;
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_78);
      }
      if (FVar14.Data == pFVar3) break;
      local_68 = *(undefined8 *)FVar14.Data;
      UE::Core::Private::Function::CheckCallable(*(void **)(FVar16.Data + 0x10));
      pcVar5 = *(code **)(FVar16.Data + 0x10);
      pFVar13 = FVar16.Data + 0x20;
      if (*(FScriptContainerElement **)(FVar16.Data + 0x38) != (FScriptContainerElement *)0x0) {
        pFVar13 = *(FScriptContainerElement **)(FVar16.Data + 0x38);
      }
      uVar11 = (**(code **)(*(longlong *)pFVar13 + 8))();
      local_70 = (*pcVar5)(uVar11,&local_68);
      if (local_70 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Interface",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\ComponentInterfaceIterator.h"
                           ,0x1f,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TComponentInterfaceIterator<IStaticMeshComponent> *)(*pcVar5)();
          return pTVar12;
        }
      }
      pFVar13 = (this->Interfaces).AllocatorInstance.Data;
      if ((pFVar13 <= (FScriptContainerElement *)&local_70) &&
         ((FScriptContainerElement *)&local_70 < pFVar13 + (longlong)*piVar1 * 8)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TComponentInterfaceIterator<IStaticMeshComponent> *)(*pcVar5)();
          return pTVar12;
        }
      }
      iVar10 = (this->Interfaces).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this,piVar1);
      }
      FVar14.Data = FVar14.Data + 8;
      (this->Interfaces).ArrayNum = iVar10 + 1;
      *(longlong *)((this->Interfaces).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_70;
    }
    FVar16.Data = FVar16.Data + 0x40;
    uVar15 = (ulonglong)local_74;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

