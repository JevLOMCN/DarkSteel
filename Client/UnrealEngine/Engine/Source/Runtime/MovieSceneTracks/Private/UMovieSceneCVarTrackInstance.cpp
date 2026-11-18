// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 14687fa20

UClass * __cdecl UMovieSceneCVarTrackInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCVarTrackInstance",
               &Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.InnerSingleton,
               StaticRegisterNativesUMovieSceneCVarTrackInstance,0xa0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCVarTrackInstance>,
               InternalVTableHelperCtorCaller<UMovieSceneCVarTrackInstance>,local_res8,
               UMovieSceneTrackInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.InnerSingleton;
}

// UMovieSceneCVarTrackInstance @ 14689cf80

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCVarTrackInstance * __thiscall
UMovieSceneCVarTrackInstance::UMovieSceneCVarTrackInstance
          (UMovieSceneCVarTrackInstance *this,FVTableHelper *param_1)

{
  UMovieSceneTrackInstance::UMovieSceneTrackInstance((UMovieSceneTrackInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneCVarTrackInstance__6B_;
  *(undefined8 *)&(this->CVarsNeedingUpdate).Elements = 0;
  *(undefined8 *)&(this->CVarsNeedingUpdate).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CVarsNeedingUpdate).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CVarsNeedingUpdate).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CVarsNeedingUpdate).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CVarsNeedingUpdate).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CVarsNeedingUpdate).Elements.field_0x30 = 0xffffffff;
  (this->CVarsNeedingUpdate).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CVarsNeedingUpdate).HashSize = 0;
  return this;
}

// UMovieSceneCVarTrackInstance @ 14689cfe0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCVarTrackInstance * __thiscall
UMovieSceneCVarTrackInstance::UMovieSceneCVarTrackInstance
          (UMovieSceneCVarTrackInstance *this,FObjectInitializer *param_1)

{
  UMovieSceneTrackInstance::UMovieSceneTrackInstance((UMovieSceneTrackInstance *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneCVarTrackInstance__6B_;
  *(undefined8 *)&(this->CVarsNeedingUpdate).Elements = 0;
  *(undefined8 *)&(this->CVarsNeedingUpdate).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CVarsNeedingUpdate).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CVarsNeedingUpdate).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CVarsNeedingUpdate).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CVarsNeedingUpdate).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CVarsNeedingUpdate).Elements.field_0x30 = 0xffffffff;
  (this->CVarsNeedingUpdate).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CVarsNeedingUpdate).HashSize = 0;
  return this;
}

// ~UMovieSceneCVarTrackInstance @ 1468a0480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCVarTrackInstance::~UMovieSceneCVarTrackInstance(UMovieSceneCVarTrackInstance *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneCVarTrackInstance__6B_;
  (this->CVarsNeedingUpdate).HashSize = 0;
  FVar1 = (this->CVarsNeedingUpdate).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CVarsNeedingUpdate).Elements);
  UMovieSceneTrackInstance::~UMovieSceneTrackInstance((UMovieSceneTrackInstance *)this);
  return;
}

// GetPrivateStaticClass @ 1468b6790

UClass * __cdecl UMovieSceneCVarTrackInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCVarTrackInstance",
               &Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.InnerSingleton,
               StaticRegisterNativesUMovieSceneCVarTrackInstance,0xa0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCVarTrackInstance>,
               InternalVTableHelperCtorCaller<UMovieSceneCVarTrackInstance>,local_res8,
               UMovieSceneTrackInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCVarTrackInstance.InnerSingleton;
}

// OnAnimate @ 1468be280

void __thiscall UMovieSceneCVarTrackInstance::OnAnimate(UMovieSceneCVarTrackInstance *this)

{
  return;
}

// OnBeginUpdateInputs @ 1468bf610

void __thiscall
UMovieSceneCVarTrackInstance::OnBeginUpdateInputs(UMovieSceneCVarTrackInstance *this)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  int iVar1;
  
  this_00 = &this->CVarsNeedingUpdate;
  if (*(int *)&(this->CVarsNeedingUpdate).Elements.field_0x8 !=
      *(int *)&(this->CVarsNeedingUpdate).Elements.field_0x34) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this_00->Elements,0,*(int *)&(this->CVarsNeedingUpdate).Elements.field_0x8);
    iVar1 = *(int *)&(this->CVarsNeedingUpdate).Elements.field_0xc;
    *(undefined4 *)&(this->CVarsNeedingUpdate).Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->CVarsNeedingUpdate).Elements.field_0xc);
    }
    *(undefined4 *)&(this->CVarsNeedingUpdate).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->CVarsNeedingUpdate).Elements.field_0x28 = 0;
    *(undefined4 *)&(this->CVarsNeedingUpdate).Elements.field_0x30 = 0xffffffff;
  }
  return;
}

