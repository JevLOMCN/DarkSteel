// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 10

// StaticClass @ 14aca68e0

UClass * __cdecl UEasyParticleEmitterAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleEmitterAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleEmitterAsset",
               &Z_Registration_Info_UClass_UEasyParticleEmitterAsset.InnerSingleton,
               StaticRegisterNativesUEasyParticleEmitterAsset,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEasyParticleEmitterAsset>,
               InternalVTableHelperCtorCaller<UEasyParticleEmitterAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleEmitterAsset.InnerSingleton;
}

// UEasyParticleEmitterAsset @ 14acaa100

UEasyParticleEmitterAsset * __thiscall
UEasyParticleEmitterAsset::UEasyParticleEmitterAsset
          (UEasyParticleEmitterAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleEmitterAsset__6B_;
  (this->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Components).ArrayNum = 0;
  (this->Components).ArrayMax = 0;
  return this;
}

// ~UEasyParticleEmitterAsset @ 14acaaca0

void __thiscall
UEasyParticleEmitterAsset::~UEasyParticleEmitterAsset(UEasyParticleEmitterAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEasyParticleEmitterAsset__6B_;
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acaddc0

UClass * __cdecl UEasyParticleEmitterAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleEmitterAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleEmitterAsset",
               &Z_Registration_Info_UClass_UEasyParticleEmitterAsset.InnerSingleton,
               StaticRegisterNativesUEasyParticleEmitterAsset,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEasyParticleEmitterAsset>,
               InternalVTableHelperCtorCaller<UEasyParticleEmitterAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleEmitterAsset.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleEmitterAsset @ 14acae430

void __cdecl UEasyParticleEmitterAsset::StaticRegisterNativesUEasyParticleEmitterAsset(void)

{
  return;
}

// UEasyParticleEmitterAsset @ 14acb7630

UEasyParticleEmitterAsset * __thiscall
UEasyParticleEmitterAsset::UEasyParticleEmitterAsset
          (UEasyParticleEmitterAsset *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  UClass *pUVar7;
  UEasyParticleEmitterAsset *pUVar8;
  FName local_res8;
  UObject *local_18 [2];
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleEmitterAsset__6B_;
  (this->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Components).ArrayNum = 0;
  (this->Components).ArrayMax = 0;
  pFVar6 = ::FName::FName(&local_res8,"BasicComponent");
  FVar1 = *pFVar6;
  pUVar7 = Z_Construct_UClass_UEasyParticleComponent_Basic_NoRegister();
  local_18[0] = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar7,pUVar7,true,false);
  pFVar2 = (this->Components).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Components).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UEasyParticleEmitterAsset *)(*pcVar3)();
      return pUVar8;
    }
  }
  iVar5 = (this->Components).ArrayNum;
  if (iVar5 == (this->Components).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Components).AllocatorInstance,&(this->Components).ArrayMax);
  }
  (this->Components).ArrayNum = iVar5 + 1;
  *(UObject **)((this->Components).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return this;
}

// AddComponent @ 14acb90a0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleEmitterAsset::AddComponent
          (UEasyParticleEmitterAsset *this,UEasyParticleComponent *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UEasyParticleComponent *local_res10 [3];
  
  if (param_1 != (UEasyParticleComponent *)0x0) {
    pFVar2 = (this->Components).AllocatorInstance.Data;
    local_res10[0] = param_1;
    if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->Components).ArrayMax * 8)
       ) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->Components).ArrayNum;
    piVar1 = &(this->Components).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Components).AllocatorInstance,piVar1);
    }
    (this->Components).ArrayNum = iVar5 + 1;
    *(UEasyParticleComponent **)((this->Components).AllocatorInstance.Data + (longlong)iVar5 * 8) =
         local_res10[0];
  }
  return;
}

