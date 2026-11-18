// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 10

// StaticClass @ 146536340

UClass * __cdecl UAudioGenerator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"AudioGenerator",
               &Z_Registration_Info_UClass_UAudioGenerator.InnerSingleton,
               StaticRegisterNativesUAudioGenerator,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioGenerator>,InternalVTableHelperCtorCaller<UAudioGenerator>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGenerator.InnerSingleton;
}

// UAudioGenerator @ 14653e6b0

UAudioGenerator * __thiscall
UAudioGenerator::UAudioGenerator(UAudioGenerator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioGenerator__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CritSect,4000);
  *(undefined8 *)&this->OnGeneratedMap = 0;
  *(undefined8 *)&(this->OnGeneratedMap).field_0x8 = 0;
  *(undefined8 *)&(this->OnGeneratedMap).field_0x20 = 0;
  *(undefined4 *)&(this->OnGeneratedMap).field_0x28 = 0;
  *(undefined4 *)&(this->OnGeneratedMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnGeneratedMap).field_0x34 = 0;
  *(undefined4 *)&(this->OnGeneratedMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OnGeneratedMap).field_0x40 = 0;
  *(undefined4 *)&(this->OnGeneratedMap).field_0x48 = 0;
  return this;
}

// UAudioGenerator @ 14653e730

UAudioGenerator * __thiscall UAudioGenerator::UAudioGenerator(UAudioGenerator *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UAudioGenerator__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CritSect,4000);
  *(undefined8 *)&this->OnGeneratedMap = 0;
  *(undefined8 *)&(this->OnGeneratedMap).field_0x8 = 0;
  *(undefined8 *)&(this->OnGeneratedMap).field_0x20 = 0;
  *(undefined4 *)&(this->OnGeneratedMap).field_0x28 = 0;
  *(undefined4 *)&(this->OnGeneratedMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnGeneratedMap).field_0x34 = 0;
  *(undefined4 *)&(this->OnGeneratedMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OnGeneratedMap).field_0x40 = 0;
  *(undefined4 *)&(this->OnGeneratedMap).field_0x48 = 0;
  return this;
}

// ~UAudioGenerator @ 146541310

