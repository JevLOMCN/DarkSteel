// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// StaticClass @ 1460fa180

UClass * __cdecl UMovieSceneEntityInstantiatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.InnerSingleton == (UClass *)0x0
     ) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntityInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneEntityInstantiatorSystem,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEntityInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEntityInstantiatorSystem>,aFStackX_8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.InnerSingleton;
}

// UMovieSceneEntityInstantiatorSystem @ 14611ac40

UMovieSceneEntityInstantiatorSystem * __thiscall
UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
          (UMovieSceneEntityInstantiatorSystem *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(TStatIdData **)&this->field_0x40 = &TStatId::TStatId_NAME_None;
  *(undefined ***)this = &___7UMovieSceneEntityInstantiatorSystem__6B_;
  *(undefined2 *)&this->field_0x30 = 0xffff;
  return this;
}

// UMovieSceneEntityInstantiatorSystem @ 14611ac80

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntityInstantiatorSystem * __thiscall
UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
          (UMovieSceneEntityInstantiatorSystem *this,FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->field_0x32 = 4;
  *(undefined ***)this = &___7UMovieSceneEntityInstantiatorSystem__6B_;
  return this;
}

// ~UMovieSceneEntityInstantiatorSystem @ 14611e6c0

void __thiscall
UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
          (UMovieSceneEntityInstantiatorSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneEntitySystem__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14613c160

UClass * __cdecl UMovieSceneEntityInstantiatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntityInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneEntityInstantiatorSystem,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEntityInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneEntityInstantiatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneEntityInstantiatorSystem @ 1461557c0

void __cdecl
UMovieSceneEntityInstantiatorSystem::StaticRegisterNativesUMovieSceneEntityInstantiatorSystem(void)

{
  return;
}

// UnlinkStaleObjectBindings @ 14615bdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntityInstantiatorSystem::UnlinkStaleObjectBindings
          (UMovieSceneEntityInstantiatorSystem *this,TComponentTypeID<FGuid> param_1)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEntityID FVar2;
  longlong lVar3;
  FInstanceRegistry *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  FBuiltInComponentTypes *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined1 auStack_238 [32];
  FComponentTypeID local_218;
  FComponentTypeID local_216;
  FComponentTypeID local_214;
  FComponentTypeID local_212;
  undefined1 local_210 [8];
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> local_208;
  undefined8 local_1f0;
  TStatIdData *pTStack_1e8;
  byte local_1e0;
  undefined7 uStack_1df;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  <lambda_1> local_1a8;
  <lambda_1> local_198;
  undefined2 local_188;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TStack_186;
  TComponentTypeID<FGuid> TStack_184;
  undefined2 uStack_182;
  undefined8 uStack_180;
  TStatIdData *pTStack_178;
  ulonglong local_170;
  undefined8 uStack_168;
  undefined1 local_158 [4];
  FComponentAccess aFStack_154 [2];
  wchar_t *pwStack_150;
  TStatIdData *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Linker",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityInstantiatorSystem.cpp"
                       ,0x1c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)&this->field_0x28;
  if (*(longlong *)(lVar3 + 0x580) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = *(FInstanceRegistry **)(lVar3 + 0x580);
  if (*(int *)&(pFVar4->InvalidatedObjectBindings).Elements.field_0x8 !=
      *(int *)&(pFVar4->InvalidatedObjectBindings).Elements.field_0x34) {
    pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
    uStack_1d8 = 0x6ff;
    local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.ArrayNum = 0;
    local_208.ArrayMax = 0;
    local_1a8.StaleEntities = &local_208;
    pTStack_1e8 = &TStatId::TStatId_NAME_None;
    TStack_186 = pFVar8->InstanceHandle;
    local_1f0 = 0;
    uStack_1d4 = uStack_1d4 & 0xffffff00;
    local_170 = CONCAT71(uStack_1df,local_1e0) & 0xffffffffffffffe0;
    uStack_168._4_4_ = uStack_1d4;
    uStack_168._0_4_ = AnyHiPriThreadHiPriTask;
    local_218.Value = (pFVar8->Tags).ImportedEntity.Value;
    uStack_180 = 0;
    pTStack_178 = &TStatId::TStatId_NAME_None;
    local_130.AllMask.Bits.NumBits = 0;
    local_130.NoneMask.Bits.NumBits = 0;
    local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ComplexMasks.ArrayNum = 0;
    local_130.ComplexMasks.ArrayMax = 0;
    local_80 = 0;
    local_48 = 0;
    local_158._2_2_ = TStack_186;
    local_158._0_2_ = local_188;
    unique0x10000293 = param_1;
    unique0x10000295 = uStack_182;
    local_148 = &TStatId::TStatId_NAME_None;
    pwStack_150 = (wchar_t *)0x0;
    local_130.AllMask.Bits.MaxBits = 0x180;
    local_130.NoneMask.Bits.MaxBits = 0x180;
    local_7c = 0x180;
    local_44 = 0x180;
    local_1e0 = local_1e0 & 0xe0;
    local_1a8.InstanceRegistry = pFVar4;
    TStack_184 = param_1;
    uStack_140 = local_170;
    local_138 = uStack_168;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 2),&local_130);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 4),&local_130);
    local_1c8._First = &local_218;
    local_1c8._Last = &local_216;
    UE::MovieScene::FComponentMask::SetAll(&local_130.AllMask,&local_1c8);
    local_214.Value = (pFVar8->Tags).NeedsUnlink.Value;
    local_1b8._First = &local_214;
    local_1b8._Last = &local_212;
    UE::MovieScene::FComponentMask::SetAll(&local_130.NoneMask,&local_1b8);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
    ::
    Iterate_PerEntityImpl<_UMovieSceneEntityInstantiatorSystem::UnlinkStaleObjectBindings_::__l2::<lambda_1>_&>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>_>
                *)local_158,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_130,
               &local_1a8);
    if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
    }
    iVar6 = local_208.ArrayNum;
    uVar9 = (ulonglong)local_208.ArrayNum;
    pFVar1 = local_208.AllocatorInstance.Data + uVar9 * 2;
    FVar10.Data = local_208.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar9 != iVar6) {
        `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_210);
      }
      if (FVar10.Data == pFVar1) break;
      FVar2.Value = *(ushort *)FVar10.Data;
      UE::MovieScene::FEntityManager::AddComponent
                ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),FVar2,
                 (FComponentTypeID)(pFVar8->Tags).NeedsLink.Value);
      local_198.ComponentTypeID.Value = (pFVar8->Tags).NeedsUnlink.Value;
      local_198.__this = (FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28);
      UE::MovieScene::FEntityManager::
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponent_::__l8::<lambda_1>_>
                (local_198.__this,FVar2,&local_198);
      uVar9 = local_208._8_8_ & 0xffffffff;
      FVar10.Data = FVar10.Data + 2;
    }
    if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.AllocatorInstance.Data);
    }
  }
  return;
}

// UnlinkStaleObjectBindings @ 14615c0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneEntityInstantiatorSystem::UnlinkStaleObjectBindings
          (UMovieSceneEntityInstantiatorSystem *this,
          TComponentTypeID<FMovieSceneObjectBindingID> param_1)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneEntityID FVar2;
  longlong lVar3;
  FInstanceRegistry *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  FBuiltInComponentTypes *pFVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  undefined1 auStack_238 [32];
  FComponentTypeID local_218;
  FComponentTypeID local_216;
  FComponentTypeID local_214;
  FComponentTypeID local_212;
  undefined1 local_210 [8];
  TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> local_208;
  undefined8 local_1f0;
  TStatIdData *pTStack_1e8;
  byte local_1e0;
  undefined7 uStack_1df;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  <lambda_1> local_1a8;
  <lambda_1> local_198;
  undefined2 local_188;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> TStack_186;
  TComponentTypeID<FMovieSceneObjectBindingID> TStack_184;
  undefined2 uStack_182;
  undefined8 uStack_180;
  TStatIdData *pTStack_178;
  ulonglong local_170;
  undefined8 uStack_168;
  undefined1 local_158 [4];
  FComponentAccess aFStack_154 [2];
  wchar_t *pwStack_150;
  TStatIdData *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Linker",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityInstantiatorSystem.cpp"
                       ,0x46,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)&this->field_0x28;
  if (*(longlong *)(lVar3 + 0x580) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = *(FInstanceRegistry **)(lVar3 + 0x580);
  if (*(int *)&(pFVar4->InvalidatedObjectBindings).Elements.field_0x8 !=
      *(int *)&(pFVar4->InvalidatedObjectBindings).Elements.field_0x34) {
    pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
    uStack_1d8 = 0x6ff;
    local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.ArrayNum = 0;
    local_208.ArrayMax = 0;
    local_1a8.StaleEntities = &local_208;
    pTStack_1e8 = &TStatId::TStatId_NAME_None;
    TStack_186 = pFVar8->InstanceHandle;
    local_1f0 = 0;
    uStack_1d4 = uStack_1d4 & 0xffffff00;
    local_170 = CONCAT71(uStack_1df,local_1e0) & 0xffffffffffffffe0;
    uStack_168._4_4_ = uStack_1d4;
    uStack_168._0_4_ = AnyHiPriThreadHiPriTask;
    local_218.Value = (pFVar8->Tags).ImportedEntity.Value;
    uStack_180 = 0;
    pTStack_178 = &TStatId::TStatId_NAME_None;
    local_130.AllMask.Bits.NumBits = 0;
    local_130.NoneMask.Bits.NumBits = 0;
    local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ComplexMasks.ArrayNum = 0;
    local_130.ComplexMasks.ArrayMax = 0;
    local_80 = 0;
    local_48 = 0;
    local_158._2_2_ = TStack_186;
    local_158._0_2_ = local_188;
    unique0x10000293 = param_1;
    unique0x10000295 = uStack_182;
    local_148 = &TStatId::TStatId_NAME_None;
    pwStack_150 = (wchar_t *)0x0;
    local_130.AllMask.Bits.MaxBits = 0x180;
    local_130.NoneMask.Bits.MaxBits = 0x180;
    local_7c = 0x180;
    local_44 = 0x180;
    local_1e0 = local_1e0 & 0xe0;
    local_1a8.InstanceRegistry = pFVar4;
    TStack_184 = param_1;
    uStack_140 = local_170;
    local_138 = uStack_168;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 2),&local_130);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 4),&local_130);
    local_1c8._First = &local_218;
    local_1c8._Last = &local_216;
    UE::MovieScene::FComponentMask::SetAll(&local_130.AllMask,&local_1c8);
    local_214.Value = (pFVar8->Tags).NeedsUnlink.Value;
    local_1b8._First = &local_214;
    local_1b8._Last = &local_212;
    UE::MovieScene::FComponentMask::SetAll(&local_130.NoneMask,&local_1b8);
    UE::MovieScene::
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneObjectBindingID>_>
    ::
    Iterate_PerEntityImpl<_UMovieSceneEntityInstantiatorSystem::UnlinkStaleObjectBindings_::__l2::<lambda_1>_&>
              ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneObjectBindingID>_>
                *)local_158,(FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_130,
               &local_1a8);
    if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
    }
    iVar6 = local_208.ArrayNum;
    uVar9 = (ulonglong)local_208.ArrayNum;
    pFVar1 = local_208.AllocatorInstance.Data + uVar9 * 2;
    FVar10.Data = local_208.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar9 != iVar6) {
        `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_210);
      }
      if (FVar10.Data == pFVar1) break;
      FVar2.Value = *(ushort *)FVar10.Data;
      UE::MovieScene::FEntityManager::AddComponent
                ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),FVar2,
                 (FComponentTypeID)(pFVar8->Tags).NeedsLink.Value);
      local_198.ComponentTypeID.Value = (pFVar8->Tags).NeedsUnlink.Value;
      local_198.__this = (FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28);
      UE::MovieScene::FEntityManager::
      IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponent_::__l8::<lambda_1>_>
                (local_198.__this,FVar2,&local_198);
      uVar9 = local_208._8_8_ & 0xffffffff;
      FVar10.Data = FVar10.Data + 2;
    }
    if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.AllocatorInstance.Data);
    }
  }
  return;
}

