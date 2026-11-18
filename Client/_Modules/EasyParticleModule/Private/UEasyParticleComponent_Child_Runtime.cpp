// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 14

// StaticClass @ 14aca5490

UClass * __cdecl UEasyParticleComponent_Child_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Child_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Child_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Child_Runtime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Child_Runtime,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Child_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Child_Runtime>,local_res8,
               UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Child_Runtime.InnerSingleton;
}

// UEasyParticleComponent_Child_Runtime @ 14aca9860

UEasyParticleComponent_Child_Runtime * __thiscall
UEasyParticleComponent_Child_Runtime::UEasyParticleComponent_Child_Runtime
          (UEasyParticleComponent_Child_Runtime *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Child_Runtime__6B_;
  (this->ChildEmitterArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildEmitterArray).ArrayNum = 0;
  (this->ChildEmitterArray).ArrayMax = 0;
  this->StopCreateParticle = false;
  return this;
}

// ~UEasyParticleComponent_Child_Runtime @ 14acaa670

void __thiscall
UEasyParticleComponent_Child_Runtime::~UEasyParticleComponent_Child_Runtime
          (UEasyParticleComponent_Child_Runtime *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Child_Runtime__6B_;
  DestructItems<FEasyParticleComponentRuntime_Child_SubEmitter,int>
            ((FEasyParticleComponentRuntime_Child_SubEmitter *)
             (this->ChildEmitterArray).AllocatorInstance.Data,(this->ChildEmitterArray).ArrayNum);
  pFVar1 = (this->ChildEmitterArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acac980

UClass * __cdecl UEasyParticleComponent_Child_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Child_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Child_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Child_Runtime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Child_Runtime,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Child_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Child_Runtime>,local_res8,
               UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Child_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Child_Runtime @ 14acae280

void __cdecl
UEasyParticleComponent_Child_Runtime::StaticRegisterNativesUEasyParticleComponent_Child_Runtime
          (void)

{
  return;
}

// UEasyParticleComponent_Child_Runtime @ 14acb6520

UEasyParticleComponent_Child_Runtime * __thiscall
UEasyParticleComponent_Child_Runtime::UEasyParticleComponent_Child_Runtime
          (UEasyParticleComponent_Child_Runtime *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Child_Runtime__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ChildEmitterArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildEmitterArray).ArrayNum = 0;
  (this->ChildEmitterArray).ArrayMax = 0;
  this->StopCreateParticle = false;
  return this;
}

// GetParticleCount @ 14acb9b20

int __thiscall
UEasyParticleComponent_Child_Runtime::GetParticleCount(UEasyParticleComponent_Child_Runtime *this)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  
  local_res18 = (this->ChildEmitterArray).ArrayNum;
  uVar4 = (ulonglong)(int)local_res18;
  iVar8 = 0;
  pFVar10 = (this->ChildEmitterArray).AllocatorInstance.Data;
  pFVar7 = pFVar10 + 0x10;
  pFVar9 = pFVar10 + uVar4 * 0x50;
  while( true ) {
    if ((this->ChildEmitterArray).ArrayNum != (int)uVar4) {
      `TCheckedPointerIterator<FEasyParticleComponentRuntime_Child_SubEmitter,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar9) break;
    puVar5 = *(undefined8 **)(pFVar7 + -8);
    iVar6 = 0;
    iVar2 = *(int *)pFVar7;
    puVar1 = puVar5 + iVar2;
    while( true ) {
      if (*(int *)pFVar7 != iVar2) {
        `TCheckedPointerIterator<UEasyParticleState_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar5 == puVar1) break;
      if ((UEasyParticleState *)*puVar5 != (UEasyParticleState *)0x0) {
        iVar3 = UEasyParticleState::GetParticleCount((UEasyParticleState *)*puVar5);
        iVar6 = iVar6 + iVar3;
      }
      puVar5 = puVar5 + 1;
    }
    iVar8 = iVar8 + iVar6;
    uVar4 = (ulonglong)local_res18;
    pFVar10 = pFVar10 + 0x50;
    pFVar7 = pFVar7 + 0x50;
  }
  return iVar8;
}

// GetParticleCountInPool @ 14acb9c50