void __thiscall UAudioGenerator::~UAudioGenerator(UAudioGenerator *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAudioGenerator__6B_;
  *(undefined4 *)&(this->OnGeneratedMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnGeneratedMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(float_const_*,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(float_const_*,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(float_const_*,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnGeneratedMap);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CritSect);
  UObject::~UObject((UObject *)this);
  return;
}

// AddGeneratorDelegate @ 146546020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAudioGeneratorHandle __thiscall
UAudioGenerator::AddGeneratorDelegate
          (UAudioGenerator *this,TFunction<void___cdecl(float_const_*,int)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  longlong *in_R8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined4 *local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  lpCriticalSection = &this->CritSect;
  *(int *)param_1 = ::Id;
  ::Id = ::Id + 1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_38 = *(undefined4 *)param_1;
    local_30 = &local_38;
    TSet<TTuple<unsigned_int,TFunction<void___cdecl(float_const_*,int)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(float_const_*,int)>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_&&,TFunction<void___cdecl(float_const_*,int)>_&&>_>
              ((TSet<TTuple<unsigned_int,TFunction<void___cdecl(float_const_*,int)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(float_const_*,int)>,0>,FDefaultSetAllocator>
                *)&this->OnGeneratedMap,
               (TPairInitializer<unsigned_int_&&,TFunction<void___cdecl(float_const_*,int)>_&&> *)
               local_34,(bool *)(local_34 + 4));
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*in_R8 != 0) {
      plVar1 = in_R8 + 2;
      if ((longlong *)in_R8[5] != (longlong *)0x0) {
        plVar1 = (longlong *)in_R8[5];
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    return (FAudioGeneratorHandle)(int)param_1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetPrivateStaticClass @ 14655a000

UClass * __cdecl UAudioGenerator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGenerator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"AudioGenerator",
               &Z_Registration_Info_UClass_UAudioGenerator.InnerSingleton,
               StaticRegisterNativesUAudioGenerator,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAudioGenerator>,InternalVTableHelperCtorCaller<UAudioGenerator>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGenerator.InnerSingleton;
}

// Init @ 14655e1c0

void __thiscall UAudioGenerator::Init(UAudioGenerator *this,int param_1,int param_2)

{
  this->SampleRate = param_1;
  this->NumChannels = param_2;
  return;
}

// OnGeneratedAudio @ 146563be0

void __thiscall UAudioGenerator::OnGeneratedAudio(UAudioGenerator *this,float *param_1,int param_2)

{
  undefined1 *puVar1;
  TMap<unsigned_int,TFunction<void___cdecl(float_const_*,int)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(float_const_*,int)>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  float *pfVar6;
  TMap<unsigned_int,TFunction<void___cdecl(float_const_*,int)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(float_const_*,int)>,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  float *local_res10;
  int local_res18;
  int local_res20 [2];
  undefined4 uStack_9c;
  float *local_90;
  LPCRITICAL_SECTION local_88;
  TMap<unsigned_int,TFunction<void___cdecl(float_const_*,int)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(float_const_*,int)>,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  local_88 = (LPCRITICAL_SECTION)&this->CritSect;
  local_res10 = param_1;
  local_res18 = param_2;
  if (local_88 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_88);
  iVar15 = 0;
  puVar1 = &(this->OnGeneratedMap).field_0x10;
  iVar4 = *(int *)&(this->OnGeneratedMap).field_0x28;
  pTVar2 = &this->OnGeneratedMap;
  uVar9 = 1;
  iVar17 = 0;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->OnGeneratedMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_146563cae;
      uVar14 = puVar18[lVar12 + 1];
    }
    uVar9 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = iVar17 + -1 + (int)lVar12;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_146563cae:
  uVar14 = *(uint *)&(this->OnGeneratedMap).field_0x28;
  uVar19 = uVar14 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar9,iVar15);
  TStack_78.CurrentBitIndex = iVar10;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_78._28_4_ = iVar10;
  TStack_78.BaseBitIndex = iVar17;
  uStack_58 = CONCAT44(uStack_9c,
                       *(int *)&(this->OnGeneratedMap).field_0x8 -
                       *(int *)&(this->OnGeneratedMap).field_0x34);
  local_80 = pTVar2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar4 = local_res18;
  pfVar6 = local_res10;
  uVar9 = *(uint *)&(this->OnGeneratedMap).field_0x28;
  if (uVar14 != uVar9) {
    puVar16 = *(undefined1 **)&(this->OnGeneratedMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_146563dc0;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar19;
    if ((int)uVar9 < (int)uVar14) {
      uVar14 = uVar9;
    }
  }
LAB_146563dc0:
  while( true ) {
    pTVar7 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TFunction<void___cdecl(float_const_*,int)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar14) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar12 = *(longlong *)pTVar7 + (longlong)TStack_78.CurrentBitIndex * 0x50;
    local_res20[0] = iVar4;
    local_90 = pfVar6;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar12 + 0x10));
    pcVar5 = *(code **)(lVar12 + 0x10);
    plVar13 = (longlong *)(lVar12 + 0x20);
    if (*(longlong **)(lVar12 + 0x38) != (longlong *)0x0) {
      plVar13 = *(longlong **)(lVar12 + 0x38);
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar5)(uVar11,&local_90,local_res20);
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
                    /* WARNING: Could not recover jumptable at 0x000146563e7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(local_88);
  return;
}

// RemoveGeneratorDelegate @ 14656d4e0

void __thiscall
UAudioGenerator::RemoveGeneratorDelegate(UAudioGenerator *this,FAudioGeneratorHandle param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint local_res8 [2];
  
  lpCriticalSection = &this->CritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = param_1.Id;
    if (*(int *)&(this->OnGeneratedMap).field_0x8 != *(int *)&(this->OnGeneratedMap).field_0x34) {
      TSet<TTuple<unsigned_int,TFunction<void___cdecl(float_const_*,int)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(float_const_*,int)>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,TFunction<void___cdecl(float_const_*,int)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(float_const_*,int)>,0>,FDefaultSetAllocator>
                  *)&this->OnGeneratedMap,param_1.Id,local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x00014656d534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUAudioGenerator @ 1465778b0

void __cdecl UAudioGenerator::StaticRegisterNativesUAudioGenerator(void)

{
  return;
}

