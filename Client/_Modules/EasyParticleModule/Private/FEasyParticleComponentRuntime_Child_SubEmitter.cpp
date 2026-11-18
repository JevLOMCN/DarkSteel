// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 16

// StaticStruct @ 14aca5450

UScriptStruct * __cdecl FEasyParticleComponentRuntime_Child_SubEmitter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEasyParticleComponentRuntime_Child_SubEmitter.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EasyParticleModule();
    Z_Registration_Info_UScriptStruct_FEasyParticleComponentRuntime_Child_SubEmitter.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FEasyParticleComponentRuntime_Child_SubEmitter,
                           (UObject *)pUVar1,L"EasyParticleComponentRuntime_Child_SubEmitter");
  }
  return Z_Registration_Info_UScriptStruct_FEasyParticleComponentRuntime_Child_SubEmitter.
         OuterSingleton;
}

// FEasyParticleComponentRuntime_Child_SubEmitter @ 14aca9410

FEasyParticleComponentRuntime_Child_SubEmitter * __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::FEasyParticleComponentRuntime_Child_SubEmitter
          (FEasyParticleComponentRuntime_Child_SubEmitter *this)

{
  uint uVar1;
  
  this->Asset = (UEasyParticleEmitterAsset *)0x0;
  (this->ChildArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildArray).ArrayNum = 0;
  (this->ChildArray).ArrayMax = 0;
  this->ComponentOwner = (UEasyParticleComponent_Child_Runtime *)0x0;
  uVar1 = rand();
  (this->MaxParticleCountFactor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->EndChildIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnRateFactor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  this->DelayActive = 0.0;
  this->Deadtime = 0.0;
  this->ChildLayer = 0;
  this->ActiveParentLifePercent = 0.0;
  (this->EndChildIndex).ArrayNum = 0;
  (this->EndChildIndex).ArrayMax = 0;
  this->RestFractionalNum = 0.0;
  this->Lifetime = 0.0;
  return this;
}

// CaculateSpawnParticleCount @ 14acb9160

int __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::CaculateSpawnParticleCount
          (FEasyParticleComponentRuntime_Child_SubEmitter *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  UEasyParticleComponent_Basic *pUVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  FUIParticleFactorParam local_68 [2];
  
  if (((((this->ComponentOwner != (UEasyParticleComponent_Child_Runtime *)0x0) &&
        (plVar3 = (longlong *)this->ComponentOwner->_padding_, plVar3 != (longlong *)0x0)) &&
       (this->Asset != (UEasyParticleEmitterAsset *)0x0)) &&
      ((cVar5 = (**(code **)(*plVar3 + 0x2c8))(), cVar5 == '\0' && (bVar6 = IsSelfEnd(this), !bVar6)
       ))) && ((this->ComponentOwner->StopCreateParticle == false &&
               (this->DelayActive < this->Lifetime)))) {
    lVar4 = this->ComponentOwner->_padding_;
    fVar10 = *(float *)(lVar4 + 0x40);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = *(float *)(lVar4 + 200) / fVar10;
    }
    if (this->ActiveParentLifePercent <= fVar10) {
      pUVar7 = UEasyParticleEmitterAsset::GetBasicComponent(this->Asset);
      local_68[0].Factor = (this->MaxParticleCountFactor).factor;
      lVar4 = this->ComponentOwner->_padding_;
      local_68[0].Lifetime = 0.0;
      local_68[0].LifetimePercent = 0.0;
      local_68[0].RootEmitterLifetime = 0.0;
      if (lVar4 != 0) {
        local_68[0].LifetimePercent = 0.0;
        local_68[0].Lifetime = (float)*(uint *)(lVar4 + 200);
        if (*(float *)(lVar4 + 0x40) != 0.0) {
          local_68[0].LifetimePercent = *(float *)(lVar4 + 200) / *(float *)(lVar4 + 0x40);
        }
        local_68[0].RootEmitterLifetime = *(float *)(lVar4 + 0x148);
      }
      fVar10 = FEasyParticlePropertyFloat::GetValue_Float(&pUVar7->MaxParticleCount,local_68);
      pFVar9 = (this->ChildArray).AllocatorInstance.Data;
      iVar2 = (this->ChildArray).ArrayNum;
      iVar8 = 0;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ChildArray).ArrayNum != iVar2) {
          `TCheckedPointerIterator<UEasyParticleState_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar9 == pFVar1) break;
        if ((*(UEasyParticleState **)pFVar9 != (UEasyParticleState *)0x0) &&
           (bVar6 = UEasyParticleState::IsInCache(*(UEasyParticleState **)pFVar9), !bVar6)) {
          iVar8 = iVar8 + 1;
        }
        pFVar9 = pFVar9 + 8;
      }
      lVar4 = this->ComponentOwner->_padding_;
      local_68[0].Lifetime = 0.0;
      local_68[0].LifetimePercent = 0.0;
      local_68[0].RootEmitterLifetime = 0.0;
      local_68[0].Factor = (this->SpawnRateFactor).factor;
      if (lVar4 != 0) {
        local_68[0].LifetimePercent = 0.0;
        local_68[0].Lifetime = (float)*(uint *)(lVar4 + 200);
        if (*(float *)(lVar4 + 0x40) != 0.0) {
          local_68[0].LifetimePercent = *(float *)(lVar4 + 200) / *(float *)(lVar4 + 0x40);
        }
        local_68[0].RootEmitterLifetime = *(float *)(lVar4 + 0x148);
      }
      fVar11 = FEasyParticlePropertyFloat::GetValue_Float(&pUVar7->SpawnRate,local_68);
      fVar12 = fVar11 * param_1 + this->RestFractionalNum;
      fVar11 = (float)(int)fVar12;
      if (fVar10 - (float)iVar8 <= fVar11) {
        fVar11 = fVar10 - (float)iVar8;
      }
      this->RestFractionalNum = fVar12 - (float)(int)fVar11;
      return (int)fVar11;
    }
  }
  return 0;
}

// CreateParticle @ 14acb93e0

UEasyParticleState * __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::CreateParticle
          (FEasyParticleComponentRuntime_Child_SubEmitter *this,FGeometry *param_1)

{
  UEasyParticleState *pUVar1;
  
  pUVar1 = TryCreateParticle(this,param_1);
  if (pUVar1 == (UEasyParticleState *)0x0) {
    RefreshEndChildIndex(this);
    pUVar1 = TryCreateParticle(this,param_1);
  }
  return pUVar1;
}

// GetParticleCount @ 14acb9ab0

int __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::GetParticleCount
          (FEasyParticleComponentRuntime_Child_SubEmitter *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ChildArray).AllocatorInstance.Data;
  iVar2 = (this->ChildArray).ArrayNum;
  iVar5 = 0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UEasyParticleState_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(UEasyParticleState **)pFVar4 != (UEasyParticleState *)0x0) {
      iVar3 = UEasyParticleState::GetParticleCount(*(UEasyParticleState **)pFVar4);
      iVar5 = iVar5 + iVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return iVar5;
}

// GetParticleCountInPool @ 14acb9be0

int __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::GetParticleCountInPool
          (FEasyParticleComponentRuntime_Child_SubEmitter *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ChildArray).AllocatorInstance.Data;
  iVar2 = (this->ChildArray).ArrayNum;
  iVar5 = 0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UEasyParticleState_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(UEasyParticleState **)pFVar4 != (UEasyParticleState *)0x0) {
      iVar3 = UEasyParticleState::GetParticleCountInPool(*(UEasyParticleState **)pFVar4);
      iVar5 = iVar5 + iVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return iVar5;
}

// GetParticleCountNotInPool @ 14acb9d10

int __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::GetParticleCountNotInPool
          (FEasyParticleComponentRuntime_Child_SubEmitter *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetParticleCount(this);
  iVar2 = GetParticleCountInPool(this);
  return iVar1 - iVar2;
}

// Init @ 14acbb460

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::Init
          (FEasyParticleComponentRuntime_Child_SubEmitter *this,UEasyParticleEmitterAsset *param_1,
          UEasyParticleComponent_Child_Runtime *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  UEasyParticleComponent *this_00;
  UEasyParticleComponentRuntime *pUVar4;
  code *pcVar5;
  EComponentPriority EVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  ForAnyElementType FVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UEasyParticleComponentRuntime *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  this->Asset = param_1;
  this->ComponentOwner = param_2;
  if ((param_1 != (UEasyParticleEmitterAsset *)0x0) &&
     (param_2 != (UEasyParticleComponent_Child_Runtime *)0x0)) {
    lVar3 = param_2->_padding_;
    if (lVar3 != 0) {
      pUVar9 = Z_Construct_UClass_UEasyParticleComponent_Child_NoRegister();
      iVar11 = (int)pUVar9->_padding_;
      if ((iVar11 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar11 * 8)
          == &pUVar9->_padding_)) {
        this->ActiveParentLifePercent = *(float *)(lVar3 + 0x58);
      }
    }
    iVar11 = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    do {
      pFVar12 = (param_1->Components).AllocatorInstance.Data;
      iVar2 = (param_1->Components).ArrayNum;
      pFVar1 = pFVar12 + (longlong)iVar2 * 8;
      while( true ) {
        if ((param_1->Components).ArrayNum != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<UEasyParticleComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar12 == pFVar1) break;
        this_00 = *(UEasyParticleComponent **)pFVar12;
        if ((((this_00 != (UEasyParticleComponent *)0x0) && (this_00->Active != false)) &&
            (EVar6 = UEasyParticleComponent::GetPriority(this_00),
            EVar6 == (EComponentPriority)iVar11)) && ((this_00->TypeMask & 2) != 0)) {
          local_58 = UEasyParticleComponent::CreateRuntimeComponent(this_00);
          if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8))
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (int)local_48;
          if ((int)local_48 == local_48._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_50,(int *)((longlong)&local_48 + 4));
          }
          local_48 = CONCAT44(local_48._4_4_,iVar8 + 1);
          *(UEasyParticleComponentRuntime **)(local_50.Data + (longlong)iVar8 * 8) = local_58;
        }
        pFVar12 = pFVar12 + 8;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 6);
    iVar11 = (int)local_48;
    pFVar1 = local_50.Data + (longlong)(int)local_48 * 8;
    FVar10.Data = local_50.Data;
    while( true ) {
      if ((int)local_48 != iVar11) {
        `TCheckedPointerIterator<UEasyParticleComponentRuntime_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (FVar10.Data == pFVar1) break;
      pUVar4 = *(UEasyParticleComponentRuntime **)FVar10.Data;
      if (pUVar4 != (UEasyParticleComponentRuntime *)0x0) {
        pUVar4->Owner = (UEasyParticleState *)param_2->_padding_;
        (**(code **)(pUVar4->_padding_ + 0x2e0))(pUVar4,this);
      }
      FVar10.Data = FVar10.Data + 8;
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
  }
  return;
}

