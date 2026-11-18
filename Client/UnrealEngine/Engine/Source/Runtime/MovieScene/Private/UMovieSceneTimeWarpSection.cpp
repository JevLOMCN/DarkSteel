// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// StaticClass @ 146253760

UClass * __cdecl UMovieSceneTimeWarpSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpSection",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpSection,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTimeWarpSection>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpSection.InnerSingleton;
}

// UMovieSceneTimeWarpSection @ 14629af70

UMovieSceneTimeWarpSection * __thiscall
UMovieSceneTimeWarpSection::UMovieSceneTimeWarpSection
          (UMovieSceneTimeWarpSection *this,FVTableHelper *param_1)

{
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneTimeWarpSection__6B_;
  (this->TimeWarp).Variant.WeakCustomGetter.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = 0;
  (this->TimeWarp).Variant.Data[0] = '\0';
  (this->TimeWarp).Variant.Data[1] = '\0';
  (this->TimeWarp).Variant.Data[2] = '\0';
  (this->TimeWarp).Variant.Data[3] = '\0';
  (this->TimeWarp).Variant.Data[4] = '\0';
  (this->TimeWarp).Variant.Data[5] = '\0';
  (this->TimeWarp).Variant.Data[6] = 0xf0;
  (this->TimeWarp).Variant.Data[7] = '?';
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  (this->TimeWarp).Variant.WeakCustomGetter.WeakPtr = local_res8[0];
  return this;
}

// UMovieSceneTimeWarpSection @ 14629afe0

UMovieSceneTimeWarpSection * __thiscall
UMovieSceneTimeWarpSection::UMovieSceneTimeWarpSection
          (UMovieSceneTimeWarpSection *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  UMovieSceneTimeWarpSection *pUVar4;
  FWeakObjectPtr local_res8;
  uint local_res18;
  uint local_res20;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  bVar3 = false;
  this->_padding_ = (longlong)&___7UMovieSceneTimeWarpSection__6B_;
  (this->TimeWarp).Variant.WeakCustomGetter.WeakPtr = (FWeakObjectPtr)0x0;
  (this->TimeWarp).Variant.Data[0] = '\0';
  (this->TimeWarp).Variant.Data[1] = '\0';
  (this->TimeWarp).Variant.Data[2] = '\0';
  (this->TimeWarp).Variant.Data[3] = '\0';
  (this->TimeWarp).Variant.Data[4] = '\0';
  (this->TimeWarp).Variant.Data[5] = '\0';
  (this->TimeWarp).Variant.Data[6] = 0xf0;
  (this->TimeWarp).Variant.Data[7] = '?';
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_28 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_28);
  (this->TimeWarp).Variant.WeakCustomGetter.WeakPtr = local_res8;
  local_res18 = CONCAT31(local_res18._1_3_,2);
  local_20 = (ulonglong)local_res18;
  local_res20 = CONCAT31(local_res20._1_3_,2);
  uStack_18 = (ulonglong)local_res20;
  *(undefined1 *)&this->_padding_ = 1;
  if (((char)this->_padding_ != '\x02') || ((char)this->_padding_ != '\x02')) {
    bVar3 = true;
  }
  bVar2 = UMovieSceneSection::IsReadOnly((UMovieSceneSection *)this);
  if (bVar2) {
    return this;
  }
  if (!bVar3) {
    return this;
  }
  bVar3 = true;
  if (((uint)this->_padding_ >> 9 & 1) == 0) {
    bVar3 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  }
  if (((char)local_20 != '\x02') && ((char)uStack_18 != '\x02')) {
    if (uStack_18._4_4_ < local_20._4_4_) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8526041700726996656>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSection.h"
                         ,0x150,
                         "NewRange.GetLowerBound().IsOpen() || NewRange.GetUpperBound().IsOpen() || NewRange.GetLowerBoundValue() <= NewRange.GetUpperBoundValue()"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UMovieSceneTimeWarpSection *)(*pcVar1)();
        return pUVar4;
      }
      bVar2 = false;
      goto LAB_14629b0fc;
    }
  }
  bVar2 = true;
LAB_14629b0fc:
  if ((bVar3 != false) && (bVar2)) {
    this->_padding_ = local_20;
    this->_padding_ = uStack_18;
    return this;
  }
  return this;
}

// ~UMovieSceneTimeWarpSection @ 14629bf40