int __thiscall
UEasyParticleComponent_Child_Runtime::GetParticleCountInPool
          (UEasyParticleComponent_Child_Runtime *this)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  
  local_res18 = (this->ChildEmitterArray).ArrayNum;
  uVar4 = (ulonglong)(int)local_res18;
  iVar8 = 0;
  pFVar10 = (this->ChildEmitterArray).AllocatorInstance.Data;
  pFVar7 = pFVar10 + 0x10;
  pFVar9 = pFVar10 + uVar4 * 0x50;
  while( true ) {
    if ((this->ChildEmitterArray).ArrayNum != (int)uVar4) {
      `TCheckedPointerIterator<FEasyParticleComponentRuntime_Child_SubEmitter,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar9) break;
    puVar5 = *(undefined8 **)(pFVar7 + -8);
    iVar6 = 0;
    iVar2 = *(int *)pFVar7;
    puVar1 = puVar5 + iVar2;
    while( true ) {
      if (*(int *)pFVar7 != iVar2) {
        `TCheckedPointerIterator<UEasyParticleState_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar5 == puVar1) break;
      if ((UEasyParticleState *)*puVar5 != (UEasyParticleState *)0x0) {
        iVar3 = UEasyParticleState::GetParticleCountInPool((UEasyParticleState *)*puVar5);
        iVar6 = iVar6 + iVar3;
      }
      puVar5 = puVar5 + 1;
    }
    iVar8 = iVar8 + iVar6;
    uVar4 = (ulonglong)local_res18;
    pFVar10 = pFVar10 + 0x50;
    pFVar7 = pFVar7 + 0x50;
  }
  return iVar8;
}

// Init_Implementation @ 14acbb860

void __thiscall
UEasyParticleComponent_Child_Runtime::Init_Implementation
          (UEasyParticleComponent_Child_Runtime *this,FGeometry *param_1)

{
  TArray<FEasyParticleComponentRuntime_Child_SubEmitter,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  UEasyParticleEmitterAsset *pUVar3;
  FEasyParticleComponentRuntime_Child_SubEmitter *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  undefined8 *puVar19;
  undefined1 local_res18 [8];
  uint local_res20;
  FEasyParticleComponentRuntime_Child_SubEmitter local_98;
  
  pTVar1 = &this->ChildEmitterArray;
  DestructItems<FEasyParticleComponentRuntime_Child_SubEmitter,int>
            ((FEasyParticleComponentRuntime_Child_SubEmitter *)(pTVar1->AllocatorInstance).Data,
             (this->ChildEmitterArray).ArrayNum);
  piVar16 = &(this->ChildEmitterArray).ArrayMax;
  (this->ChildEmitterArray).ArrayNum = 0;
  if (*piVar16 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&pTVar1->AllocatorInstance,0,piVar16);
  }
  lVar14 = this->_padding_;
  if (lVar14 != 0) {
    pUVar12 = Z_Construct_UClass_UEasyParticleComponent_Child_NoRegister();
    iVar11 = (int)pUVar12->_padding_;
    if ((iVar11 <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar11 * 8)
        == &pUVar12->_padding_)) goto LAB_14acbb8e9;
  }
  lVar14 = 0;