// IsEnd @ 14acbbe90

bool __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::IsEnd
          (FEasyParticleComponentRuntime_Child_SubEmitter *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  
  if (this->Deadtime == __real_bf800000) {
    cVar3 = (**(code **)(*(longlong *)this->ComponentOwner->_padding_ + 0x2c8))();
    bVar5 = cVar3 != '\0';
  }
  else {
    bVar5 = this->Deadtime < this->Lifetime;
  }
  if (bVar5 != false) {
    pFVar4 = (this->ChildArray).AllocatorInstance.Data;
    iVar2 = (this->ChildArray).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ChildArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UEasyParticleState_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar1) break;
      if ((*(longlong **)pFVar4 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(**(longlong **)pFVar4 + 0x2c0))(), cVar3 == '\0')) {
        return false;
      }
      pFVar4 = pFVar4 + 8;
    }
    return bVar5;
  }
  return false;
}

// IsSelfEnd @ 14acbc090

bool __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::IsSelfEnd
          (FEasyParticleComponentRuntime_Child_SubEmitter *this)

{
  char cVar1;
  
  if (this->Deadtime == __real_bf800000) {
    cVar1 = (**(code **)(*(longlong *)this->ComponentOwner->_padding_ + 0x2c8))();
    return cVar1 != '\0';
  }
  return this->Deadtime < this->Lifetime;
}