// GenerateRuntimeComponents @ 14acb9690

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleEmitterAsset::GenerateRuntimeComponents
          (UEasyParticleEmitterAsset *this,
          TArray<UEasyParticleComponentRuntime_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UEasyParticleComponent *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  EComponentPriority EVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  UEasyParticleComponentRuntime *local_48 [2];
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  iVar10 = 0;
  local_res18 = param_2;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
    iVar10 = 0;
  }
  do {
    pFVar9 = (this->Components).AllocatorInstance.Data;
    iVar3 = (this->Components).ArrayNum;
    pFVar2 = pFVar9 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Components).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UEasyParticleComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar9 == pFVar2) break;
      this_00 = *(UEasyParticleComponent **)pFVar9;
      if ((this_00 != (UEasyParticleComponent *)0x0) && (this_00->Active != false)) {
        EVar6 = UEasyParticleComponent::GetPriority(this_00);
        if ((EVar6 == (EComponentPriority)iVar10) && ((this_00->TypeMask & local_res18) != 0)) {
          local_48[0] = UEasyParticleComponent::CreateRuntimeComponent(this_00);
          pFVar4 = (param_1->AllocatorInstance).Data;
          if ((pFVar4 <= (FScriptContainerElement *)local_48) &&
             ((FScriptContainerElement *)local_48 < pFVar4 + (longlong)*piVar1 * 8)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar8 = param_1->ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar8 + 1;
          *(UEasyParticleComponentRuntime **)
           ((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_48[0];
        }
      }
      pFVar9 = pFVar9 + 8;
    }
    iVar10 = iVar10 + 1;
    if (5 < iVar10) {
      return;
    }
  } while( true );
}

// GetBasicComponent @ 14acb9840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEasyParticleComponent_Basic * __thiscall
UEasyParticleEmitterAsset::GetBasicComponent(UEasyParticleEmitterAsset *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UEasyParticleComponent_Basic *pUVar6;
  UClass *pUVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  UEasyParticleComponent_Basic **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UEasyParticleComponent_Basic *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->Components).ArrayNum < 1) goto LAB_14acb98e3;
  iVar5 = (this->Components).ArrayNum;
  if (iVar5 < 1) {
    local_d8 = (UEasyParticleComponent_Basic **)0x0;
    local_d0 = (FScriptContainerElement *)(longlong)iVar5;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UEasyParticleComponent_Basic *)(*pcVar3)();
      return pUVar6;
    }
  }
  pUVar6 = *(UEasyParticleComponent_Basic **)(this->Components).AllocatorInstance.Data;
  if (pUVar6 == (UEasyParticleComponent_Basic *)0x0) {
LAB_14acb98d8:
    pUVar6 = (UEasyParticleComponent_Basic *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UEasyParticleComponent_Basic_NoRegister();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar7->_padding_)) goto LAB_14acb98d8;
  }
  if (pUVar6 != (UEasyParticleComponent_Basic *)0x0) {
    return pUVar6;
  }
LAB_14acb98e3:
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UEasyParticleComponent_Basic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar7);
  local_98._8_8_ = this;
  pUVar6 = (UEasyParticleComponent_Basic *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pFVar2 = (this->Components).AllocatorInstance.Data;
  local_a8[0] = pUVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_a8) &&
     (lVar9 = (longlong)(this->Components).ArrayMax,
     (FScriptContainerElement *)local_a8 < pFVar2 + lVar9 * 8)) {
    local_c0 = (longlong)(this->Components).ArrayNum;
    local_b8 = 8;
    local_d8 = local_a8;
    local_d0 = pFVar2;
    local_c8 = lVar9;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UEasyParticleComponent_Basic *)(*pcVar3)();
      return pUVar6;
    }
  }
  iVar5 = (this->Components).ArrayNum;
  piVar1 = &(this->Components).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Components).AllocatorInstance,piVar1);
    (this->Components).ArrayNum = iVar5;
  }
  pFVar2 = (this->Components).AllocatorInstance.Data;
  (this->Components).ArrayNum = iVar5 + 1;
  memmove(pFVar2 + 8,pFVar2,(longlong)iVar5 << 3);
  *(UEasyParticleComponent_Basic **)(this->Components).AllocatorInstance.Data = local_a8[0];
  return pUVar6;
}

// GetComponent @ 14acb9a20

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent * __thiscall
UEasyParticleEmitterAsset::GetComponent(UEasyParticleEmitterAsset *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UEasyParticleComponent *pUVar3;
  
  if ((this->Components).ArrayNum <= param_1) {
    return (UEasyParticleComponent *)0x0;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UEasyParticleComponent *)(*pcVar1)();
      return pUVar3;
    }
  }
  return *(UEasyParticleComponent **)
          ((this->Components).AllocatorInstance.Data + (longlong)param_1 * 8);
}