LAB_14acbb8e9:
  fVar7 = __real_38000100;
  if ((((this->_padding_ != 0) && (lVar14 != 0)) &&
      (lVar14 = *(longlong *)(lVar14 + 0x50), lVar14 != 0)) && (this->StopCreateParticle == false))
  {
    local_res20 = *(uint *)(lVar14 + 0x30);
    uVar13 = (ulonglong)(int)local_res20;
    puVar19 = *(undefined8 **)(lVar14 + 0x28);
    puVar2 = puVar19 + uVar13;
    while( true ) {
      piVar16 = &(this->ChildEmitterArray).ArrayMax;
      if (*(int *)(lVar14 + 0x30) != (int)uVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UEasyParticleEmitterAsset_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (puVar19 == puVar2) break;
      pUVar3 = (UEasyParticleEmitterAsset *)*puVar19;
      if (pUVar3 != (UEasyParticleEmitterAsset *)0x0) {
        local_98.ChildArray.ArrayNum = 0;
        local_98.ChildArray.ArrayMax = 0;
        local_98.Asset = (UEasyParticleEmitterAsset *)0x0;
        local_98.ChildArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.ComponentOwner = (UEasyParticleComponent_Child_Runtime *)0x0;
        uVar10 = rand();
        local_98.MaxParticleCountFactor.factor = (float)(uVar10 & 0x7fff) * fVar7;
        uVar10 = rand();
        local_98.DelayActive = 0.0;
        local_98.Deadtime = 0.0;
        local_98.ChildLayer = 0;
        local_98.ActiveParentLifePercent = 0.0;
        local_98.EndChildIndex.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.EndChildIndex.ArrayNum = 0;
        local_98.EndChildIndex.ArrayMax = 0;
        local_98.RestFractionalNum = 0.0;
        local_98.Lifetime = 0.0;
        local_98.SpawnRateFactor.factor = (float)(uVar10 & 0x7fff) * fVar7;
        FEasyParticleComponentRuntime_Child_SubEmitter::Init(&local_98,pUVar3,this);
        pFVar4 = (FEasyParticleComponentRuntime_Child_SubEmitter *)(pTVar1->AllocatorInstance).Data;
        if (((pFVar4 <= &local_98) && (&local_98 < pFVar4 + *piVar16)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (this->ChildEmitterArray).ArrayNum;
        if (iVar11 == *piVar16) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&pTVar1->AllocatorInstance,piVar16);
        }
        FVar8.Data = local_98.ChildArray.AllocatorInstance.Data;
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        (this->ChildEmitterArray).ArrayNum = iVar11 + 1;
        lVar15 = (longlong)iVar11 * 0x50;
        pFVar18 = pFVar5 + lVar15 + 8;
        *(UEasyParticleEmitterAsset **)(pFVar5 + lVar15) = local_98.Asset;
        *(undefined8 *)pFVar18 = 0;
        lVar17 = (longlong)local_98.ChildArray.ArrayNum;
        *(int *)(pFVar18 + 8) = local_98.ChildArray.ArrayNum;
        if (local_98.ChildArray.ArrayNum == 0) {
          *(int *)(pFVar18 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_98.ChildArray.ArrayNum,0,(ForAnyElementType *)pFVar18,
                     local_98.ChildArray.ArrayNum,(int *)(pFVar18 + 0xc));
          memcpy(*(void **)pFVar18,FVar8.Data,lVar17 << 3);
        }
        FVar8.Data = local_98.EndChildIndex.AllocatorInstance.Data;
        *(UEasyParticleComponent_Child_Runtime **)(pFVar5 + lVar15 + 0x18) = local_98.ComponentOwner
        ;
        pFVar18 = pFVar5 + lVar15 + 0x38;
        *(float *)(pFVar5 + lVar15 + 0x20) = local_98.MaxParticleCountFactor.factor;
        *(float *)(pFVar5 + lVar15 + 0x24) = local_98.SpawnRateFactor.factor;
        *(float *)(pFVar5 + lVar15 + 0x28) = local_98.DelayActive;
        *(float *)(pFVar5 + lVar15 + 0x2c) = local_98.Deadtime;
        *(int *)(pFVar5 + lVar15 + 0x30) = local_98.ChildLayer;
        *(float *)(pFVar5 + lVar15 + 0x34) = local_98.ActiveParentLifePercent;
        *(undefined8 *)pFVar18 = 0;
        lVar17 = (longlong)local_98.EndChildIndex.ArrayNum;
        *(int *)(pFVar18 + 8) = local_98.EndChildIndex.ArrayNum;
        if (local_98.EndChildIndex.ArrayNum == 0) {
          *(int *)(pFVar18 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_98.EndChildIndex.ArrayNum,0,(ForAnyElementType *)pFVar18,
                     local_98.EndChildIndex.ArrayNum,(int *)(pFVar18 + 0xc));
          memcpy(*(void **)pFVar18,FVar8.Data,lVar17 << 2);
        }
        *(float *)(pFVar5 + lVar15 + 0x48) = local_98.RestFractionalNum;
        *(float *)(pFVar5 + lVar15 + 0x4c) = local_98.Lifetime;
        if (local_98.EndChildIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.EndChildIndex.AllocatorInstance.Data);
        }
        if (local_98.ChildArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.ChildArray.AllocatorInstance.Data);
        }
      }
      puVar19 = puVar19 + 1;
      uVar13 = (ulonglong)local_res20;
    }
  }
  return;
}

// IsEnd @ 14acbbf90