// OnPaint @ 14acbc150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::OnPaint
          (FEasyParticleComponentRuntime_Child_SubEmitter *this,FPaintArgs *param_1,
          FGeometry *param_2,FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,
          FWidgetStyle *param_6,bool param_7)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ChildArray).AllocatorInstance.Data;
  iVar2 = (this->ChildArray).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UEasyParticleState_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2b8))(plVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7)
      ;
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// PostTick @ 14acbc4d0

void __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::PostTick
          (FEasyParticleComponentRuntime_Child_SubEmitter *this,FGeometry *param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  UEasyParticleState *pUVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res18 [16];
  uint local_38 [8];
  
  this->Lifetime = param_2 + this->Lifetime;
  if (((this->ComponentOwner != (UEasyParticleComponent_Child_Runtime *)0x0) &&
      (this->ComponentOwner->_padding_ != 0)) &&
     (uVar7 = CaculateSpawnParticleCount(this,param_2), 0 < (int)uVar7)) {
    uVar11 = (ulonglong)uVar7;
    do {
      if ((this->Asset != (UEasyParticleEmitterAsset *)0x0) &&
         (pUVar10 = TryCreateParticle(this,param_1), pUVar10 == (UEasyParticleState *)0x0)) {
        RefreshEndChildIndex(this);
        TryCreateParticle(this,param_1);
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  local_38[0] = 0;
  if (0 < (this->ChildArray).ArrayNum) {
    do {
      uVar7 = local_38[0];
      uVar8 = 0;
      if ((int)local_38[0] < (this->ChildArray).ArrayNum) {
        uVar8 = ~local_38[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar10 = *(UEasyParticleState **)
                 ((this->ChildArray).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
      if (((pUVar10 != (UEasyParticleState *)0x0) &&
          (cVar6 = (**(code **)(*(longlong *)pUVar10 + 0x2c0))(pUVar10), cVar6 != '\0')) &&
         (bVar5 = UEasyParticleState::IsInCache(pUVar10), !bVar5)) {
        pFVar2 = (this->EndChildIndex).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar2 + (longlong)(this->EndChildIndex).ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (this->EndChildIndex).ArrayNum;
        piVar1 = &(this->EndChildIndex).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->EndChildIndex).AllocatorInstance,piVar1);
        }
        (this->EndChildIndex).ArrayNum = iVar9 + 1;
        *(uint *)((this->EndChildIndex).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_38[0];
        UEasyParticleState::SetInCache(pUVar10);
      }
      local_38[0] = local_38[0] + 1;
    } while ((int)local_38[0] < (this->ChildArray).ArrayNum);
  }
  pFVar12 = (this->ChildArray).AllocatorInstance.Data;
  iVar9 = (this->ChildArray).ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar9 * 8;
  while( true ) {
    if ((this->ChildArray).ArrayNum != iVar9) {
      `TCheckedPointerIterator<UEasyParticleState_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar12 == pFVar2) break;
    plVar3 = *(longlong **)pFVar12;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2b0))(plVar3,param_1,param_2);
    }
    pFVar12 = pFVar12 + 8;
  }
  return;
}

// RefreshEndChildIndex @ 14acbceb0

void __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::RefreshEndChildIndex
          (FEasyParticleComponentRuntime_Child_SubEmitter *this)

{
  int *piVar1;
  UEasyParticleState *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint local_18 [4];
  
  piVar1 = &(this->EndChildIndex).ArrayMax;
  (this->EndChildIndex).ArrayNum = 0;
  if ((this->EndChildIndex).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->EndChildIndex).AllocatorInstance,0,piVar1);
  }
  local_18[0] = 0;
  if (0 < (this->ChildArray).ArrayNum) {
    do {
      uVar4 = local_18[0];
      uVar6 = 0;
      if ((int)local_18[0] < (this->ChildArray).ArrayNum) {
        uVar6 = ~local_18[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(UEasyParticleState **)
                 ((this->ChildArray).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
      if ((this_00 != (UEasyParticleState *)0x0) &&
         (bVar5 = UEasyParticleState::IsInCache(this_00), bVar5)) {
        pFVar2 = (this->EndChildIndex).AllocatorInstance.Data;
        if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
           (((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 4 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->EndChildIndex).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->EndChildIndex).AllocatorInstance,piVar1);
        }
        (this->EndChildIndex).ArrayNum = iVar7 + 1;
        *(uint *)((this->EndChildIndex).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_18[0];
      }
      local_18[0] = local_18[0] + 1;
    } while ((int)local_18[0] < (this->ChildArray).ArrayNum);
  }
  return;
}

// Reset @ 14acbd050

void __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::Reset
          (FEasyParticleComponentRuntime_Child_SubEmitter *this)

{
  int *piVar1;
  UEasyParticleState *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint local_18 [4];
  
  piVar1 = &(this->EndChildIndex).ArrayMax;
  this->RestFractionalNum = 0.0;
  this->Lifetime = 0.0;
  (this->EndChildIndex).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->EndChildIndex).AllocatorInstance,0,piVar1);
  }
  local_18[0] = 0;
  if (0 < (this->ChildArray).ArrayNum) {
    do {
      uVar4 = local_18[0];
      uVar6 = 0;
      if ((int)local_18[0] < (this->ChildArray).ArrayNum) {
        uVar6 = ~local_18[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(UEasyParticleState **)
                 ((this->ChildArray).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
      if (this_00 != (UEasyParticleState *)0x0) {
        (**(code **)(*(longlong *)this_00 + 0x2d8))(this_00);
        UEasyParticleState::SetInCache(this_00);
        pFVar2 = (this->EndChildIndex).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->EndChildIndex).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->EndChildIndex).AllocatorInstance,piVar1);
        }
        (this->EndChildIndex).ArrayNum = iVar7 + 1;
        *(uint *)((this->EndChildIndex).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_18[0];
      }
      local_18[0] = local_18[0] + 1;
    } while ((int)local_18[0] < (this->ChildArray).ArrayNum);
  }
  return;
}

// StopEmit @ 14acbd760

void __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::StopEmit
          (FEasyParticleComponentRuntime_Child_SubEmitter *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ChildArray).AllocatorInstance.Data;
  iVar2 = (this->ChildArray).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UEasyParticleState_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar3 + 0x2d0))();
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// TryCreateParticle @ 14acbdd20

UEasyParticleState * __thiscall
FEasyParticleComponentRuntime_Child_SubEmitter::TryCreateParticle
          (FEasyParticleComponentRuntime_Child_SubEmitter *this,FGeometry *param_1)

{
  int *piVar1;
  int iVar2;
  UEasyParticleComponent_Child_Runtime *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  UEasyParticleState *pUVar7;
  int iVar8;
  UEasyParticleState *local_18 [2];
  
  if (((this->Asset != (UEasyParticleEmitterAsset *)0x0) &&
      (pUVar3 = this->ComponentOwner, pUVar3 != (UEasyParticleComponent_Child_Runtime *)0x0)) &&
     (pUVar3->_padding_ != 0)) {
    local_18[0] = (UEasyParticleState *)0x0;
    if ((this->EndChildIndex).ArrayNum < 1) {
      local_18[0] = UEasyParticleState::CreateParticle
                              (this->Asset,pUVar3,param_1,this->ChildLayer + 1);
      pFVar4 = (this->ChildArray).AllocatorInstance.Data;
      if ((pFVar4 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)(this->ChildArray).ArrayMax * 8))
      {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pUVar7 = (UEasyParticleState *)(*pcVar5)();
          return pUVar7;
        }
      }
      iVar8 = (this->ChildArray).ArrayNum;
      piVar1 = &(this->ChildArray).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->ChildArray).AllocatorInstance,piVar1);
      }
      (this->ChildArray).ArrayNum = iVar8 + 1;
      *(UEasyParticleState **)((this->ChildArray).AllocatorInstance.Data + (longlong)iVar8 * 8) =
           local_18[0];
    }
    else {
      iVar8 = (this->EndChildIndex).ArrayNum;
      iVar2 = *(int *)((this->EndChildIndex).AllocatorInstance.Data + (longlong)iVar8 * 4 + -4);
      iVar8 = iVar8 + -1;
      (this->EndChildIndex).ArrayNum = iVar8;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&(this->EndChildIndex).AllocatorInstance,iVar8,&(this->EndChildIndex).ArrayMax)
      ;
      if (iVar2 < (this->ChildArray).ArrayNum) {
        if (iVar2 < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pUVar7 = (UEasyParticleState *)(*pcVar5)();
            return pUVar7;
          }
        }
        pUVar7 = *(UEasyParticleState **)
                  ((this->ChildArray).AllocatorInstance.Data + (longlong)iVar2 * 8);
        if (pUVar7 != (UEasyParticleState *)0x0) {
          bVar6 = UEasyParticleState::IsInCache(pUVar7);
          if (bVar6) {
            (**(code **)(*(longlong *)pUVar7 + 0x2d8))(pUVar7);
            UEasyParticleState::InitComponents(pUVar7,param_1);
            return pUVar7;
          }
        }
      }
    }
    return local_18[0];
  }
  return (UEasyParticleState *)0x0;
}

