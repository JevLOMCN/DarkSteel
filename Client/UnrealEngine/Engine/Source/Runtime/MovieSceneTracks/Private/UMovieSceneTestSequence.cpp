// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 16

// StaticClass @ 14687d710

UClass * __cdecl UMovieSceneTestSequence::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTestSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTestSequence",
               &Z_Registration_Info_UClass_UMovieSceneTestSequence.InnerSingleton,
               StaticRegisterNativesUMovieSceneTestSequence,0x98,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTestSequence>,
               InternalVTableHelperCtorCaller<UMovieSceneTestSequence>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTestSequence.InnerSingleton;
}

// UMovieSceneTestSequence @ 14689f060

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneTestSequence * __thiscall
UMovieSceneTestSequence::UMovieSceneTestSequence
          (UMovieSceneTestSequence *this,FVTableHelper *param_1)

{
  UMovieSceneSequence::UMovieSceneSequence((UMovieSceneSequence *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTestSequence__6B_;
  (this->MovieScene).field0_0x0.DebugPtr = (UMovieScene *)0x0;
  (this->BoundObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundObjects).ArrayNum = 0;
  (this->BoundObjects).ArrayMax = 0;
  (this->BindingGuids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingGuids).ArrayNum = 0;
  (this->BindingGuids).ArrayMax = 0;
  return this;
}

// UMovieSceneTestSequence @ 14689f0b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneTestSequence * __thiscall
UMovieSceneTestSequence::UMovieSceneTestSequence
          (UMovieSceneTestSequence *this,FObjectInitializer *param_1)

{
  UMovieSceneSequence::UMovieSceneSequence((UMovieSceneSequence *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTestSequence__6B_;
  (this->MovieScene).field0_0x0.DebugPtr = (UMovieScene *)0x0;
  (this->BoundObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundObjects).ArrayNum = 0;
  (this->BoundObjects).ArrayMax = 0;
  (this->BindingGuids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingGuids).ArrayNum = 0;
  (this->BindingGuids).ArrayMax = 0;
  return this;
}

// ~UMovieSceneTestSequence @ 1468a1070

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieSceneTestSequence::~UMovieSceneTestSequence(UMovieSceneTestSequence *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneTestSequence__6B_;
  pFVar1 = (this->BindingGuids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneSequence::~UMovieSceneSequence((UMovieSceneSequence *)this);
  return;
}

// AddObjectBinding @ 1468a7570

FGuid * __thiscall
UMovieSceneTestSequence::AddObjectBinding
          (UMovieSceneTestSequence *this,FGuid *__return_storage_ptr__,TObjectPtr<UObject> param_1)

{
  int *piVar1;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar2;
  UMovieScene *this_00;
  UClass *pUVar3;
  TObjectPtr<UObject>_u_0 TVar4;
  FScriptContainerElement *pFVar5;
  UObject *pUVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  FGuid *pFVar11;
  FName local_res8;
  FString local_28;
  
  this_00 = (this->MovieScene).field0_0x0.DebugPtr;
  pUVar3 = *(UClass **)(*(longlong *)param_1.field0_0x0 + 0x10);
  local_res8 = *(FName *)(*(longlong *)param_1.field0_0x0 + 0x18);
  ::FName::ToString(&local_res8,&local_28);
  UMovieScene::AddPossessable(this_00,__return_storage_ptr__,&local_28,pUVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  TVar4 = (TObjectPtr<UObject>_u_0)(this->BoundObjects).AllocatorInstance.Data;
  if ((TVar4.DebugPtr <= (ulonglong)param_1.field0_0x0) &&
     ((ulonglong)param_1.field0_0x0 <
      (UObject *)(&(TVar4.DebugPtr)->field_0x0 + (longlong)(this->BoundObjects).ArrayMax * 8))) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FGuid *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar10 = (this->BoundObjects).ArrayNum;
  piVar1 = &(this->BoundObjects).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->BoundObjects).AllocatorInstance,piVar1);
  }
  pFVar5 = (this->BoundObjects).AllocatorInstance.Data;
  (this->BoundObjects).ArrayNum = iVar10 + 1;
  pUVar6 = *(UObject **)param_1.field0_0x0;
  *(UObject **)(pFVar5 + (longlong)iVar10 * 8) = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  pTVar2 = &this->BindingGuids;
  pFVar11 = (FGuid *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar11 <= __return_storage_ptr__) &&
     (__return_storage_ptr__ < pFVar11 + (this->BindingGuids).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FGuid *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar10 = (this->BindingGuids).ArrayNum;
  piVar1 = &(this->BindingGuids).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->BindingGuids).ArrayNum = iVar10 + 1;
  uVar8 = *(undefined8 *)&__return_storage_ptr__->C;
  pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
  *(undefined8 *)pFVar5 = *(undefined8 *)__return_storage_ptr__;
  *(undefined8 *)(pFVar5 + 8) = uVar8;
  return __return_storage_ptr__;
}

// BindPossessableObject @ 1468ab7d0

void __thiscall
UMovieSceneTestSequence::BindPossessableObject
          (UMovieSceneTestSequence *this,FGuid *param_1,UObject *param_2,UObject *param_3)

{
  return;
}

// CanPossessObject @ 1468acca0

bool __thiscall
UMovieSceneTestSequence::CanPossessObject
          (UMovieSceneTestSequence *this,UObject *param_1,UObject *param_2)

{
  return true;
}

// GetMovieScene @ 1468b5b10

UMovieScene * __thiscall UMovieSceneTestSequence::GetMovieScene(UMovieSceneTestSequence *this)

{
  return (this->MovieScene).field0_0x0.DebugPtr;
}

// GetParentObject @ 1468b5ff0

UObject * __thiscall
UMovieSceneTestSequence::GetParentObject(UMovieSceneTestSequence *this,UObject *param_1)

{
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 1468b8630

UClass * __cdecl UMovieSceneTestSequence::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTestSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTestSequence",
               &Z_Registration_Info_UClass_UMovieSceneTestSequence.InnerSingleton,
               StaticRegisterNativesUMovieSceneTestSequence,0x98,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTestSequence>,
               InternalVTableHelperCtorCaller<UMovieSceneTestSequence>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTestSequence.InnerSingleton;
}

// Initialize @ 1468bb990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMovieSceneTestSequence::Initialize(UMovieSceneTestSequence *this)

{
  UClass *pUVar1;
  UMovieScene *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = this;
  pUVar2 = (UMovieScene *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMovieScene *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->MovieScene).field0_0x0.DebugPtr = pUVar2;
  return;
}

// LocateBoundObjects @ 1468bca80

void __thiscall
UMovieSceneTestSequence::LocateBoundObjects
          (UMovieSceneTestSequence *this,FGuid *param_1,UObject *param_2,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  ForElementType<UObject_*> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ForElementType<UObject_*> FVar7;
  undefined8 local_18 [2];
  
  uVar4 = TArray<FGuid,TSizedDefaultAllocator<32>_>::Find(&this->BindingGuids,param_1);
  if (uVar4 == 0xffffffff) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_819366871156391911>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneTestDataBuilders.cpp"
                       ,0x19,"Index != INDEX_NONE");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar5 = 0;
    if ((int)uVar4 < (this->BoundObjects).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar1 = (param_3->AllocatorInstance).SecondaryData;
    local_18[0] = *(undefined8 *)
                   ((this->BoundObjects).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
    FVar7 = (ForElementType<UObject_*>)param_3;
    if (FVar1 != (ForElementType<UObject_*>)0x0) {
      FVar7 = FVar1;
    }
    if ((ulonglong)FVar7 <= local_18) {
      FVar7 = (ForElementType<UObject_*>)param_3;
      if (FVar1 != (ForElementType<UObject_*>)0x0) {
        FVar7 = FVar1;
      }
      if ((local_18 < (undefined8 *)((longlong)FVar7 + (longlong)param_3->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                        (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    FVar1 = (param_3->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<UObject_*>)0x0) {
      param_3 = (TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
    }
    *(undefined8 *)((longlong)param_3 + (longlong)iVar6 * 8) = local_18[0];
  }
  return;
}

// StaticRegisterNativesUMovieSceneTestSequence @ 1468d0270

void __cdecl UMovieSceneTestSequence::StaticRegisterNativesUMovieSceneTestSequence(void)

{
  return;
}

// UnbindInvalidObjects @ 1468d2680

void __thiscall
UMovieSceneTestSequence::UnbindInvalidObjects
          (UMovieSceneTestSequence *this,FGuid *param_1,UObject *param_2)

{
  return;
}

// UnbindObjects @ 1468d2690

void __thiscall
UMovieSceneTestSequence::UnbindObjects
          (UMovieSceneTestSequence *this,FGuid *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,UObject *param_3)

{
  return;
}

// UnbindPossessableObjects @ 1468d26a0

void __thiscall
UMovieSceneTestSequence::UnbindPossessableObjects(UMovieSceneTestSequence *this,FGuid *param_1)

{
  return;
}