bool __thiscall
UEasyParticleComponent_Child_Runtime::IsEnd(UEasyParticleComponent_Child_Runtime *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  
  fVar4 = __real_bf800000;
  pFVar8 = (this->ChildEmitterArray).AllocatorInstance.Data;
  iVar2 = (this->ChildEmitterArray).ArrayNum;
  pFVar7 = pFVar8 + 0x10;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x50;
  while( true ) {
    if ((this->ChildEmitterArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FEasyParticleComponentRuntime_Child_SubEmitter,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) {
      return true;
    }
    if (*(float *)(pFVar7 + 0x1c) == fVar4) {
      cVar5 = (**(code **)(**(longlong **)(*(longlong *)(pFVar7 + 8) + 0x30) + 0x2c8))();
      bVar10 = cVar5 != '\0';
    }
    else {
      bVar10 = *(float *)(pFVar7 + 0x1c) < *(float *)(pFVar7 + 0x3c);
    }
    if (!bVar10) break;
    plVar6 = *(longlong **)(pFVar7 + -8);
    iVar3 = *(int *)pFVar7;
    plVar1 = plVar6 + iVar3;
    while( true ) {
      if (*(int *)pFVar7 != iVar3) {
        `TCheckedPointerIterator<UEasyParticleState_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (plVar6 == plVar1) break;
      if (((longlong *)*plVar6 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*(longlong *)*plVar6 + 0x2c0))(), cVar5 == '\0')) {
        return false;
      }
      plVar6 = plVar6 + 1;
    }
    pFVar8 = pFVar8 + 0x50;
    pFVar7 = pFVar7 + 0x50;
  }
  return false;
}

// OnPaint @ 14acbc230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_Child_Runtime::OnPaint
          (UEasyParticleComponent_Child_Runtime *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_48 [4];
  uint local_44;
  FScriptContainerElement *local_40;
  FScriptContainerElement *local_38;
  
  pFVar8 = (this->ChildEmitterArray).AllocatorInstance.Data;
  local_44 = (this->ChildEmitterArray).ArrayNum;
  uVar5 = (ulonglong)(int)local_44;
  pFVar7 = pFVar8 + 0x10;
  local_38 = pFVar8 + uVar5 * 0x50;
  while( true ) {
    pFVar4 = local_38;
    local_40 = pFVar8;
    if ((this->ChildEmitterArray).ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<FEasyParticleComponentRuntime_Child_SubEmitter_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_48);
    }
    if (pFVar8 == pFVar4) break;
    plVar6 = *(longlong **)(pFVar7 + -8);
    iVar2 = *(int *)pFVar7;
    plVar1 = plVar6 + iVar2;
    while( true ) {
      if (*(int *)pFVar7 != iVar2) {
        `TCheckedPointerIterator<UEasyParticleState_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_48);
      }
      if (plVar6 == plVar1) break;
      plVar3 = (longlong *)*plVar6;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b8))
                  (plVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
      plVar6 = plVar6 + 1;
    }
    pFVar8 = local_40 + 0x50;
    pFVar7 = pFVar7 + 0x50;
    uVar5 = (ulonglong)local_44;
  }
  return;
}

// PostTick_Implementation @ 14acbca00

void __thiscall
UEasyParticleComponent_Child_Runtime::PostTick_Implementation
          (UEasyParticleComponent_Child_Runtime *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  FEasyParticleComponentRuntime_Child_SubEmitter *this_00;
  FEasyParticleComponentRuntime_Child_SubEmitter *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ChildEmitterArray).ArrayNum;
  this_00 = (FEasyParticleComponentRuntime_Child_SubEmitter *)
            (this->ChildEmitterArray).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->ChildEmitterArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FEasyParticleComponentRuntime_Child_SubEmitter,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FEasyParticleComponentRuntime_Child_SubEmitter::PostTick(this_00,param_1,param_2);
    this_00 = this_00 + 1;
  }
  return;
}

// Reset_Implementation @ 14acbd310

void __thiscall
UEasyParticleComponent_Child_Runtime::Reset_Implementation
          (UEasyParticleComponent_Child_Runtime *this)

{
  int iVar1;
  FEasyParticleComponentRuntime_Child_SubEmitter *this_00;
  FEasyParticleComponentRuntime_Child_SubEmitter *pFVar2;
  undefined1 local_res8 [8];
  
  this->StopCreateParticle = false;
  iVar1 = (this->ChildEmitterArray).ArrayNum;
  this_00 = (FEasyParticleComponentRuntime_Child_SubEmitter *)
            (this->ChildEmitterArray).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->ChildEmitterArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FEasyParticleComponentRuntime_Child_SubEmitter,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FEasyParticleComponentRuntime_Child_SubEmitter::Reset(this_00);
    this_00 = this_00 + 1;
  }
  return;
}

// StopEmit @ 14acbd7d0

void __thiscall
UEasyParticleComponent_Child_Runtime::StopEmit(UEasyParticleComponent_Child_Runtime *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  this->StopCreateParticle = true;
  pFVar6 = (this->ChildEmitterArray).AllocatorInstance.Data;
  iVar2 = (this->ChildEmitterArray).ArrayNum;
  pFVar5 = pFVar6 + 0x10;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x50;
  while( true ) {
    if ((this->ChildEmitterArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FEasyParticleComponentRuntime_Child_SubEmitter,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    plVar4 = *(longlong **)(pFVar5 + -8);
    iVar3 = *(int *)pFVar5;
    plVar1 = plVar4 + iVar3;
    while( true ) {
      if (*(int *)pFVar5 != iVar3) {
        `TCheckedPointerIterator<UEasyParticleState_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (plVar4 == plVar1) break;
      if ((longlong *)*plVar4 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar4 + 0x2d0))();
      }
      plVar4 = plVar4 + 1;
    }
    pFVar6 = pFVar6 + 0x50;
    pFVar5 = pFVar5 + 0x50;
  }
  return;
}