// OnDestroyed @ 1468bf6d0

void __thiscall UMovieSceneCVarTrackInstance::OnDestroyed(UMovieSceneCVarTrackInstance *this)

{
  return;
}

// OnEndUpdateInputs @ 1468bf6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieSceneCVarTrackInstance::OnEndUpdateInputs(UMovieSceneCVarTrackInstance *this)

{
  TTuple<FString,FString> *pTVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  longlong *plVar4;
  ForAnyElementType _Src;
  void *_Src_00;
  code *pcVar5;
  IConsoleManager *pIVar6;
  FCVarInfo *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  longlong *plVar12;
  undefined8 uVar13;
  FString *pFVar14;
  byte bVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  undefined8 *puVar22;
  uint uVar23;
  FObjectPtr_u_0 *this_00;
  FScriptContainerElement *pFVar24;
  ForElementType<unsigned_int> FVar25;
  wchar_t *pwVar26;
  TTuple<FString,FString> *pTVar27;
  undefined1 auStackY_218 [32];
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6 [2];
  uint local_1d4;
  longlong local_1d0;
  FObjectPtr_u_0 *local_1c8;
  TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> local_1c0;
  undefined8 local_1b0;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c;
  int local_198;
  TPairInitializer<FString_const_&,_private:_virtual_void___cdecl_UMovieSceneCVarTrackInstance::OnEndUpdateInputs(void)_::_2_::FCVarInfo_&&>
  local_190;
  FObjectPtr_u_0 *local_180;
  uint local_178;
  undefined1 local_174;
  undefined8 local_170;
  undefined1 local_168;
  undefined4 local_164;
  undefined4 local_160;
  longlong *local_158;
  uint uStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TTuple<FString,FString> *local_f8;
  ForAnyElementType *local_f0;
  undefined1 local_e8 [16];
  FString local_d8;
  FString local_c8;
  FString local_b8 [2];
  undefined4 local_8c;
  longlong local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  lVar20 = this->_padding_;
  pwVar26 = L"";
  local_190.Value = (FCVarInfo *)this;
  if ((*(longlong *)(lVar20 + 0x580) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1d0 = *(longlong *)(lVar20 + 0x580);
  iVar18 = (int)this->_padding_;
  this_00 = (FObjectPtr_u_0 *)this->_padding_;
  local_88 = 0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_1c8 = this_00;
  if ((iVar18 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_180 = this_00 + (longlong)iVar18 * 2;
  if (this_00 != local_180) {
LAB_1468bf820:
    iVar18 = *(int *)((ulonglong)*(ushort *)(this_00 + 1) * 0x140 + 0xe0 +
                     *(longlong *)(local_1d0 + 8));
    if (this_00->Handle == (UObject *)0x0) {
      pFVar14 = GetTypeName<UMovieSceneCVarSection>(local_b8);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar26 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar26);
    }
    pUVar11 = Z_Construct_UClass_UMovieSceneCVarSection_NoRegister();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar11);
    if ((!bVar8) || (pUVar3 = this_00->Handle, this_00 = local_1c8, pUVar3 == (UObject *)0x0)) {
      pFVar14 = GetTypeName<UMovieSceneCVarSection>(&local_d8);
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      pFVar14 = GetFullNameForCastLogError<UMovieSceneSection>
                          (&local_c8,(UMovieSceneSection *)this_00->Handle);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar26 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar26,pwVar17);
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Array((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)&pUVar3[7].field_0x10,&local_1c0);
    iVar10 = *(int *)&pUVar3[7].field_0x8;
    plVar19 = *(longlong **)(pUVar3 + 7);
    plVar12 = plVar19 + (longlong)iVar10 * 3;
    while( true ) {
      if (*(int *)&pUVar3[7].field_0x8 != iVar10) {
        local_1d8 = 0;
        `TCheckedPointerIterator<FMovieSceneConsoleVariableCollection,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1d8);
      }
      if (plVar19 == plVar12) break;
      if ((*plVar19 != 0) && (plVar4 = (longlong *)plVar19[1], plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4,(char)plVar19[2],&local_1c0);
      }
      plVar19 = plVar19 + 3;
    }
    uVar16 = (ulonglong)local_1c0.ArrayNum;
    pTVar27 = (TTuple<FString,FString> *)(local_1c0.AllocatorInstance.Data + uVar16 * 0x20);
    local_1d4 = local_1c0.ArrayNum;
    pFVar24 = local_1c0.AllocatorInstance.Data + 8;
LAB_1468bf8f0:
    if (local_1c0.ArrayNum != (uint)uVar16) {
      local_1d7 = 0;
      `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1d7);
    }
    pFVar7 = local_190.Value;
    pTVar1 = (TTuple<FString,FString> *)(pFVar24 + -8);
    if (pTVar1 == pTVar27) goto LAB_1468bfb09;
    if (*(int *)&(((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                  ((longlong)local_190.Value + 0x50))->Elements).field_0x8 !=
        *(int *)&(((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                  ((longlong)local_190.Value + 0x50))->Elements).field_0x34) {
      if (*(int *)pFVar24 == 0) {
        iVar10 = 0;
        pwVar17 = L"";
      }
      else {
        pwVar17 = *(wchar_t **)pTVar1;
        iVar10 = *(int *)pFVar24 + -1;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar17);
      iVar10 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>
                         ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                          ((longlong)pFVar7 + 0x50),uVar9,(FString *)pTVar1);
      if (iVar10 != -1) goto LAB_1468bf952;
      goto LAB_1468bfafc;
    }
LAB_1468bf952:
    if (*(int *)pFVar24 == 0) {
      iVar10 = 0;
      pwVar17 = L"";
    }
    else {
      pwVar17 = *(wchar_t **)pTVar1;
      iVar10 = *(int *)pFVar24 + -1;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar17);
    iVar10 = TSet<TTuple<FString,`UMovieSceneCVarTrackInstance::OnEndUpdateInputs'::__l2::FCVarInfo>,TDefaultMapHashableKeyFuncs<FString,`UMovieSceneCVarTrackInstance::OnEndUpdateInputs'::__l2::FCVarInfo,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>(&local_88,uVar9,(FString *)pTVar1);
    if (iVar10 == -1) {
LAB_1468bfa6d:
      local_1a0 = *(int *)(pFVar24 + 0x10);
      lVar20 = (longlong)local_1a0;
      _Src_00 = *(void **)(pFVar24 + 8);
      local_1a8.Data = (FScriptContainerElement *)0x0;
      if (local_1a0 == 0) {
        local_19c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1a0,0,&local_1a8,local_1a0,&local_19c);
        memcpy(local_1a8.Data,_Src_00,lVar20 * 2);
      }
      local_f0 = &local_1a8;
      local_198 = iVar18;
      local_f8 = pTVar1;
      TSet<TTuple<FString,`UMovieSceneCVarTrackInstance::OnEndUpdateInputs'::__l2::FCVarInfo>,TDefaultMapHashableKeyFuncs<FString,`UMovieSceneCVarTrackInstance::OnEndUpdateInputs'::__l2::FCVarInfo,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,_UMovieSceneCVarTrackInstance::OnEndUpdateInputs_::__l2::FCVarInfo_&&>_>
                (&local_88,&local_190,(bool *)&local_f8);
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
    }
    else {
      lVar20 = (longlong)iVar10 * 0x30 + local_88;
      pFVar21 = (FScriptContainerElement *)(lVar20 + 0x10);
      if (lVar20 == 0) {
        pFVar21 = (FScriptContainerElement *)0x0;
      }
      if (pFVar21 == (FScriptContainerElement *)0x0) goto LAB_1468bfa6d;
      if (iVar18 <= *(int *)(pFVar21 + 0x10)) {
        if ((iVar18 != *(int *)(pFVar21 + 0x10)) || ((byte)LogMovieScene._0_1_ < 3))
        goto LAB_1468bfafc;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        uVar16 = (ulonglong)local_1d4;
        pFVar24 = pFVar24 + 0x20;
        goto LAB_1468bf8f0;
      }
      if (pFVar21 == pFVar24 + 8) goto LAB_1468bfafc;
      iVar10 = *(int *)(pFVar24 + 0x10);
      pFVar2 = pFVar21 + 0xc;
                    /* WARNING: Load size is inaccurate */
      _Src.Data = pFVar24[8];
      *(int *)(pFVar21 + 8) = iVar10;
      if ((iVar10 == 0) && (*(int *)pFVar2 == 0)) {
        uVar16 = (ulonglong)local_1d4;
        pFVar24 = pFVar24 + 0x20;
        *(int *)pFVar2 = 0;
        goto LAB_1468bf8f0;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,*(int *)pFVar2,(ForAnyElementType *)pFVar21,iVar10,(int *)pFVar2);
      if (iVar10 != 0) {
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar21,_Src.Data,(longlong)iVar10 * 2);
        uVar16 = (ulonglong)local_1d4;
        pFVar24 = pFVar24 + 0x20;
        goto LAB_1468bf8f0;
      }
    }
LAB_1468bfafc:
    uVar16 = (ulonglong)local_1d4;
    pFVar24 = pFVar24 + 0x20;
    goto LAB_1468bf8f0;
  }
LAB_1468bfb4d:
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = local_78.NumBits;
  pIVar6 = IConsoleManager::Singleton;
  uStack_150 = 0;
  uStack_14c = 1;
  local_138 = 0;
  uStack_13c = local_138;
  if (local_78.NumBits != 0) {
    FVar25 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_78.AllocatorInstance.SecondaryData;
    }
    uVar23 = *(uint *)FVar25;
    local_138 = 0;
    uStack_150 = 0;
    while (uVar23 == 0) {
      lVar20 = (longlong)(int)uStack_150;
      local_138 = local_138 + 0x20;
      uStack_150 = uStack_150 + 1;
      uStack_13c = local_78.NumBits;
      if ((int)((local_78.NumBits - 1U) + ((int)(local_78.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          (int)uStack_150) goto LAB_1468bfc12;
      uVar23 = *(uint *)((longlong)FVar25 + (lVar20 + 1) * 4);
    }
    uStack_14c = -uVar23 & uVar23;
    uVar16 = (ulonglong)uStack_14c * 2 + 1;
    lVar20 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_190.Key._4_4_ = (int)lVar20;
    uStack_13c = (local_138 - 1) + local_190.Key._4_4_;
    if (local_78.NumBits < (int)uStack_13c) {
      uStack_13c = local_78.NumBits;
    }
  }
LAB_1468bfc12:
  local_158 = &local_88;
  uStack_134 = local_8c;
  local_148 = &local_78;
  uVar23 = local_78.NumBits & 0xffffffe0;
  iStack_130 = (int)local_80 - local_54;
  uStack_140 = 0xffffffff;
  TStack_120.CurrentBitIndex = uStack_13c;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_14c,uStack_150);
  iVar18 = local_78.NumBits >> 5;
  TStack_120._28_4_ = local_8c;
  TStack_120.BaseBitIndex = local_138;
  uStack_100 = CONCAT44(uStack_12c,iStack_130);
  bVar15 = (byte)local_78.NumBits;
  local_128 = local_158;
  TStack_120.Array = local_148;
  if ((local_78.NumBits < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar9 != local_78.NumBits) {
    FVar25 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_78.AllocatorInstance.SecondaryData;
    }
    uVar9 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar18 * 4);
    while (uVar9 == 0) {
      lVar20 = (longlong)iVar18;
      uVar23 = uVar23 + 0x20;
      iVar18 = iVar18 + 1;
      uVar9 = local_78.NumBits;
      if ((int)((local_78.NumBits - 1U) + ((int)(local_78.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar18) goto LAB_1468bfd20;
      uVar9 = *(uint *)((longlong)FVar25 + (lVar20 + 1) * 4);
    }
    uVar16 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar9 = (int)lVar20 + -1 + uVar23;
    if (local_78.NumBits < (int)uVar9) {
      uVar9 = local_78.NumBits;
    }
  }
LAB_1468bfd20:
  while( true ) {
    plVar12 = local_128;
    if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
      `TSparseArray<TSparseSetElement<TTuple<FString,`UMovieSceneCVarTrackInstance::OnEndUpdateInputs'::__l2::FCVarInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d6);
    }
    if (((TStack_120.CurrentBitIndex == uVar9) && (TStack_120.Array == &local_78)) &&
       (plVar12 == &local_88)) break;
    puVar22 = (undefined8 *)(*plVar12 + (longlong)TStack_120.CurrentBitIndex * 0x30);
    if (*(int *)(puVar22 + 1) == 0) {
      pwVar26 = L"";
    }
    else {
      pwVar26 = (wchar_t *)*puVar22;
    }
    plVar12 = (longlong *)(**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,pwVar26,1);
    if (plVar12 == (longlong *)0x0) {
      if (2 < (byte)LogMovieScene._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      }
    }
    else {
      local_1b0 = 0;
      if (*(int *)(puVar22 + 3) == 0) {
        pwVar26 = L"";
      }
      else {
        pwVar26 = (wchar_t *)puVar22[2];
      }
      local_170 = 0;
      local_168 = 0;
      local_174 = 1;
      local_160 = 0x1000000;
      local_164 = 0xf000000;
      local_178 = (**(code **)(*plVar12 + 0x18))(plVar12);
      lVar20 = *plVar12;
      local_178 = local_178 & 0xff000000;
      uVar13 = (**(code **)(lVar20 + 0xa8))(plVar12,local_e8,&local_178);
      (**(code **)(lVar20 + 0xb0))(plVar12,pwVar26,uVar13);
    }
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,`UMovieSceneCVarTrackInstance::OnEndUpdateInputs'::__l2::FCVarInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,_UMovieSceneCVarTrackInstance::OnEndUpdateInputs_::__l2::FCVarInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
LAB_1468bfb09:
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)local_1c0.AllocatorInstance.Data,local_1c0.ArrayNum);
  if ((TTuple<FString,FString> *)local_1c0.AllocatorInstance.Data != (TTuple<FString,FString> *)0x0)
  {
    FMemory::Free(local_1c0.AllocatorInstance.Data);
  }
  this_00 = local_1c8 + 2;
  local_1c8 = this_00;
  if (this_00 == local_180) goto LAB_1468bfb4d;
  goto LAB_1468bf820;
}

// OnInputAdded @ 1468c02f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCVarTrackInstance::OnInputAdded
          (UMovieSceneCVarTrackInstance *this,FMovieSceneTrackInstanceInput *param_1)

{
  undefined8 *puVar1;
  FMovieSceneCVarOverrides *pFVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  UMovieSceneEntitySystemLinker *pUVar5;
  code *pcVar6;
  FPreAnimatedStorageGroupHandle FVar7;
  UMovieSceneCVarTrackInstance *pUVar8;
  FPreAnimatedCVarStorage *pFVar9;
  FMovieSceneCVarOverrides *pFVar10;
  bool bVar11;
  EPreAnimatedStorageRequirement EVar12;
  UMovieSceneCVarSection *pUVar13;
  ulonglong uVar14;
  longlong *plVar15;
  void **ppvVar16;
  FString *pFVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint *puVar25;
  ForAnyElementType FVar26;
  TTuple<FString,FString> *pTVar27;
  uint uVar28;
  undefined8 uVar29;
  uint uVar30;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  undefined1 local_1a0 [8];
  undefined8 local_198;
  undefined1 local_18f [7];
  FPreAnimatedStorageIndex local_188 [2];
  FPreAnimatedStorageIndex local_180 [2];
  undefined1 local_178 [12];
  uint local_16c;
  int local_168;
  TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> local_160;
  void *local_150;
  undefined8 local_148;
  int local_140;
  undefined1 local_13c [12];
  undefined8 local_130;
  UMovieSceneCVarTrackInstance *local_128;
  TSharedPtr<UE::MovieScene::FPreAnimatedCVarStorage,1> local_120;
  FMovieSceneCVarOverrides *local_110;
  uint uStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  FMovieSceneCVarOverrides *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  void *local_b0;
  undefined4 local_84;
  FScopedPreAnimatedCaptureSource local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pUVar5 = (UMovieSceneEntitySystemLinker *)this->_padding_;
  uVar23 = 0;
  local_130 = 1;
  uVar22 = 0;
  local_178._4_4_ = 0;
  local_128 = this;
  pUVar13 = CastChecked<UMovieSceneCVarSection,UMovieSceneSection>(&param_1->Section,NullChecked);
  local_13c._4_8_ = pUVar13;
  FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource(&local_80,pUVar5,param_1);
  if (((pUVar5->PreAnimatedState).NumRequestsForGlobalState != 0) ||
     (uVar29 = 1, local_80.bWantsRestoreState != false)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      UngroupedHandle.Value = -1;
      _Init_thread_footer(&::_TSS0);
    }
    UE::MovieScene::FPreAnimatedStateExtension::
    GetOrCreateStorage<UE::MovieScene::FPreAnimatedCVarStorage>
              (&pUVar5->PreAnimatedState,&local_120,
               (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedCVarStorage>)
               UE::MovieScene::FPreAnimatedCVarStorage::StorageID);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Array((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)&pUVar13->ConsoleVariables,&local_160);
    iVar20 = (pUVar13->ConsoleVariableCollections).ArrayNum;
    pFVar21 = (pUVar13->ConsoleVariableCollections).AllocatorInstance.Data;
    pFVar4 = pFVar21 + (longlong)iVar20 * 0x18;
    while( true ) {
      if ((pUVar13->ConsoleVariableCollections).ArrayNum != iVar20) {
        local_1a8 = 0;
        `TCheckedPointerIterator<FMovieSceneConsoleVariableCollection,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1a8);
      }
      if (pFVar21 == pFVar4) break;
      if ((*(longlong *)pFVar21 != 0) &&
         (plVar15 = *(longlong **)(pFVar21 + 8), plVar15 != (longlong *)0x0)) {
        (**(code **)(*plVar15 + 0x10))(plVar15,pFVar21[0x10],&local_160);
      }
      pFVar21 = pFVar21 + 0x18;
    }
    uVar14 = (ulonglong)local_160.ArrayNum;
    pTVar27 = (TTuple<FString,FString> *)(local_160.AllocatorInstance.Data + uVar14 * 0x20);
    local_178._4_4_ = local_160.ArrayNum;
    FVar26.Data = local_160.AllocatorInstance.Data;
    uVar30 = uVar23;
    while( true ) {
      if (local_160.ArrayNum != (uint)uVar14) {
        local_1a7[0] = 0;
        `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1a7);
      }
      if ((TTuple<FString,FString> *)FVar26.Data == pTVar27) break;
      if (((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits> *)local_120.Object ==
           (TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar9 = local_120.Object;
      FVar7.Value = UngroupedHandle.Value;
      UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits>::
      GetOrCreateStorageIndex
                ((TPreAnimatedStateStorage<UE::MovieScene::FPreAnimatedCVarTraits> *)
                 local_120.Object,(FString *)local_178);
      local_16c = ((FPreAnimatedStorageID *)&pFVar9->field_0xc0)->TypeID;
      local_168 = local_178._0_4_;
      local_178._8_4_ = FVar7.Value;
      UE::MovieScene::FPreAnimatedStateExtension::AddSourceMetaData
                (*(FPreAnimatedStateExtension **)&pFVar9->field_0xb0,
                 (FPreAnimatedStateEntry *)(local_178 + 8));
      EVar12 = UE::MovieScene::FPreAnimatedStateExtension::GetStorageRequirement
                         (*(FPreAnimatedStateExtension **)&pFVar9->field_0xb0,
                          (FPreAnimatedStateEntry *)(local_178 + 8));
      iVar20 = local_168;
      local_180[0].Value = local_168;
      if ((local_168 == -1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StorageIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                              ,0x1b6,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar18 = *(longlong *)&pFVar9->field_0x68 + (longlong)iVar20 * 0x28;
      if (EVar12 == Persistent) {
        bVar11 = (*(byte *)(lVar18 + 0x20) & 1) == 0;
LAB_1468c0574:
        if (bVar11) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            `public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
            ::__l2::ConsoleManager = IConsoleManager::Get();
            _Init_thread_footer(&`public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          if (*(int *)&((TTuple<FString,FString> *)FVar26.Data)->field_0x8 == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = *(wchar_t **)FVar26.Data;
          }
          plVar15 = (longlong *)
                    (**(code **)((longlong)
                                 *`public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
                                  ::__l2::ConsoleManager + 0xc0))
                              (`public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
                               ::__l2::ConsoleManager,pwVar19,1);
          if (plVar15 == (longlong *)0x0) {
            uVar30 = uVar30 | 2;
            local_150 = (void *)0x0;
            local_148 = 0;
            ppvVar16 = &local_150;
          }
          else {
            uVar30 = uVar30 | 1;
            ppvVar16 = (void **)(**(code **)(*plVar15 + 0xd8))(plVar15);
          }
          local_1a0 = (undefined1  [8])*ppvVar16;
          *ppvVar16 = (void *)0x0;
          local_198 = ppvVar16[1];
          ppvVar16[1] = (void *)0x0;
          if (((uVar30 & 2) != 0) && (uVar30 = uVar30 & 0xfffffffd, local_150 != (void *)0x0)) {
            FMemory::Free(local_150);
          }
          if (((uVar30 & 1) != 0) && (uVar30 = uVar30 & 0xfffffffe, local_b0 != (void *)0x0)) {
            FMemory::Free(local_b0);
          }
          local_188[0].Value = local_178._0_4_;
          if ((local_178._0_4_ == -1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StorageIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                  ,0x195,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar18 = *(longlong *)&pFVar9->field_0x68 + (longlong)local_188[0].Value * 0x28;
          if (EVar12 == Persistent) {
            if (((*(byte *)(lVar18 + 0x20) & 1) != 0) &&
               (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<3111672766223352219>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                    ,0x19b,"!CachedData.bInitialized"), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar1 = (undefined8 *)(lVar18 + 0x10);
            if (puVar1 != (undefined8 *)local_1a0) {
              if ((void *)*puVar1 != (void *)0x0) {
                FMemory::Free((void *)*puVar1);
              }
              *puVar1 = local_1a0;
              local_1a0 = (undefined1  [8])0x0;
              *(int *)(lVar18 + 0x18) = (int)local_198;
              *(int *)(lVar18 + 0x1c) = local_198._4_4_;
              local_198 = (void *)0x0;
            }
            *(byte *)(lVar18 + 0x20) = *(byte *)(lVar18 + 0x20) | 3;
          }
          else if (EVar12 == Transient) {
            if ((*(byte *)(lVar18 + 0x20) & 1) != 0) {
              pFVar17 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                        ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                *)&pFVar9->field_0xa0,local_188);
              if ((pFVar17 != (FString *)0x0) &&
                 (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<3111672766223352226>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                      ,0x1a2,
                                      "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                                     ), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((*(byte *)(lVar18 + 0x20) & 1) != 0) {
                TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                ::Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,FString>
                          ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                            *)&pFVar9->field_0xa0,local_188,(FString *)local_1a0);
                goto LAB_1468c07e6;
              }
            }
            puVar1 = (undefined8 *)(lVar18 + 0x10);
            if (puVar1 != (undefined8 *)local_1a0) {
              if ((void *)*puVar1 != (void *)0x0) {
                FMemory::Free((void *)*puVar1);
              }
              *puVar1 = local_1a0;
              local_1a0 = (undefined1  [8])0x0;
              *(int *)(lVar18 + 0x18) = (int)local_198;
              *(int *)(lVar18 + 0x1c) = local_198._4_4_;
              local_198 = (void *)0x0;
            }
            *(byte *)(lVar18 + 0x20) = *(byte *)(lVar18 + 0x20) | 1;
          }
LAB_1468c07e6:
          if (local_1a0 != (undefined1  [8])0x0) {
            FMemory::Free((void *)local_1a0);
          }
        }
      }
      else if ((EVar12 == Transient) && ((*(byte *)(lVar18 + 0x20) & 3) != 1)) {
        pFVar17 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                  ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,FString,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                          *)&pFVar9->field_0xa0,local_180);
        bVar11 = pFVar17 == (FString *)0x0;
        goto LAB_1468c0574;
      }
      uVar14 = (ulonglong)(uint)local_178._4_4_;
      FVar26.Data = FVar26.Data + 0x20;
    }
    DestructItems<TTuple<FString,FString>,int>
              ((TTuple<FString,FString> *)local_160.AllocatorInstance.Data,local_160.ArrayNum);
    pUVar13 = (UMovieSceneCVarSection *)local_13c._4_8_;
    if ((TTuple<FString,FString> *)local_160.AllocatorInstance.Data !=
        (TTuple<FString,FString> *)0x0) {
      FMemory::Free(local_160.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_120.SharedReferenceCount.ReferenceController);
    uVar29 = local_130;
  }
  uStack_104 = (uint)uVar29;
  local_100 = &(pUVar13->ConsoleVariables).ValuesByCVar.field_0x10;
  uVar30 = *(uint *)&(pUVar13->ConsoleVariables).ValuesByCVar.field_0x28;
  pFVar2 = &pUVar13->ConsoleVariables;
  local_f0 = 0;
  uStack_f4 = uVar22;
  if (uVar30 != 0) {
    puVar25 = *(uint **)&(pUVar13->ConsoleVariables).ValuesByCVar.field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)local_100;
    }
    uVar28 = *puVar25;
    uVar22 = uVar23;
    local_f0 = uVar23;
    while (uVar28 == 0) {
      lVar18 = (longlong)(int)uVar22;
      local_f0 = local_f0 + 0x20;
      uVar22 = uVar22 + 1;
      uStack_f4 = uVar30;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
      goto LAB_1468c08ac;
      uVar28 = puVar25[lVar18 + 1];
    }
    uStack_104 = -uVar28 & uVar28;
    uVar14 = (ulonglong)uStack_104 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_140 = (int)lVar18;
    uStack_f4 = (local_f0 - 1) + local_140;
    if ((int)uVar30 < (int)uStack_f4) {
      uStack_f4 = uVar30;
    }
  }
LAB_1468c08ac:
  puVar3 = &(pUVar13->ConsoleVariables).ValuesByCVar.field_0x10;
  uStack_ec = local_84;
  iStack_e8 = *(int *)&(pUVar13->ConsoleVariables).ValuesByCVar.field_0x8 -
              *(int *)&(pUVar13->ConsoleVariables).ValuesByCVar.field_0x34;
  uVar23 = *(uint *)&(pUVar13->ConsoleVariables).ValuesByCVar.field_0x28;
  uStack_f8 = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_104,uVar22);
  uVar28 = uVar23 & 0xffffffe0;
  TStack_d8.CurrentBitIndex = uStack_f4;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar23 >> 5;
  TStack_d8._28_4_ = local_84;
  TStack_d8.BaseBitIndex = local_f0;
  uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
  local_110 = pFVar2;
  uStack_108 = uVar22;
  local_e0 = pFVar2;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_100;
  if ((((int)uVar23 < 0) || ((int)uVar30 < (int)uVar23)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar8 = local_128;
  uVar22 = *(uint *)&(pUVar13->ConsoleVariables).ValuesByCVar.field_0x28;
  if (uVar23 != uVar22) {
    puVar24 = *(undefined1 **)&(pUVar13->ConsoleVariables).ValuesByCVar.field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar3;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar20 * 4);
    while (uVar23 == 0) {
      lVar18 = (longlong)iVar20;
      uVar28 = uVar28 + 0x20;
      iVar20 = iVar20 + 1;
      uVar23 = uVar22;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_1468c09c0;
      uVar23 = *(uint *)(puVar24 + lVar18 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar23 = (int)lVar18 + -1 + uVar28;
    if ((int)uVar22 < (int)uVar23) {
      uVar23 = uVar22;
    }
  }
LAB_1468c09c0:
  while( true ) {
    pFVar10 = local_e0;
    if (*(int *)&(local_e0->ValuesByCVar).field_0x8 - *(int *)&(local_e0->ValuesByCVar).field_0x34
        != (int)uStack_b8) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_18f);
    }
    if (((TStack_d8.CurrentBitIndex == uVar23) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pFVar10 == pFVar2))
    break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&pUVar8->CVarsNeedingUpdate,(FString *)local_13c,
               (bool *)(*(longlong *)&pFVar10->ValuesByCVar +
                       (longlong)TStack_d8.CurrentBitIndex * 0x28));
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_80);
  return;
}

// OnInputRemoved @ 1468c0a60

void __thiscall
UMovieSceneCVarTrackInstance::OnInputRemoved
          (UMovieSceneCVarTrackInstance *this,FMovieSceneTrackInstanceInput *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UMovieSceneCVarSection *pUVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar6 = 1;
  pUVar8 = CastChecked<UMovieSceneCVarSection,UMovieSceneSection>(&param_1->Section,NullChecked);
  iVar12 = 0;
  iVar14 = 0;
  puVar1 = &(pUVar8->ConsoleVariables).ValuesByCVar.field_0x10;
  iVar3 = *(int *)&(pUVar8->ConsoleVariables).ValuesByCVar.field_0x28;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(pUVar8->ConsoleVariables).ValuesByCVar.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1468c0b1d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar7 = local_res18 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1468c0b1d:
  uVar11 = *(uint *)&(pUVar8->ConsoleVariables).ValuesByCVar.field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(pUVar8->ConsoleVariables).ValuesByCVar.field_0x8 -
                       *(int *)&(pUVar8->ConsoleVariables).ValuesByCVar.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(pUVar8->ConsoleVariables).ValuesByCVar.field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(pUVar8->ConsoleVariables).ValuesByCVar.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1468c0c20;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_1468c0c20:
  while( true ) {
    if (*(int *)&(pUVar8->ConsoleVariables).ValuesByCVar.field_0x8 -
        *(int *)&(pUVar8->ConsoleVariables).ValuesByCVar.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&this->CVarsNeedingUpdate,(FString *)&stack0x00000020,
               (bool *)(*(longlong *)&(pUVar8->ConsoleVariables).ValuesByCVar +
                       (longlong)TStack_60.CurrentBitIndex * 0x28));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// StaticRegisterNativesUMovieSceneCVarTrackInstance @ 1468cff80

void __cdecl UMovieSceneCVarTrackInstance::StaticRegisterNativesUMovieSceneCVarTrackInstance(void)

{
  return;
}