void __thiscall
UMovieSceneTimeWarpSection::~UMovieSceneTimeWarpSection(UMovieSceneTimeWarpSection *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneTimeWarpSection__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// CacheChannelProxy @ 1462a6110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EMovieSceneChannelProxyType __thiscall
UMovieSceneTimeWarpSection::CacheChannelProxy(UMovieSceneTimeWarpSection *this)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  EMovieSceneChannelProxyType EVar7;
  UMovieSceneTimeWarpGetter *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  FMovieSceneChannelEntry *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStack_88 [32];
  TReferenceControllerBase<1> *local_68;
  FSharedReferencer<1> local_60;
  FMovieSceneChannelEntry local_58;
  FMovieSceneChannelEntry *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_40 = (FMovieSceneChannelEntry *)0x0;
  local_38 = 0;
  local_34 = 1;
  uVar3 = *(ulonglong *)(this->TimeWarp).Variant.Data;
  if (((uVar3 & 0xfff8000000000000) == 0xfff8000000000000) && ((uVar3 >> 0x30 & 7) == 0)) {
    pUVar8 = FMovieSceneTimeWarpVariant::AsCustom(&this->TimeWarp);
    if (pUVar8 != (UMovieSceneTimeWarpGetter *)0x0) {
      (**(code **)(pUVar8->_padding_ + 0x2f0))(pUVar8,&local_58,0);
    }
  }
  pTVar9 = ::operator_new(0x68);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar9[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[5].WeakReferenceCount = (atomic<int>)0x0;
    if (local_40 == (FMovieSceneChannelEntry *)0x0) {
      memmove(pTVar9 + 4,&local_58,0x18);
    }
    if (*(void **)&pTVar9[5].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar9[5].SharedReferenceCount);
    }
    pTVar12 = pTVar9 + 1;
    *(FMovieSceneChannelEntry **)&pTVar9[5].SharedReferenceCount = local_40;
    local_40 = (FMovieSceneChannelEntry *)0x0;
    *(int *)&pTVar9[6]._padding_ = local_38;
    *(undefined4 *)((longlong)&pTVar9[6]._padding_ + 4) = local_34;
    local_38 = 0;
    local_34 = 1;
    pTVar11 = pTVar9;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
      goto LAB_1462a62e8;
    }
  }
  if (((pTVar12->_padding_ == 0) || (*(longlong *)&pTVar12->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar12->SharedReferenceCount + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar12->_padding_ = (longlong)pTVar12;
    if (pTVar11 != *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pTVar12->SharedReferenceCount;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount = pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_1462a62e8:
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = pTVar12;
  local_60.ReferenceController = pTVar11;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_68) {
    this->_padding_ = (longlong)pTVar12;
    local_68 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pFVar10 = &local_58;
  if (local_40 != (FMovieSceneChannelEntry *)0x0) {
    pFVar10 = local_40;
  }
  DestructItems<FMovieSceneChannelEntry,int>(pFVar10,local_38);
  if (local_40 != (FMovieSceneChannelEntry *)0x0) {
    FMemory::Free(local_40);
  }
  return Dynamic;
}

// GenerateTransform @ 1462adb40

FMovieSceneNestedSequenceTransform * __thiscall
UMovieSceneTimeWarpSection::GenerateTransform
          (UMovieSceneTimeWarpSection *this,
          FMovieSceneNestedSequenceTransform *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  FWeakObjectPtr FVar3;
  code *pcVar4;
  FFrameTime FVar5;
  bool bVar6;
  FMovieSceneNestedSequenceTransform *pFVar7;
  uint uVar8;
  uint uStack_24;
  
  lVar1 = this->_padding_;
  if ((char)lVar1 == '\x02') {
    uStack_24 = 0;
  }
  else {
    uVar8 = (uint)lVar1 & 0xff;
    uStack_24 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((char)lVar1 == '\x01') {
      if ((uVar8 == 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FMovieSceneNestedSequenceTransform *)(*pcVar4)();
        return pFVar7;
      }
    }
    else {
      if ((uVar8 == 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FMovieSceneNestedSequenceTransform *)(*pcVar4)();
        return pFVar7;
      }
      uStack_24 = uStack_24 + 1;
    }
  }
  uVar2 = *(undefined8 *)(this->TimeWarp).Variant.Data;
  FVar3 = (this->TimeWarp).Variant.WeakCustomGetter.WeakPtr;
  FVar5.SubFrame = 0.0;
  FVar5.FrameNumber.Value = uStack_24;
  __return_storage_ptr__->Offset = FVar5;
  *(undefined8 *)(__return_storage_ptr__->TimeScale).Variant.Data = uVar2;
  (__return_storage_ptr__->TimeScale).Variant.WeakCustomGetter.WeakPtr = FVar3;
  (__return_storage_ptr__->Warping).Start = 0;
  (__return_storage_ptr__->Warping).End = 0;
  FMovieSceneNumericVariant::MakeWeakUnsafe((FMovieSceneNumericVariant *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1462afca0

UClass * __cdecl UMovieSceneTimeWarpSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpSection",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpSection,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTimeWarpSection>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpSection.InnerSingleton;
}

// GetTimeWarp @ 1462b0ac0

FMovieSceneTimeWarpVariant * __thiscall
UMovieSceneTimeWarpSection::GetTimeWarp(UMovieSceneTimeWarpSection *this)

{
  return &this->TimeWarp;
}

// StaticRegisterNativesUMovieSceneTimeWarpSection @ 1462bde80

void __cdecl UMovieSceneTimeWarpSection::StaticRegisterNativesUMovieSceneTimeWarpSection(void)

{
  return;
}

