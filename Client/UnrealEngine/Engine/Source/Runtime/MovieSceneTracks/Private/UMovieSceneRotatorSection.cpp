// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 146728260

UClass * __cdecl UMovieSceneRotatorSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneRotatorSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneRotatorSection",
               &Z_Registration_Info_UClass_UMovieSceneRotatorSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneRotatorSection,0x4a8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneRotatorSection>,
               InternalVTableHelperCtorCaller<UMovieSceneRotatorSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneRotatorSection.InnerSingleton;
}

// UMovieSceneRotatorSection @ 146766270

UMovieSceneRotatorSection * __thiscall
UMovieSceneRotatorSection::UMovieSceneRotatorSection
          (UMovieSceneRotatorSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->Rotation[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0].PreInfinityExtrap = '\x04';
  this->Rotation[0].PostInfinityExtrap = '\x04';
  this->Rotation[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[0].Times.ArrayNum = 0;
  this->Rotation[0].Times.ArrayMax = 0;
  this->Rotation[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[0].Values.ArrayNum = 0;
  this->Rotation[0].Values.ArrayMax = 0;
  this->Rotation[0].DefaultValue = 0.0;
  this->Rotation[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[0].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x80 = 0;
  this->Rotation[0].TickResolution.Numerator = 60000;
  this->Rotation[0].TickResolution.Denominator = 1;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[1].PreInfinityExtrap = '\x04';
  this->Rotation[1].PostInfinityExtrap = '\x04';
  this->Rotation[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[1].Times.ArrayNum = 0;
  this->Rotation[1].Times.ArrayMax = 0;
  this->Rotation[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[1].Values.ArrayNum = 0;
  this->Rotation[1].Values.ArrayMax = 0;
  this->Rotation[1].DefaultValue = 0.0;
  this->Rotation[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[1].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x80 = 0;
  this->Rotation[1].TickResolution.Numerator = 60000;
  this->Rotation[1].TickResolution.Denominator = 1;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[2].PreInfinityExtrap = '\x04';
  this->Rotation[2].PostInfinityExtrap = '\x04';
  this->Rotation[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[2].Times.ArrayNum = 0;
  this->Rotation[2].Times.ArrayMax = 0;
  this->Rotation[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[2].Values.ArrayNum = 0;
  this->Rotation[2].Values.ArrayMax = 0;
  this->Rotation[2].DefaultValue = 0.0;
  this->Rotation[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[2].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x80 = 0;
  this->Rotation[2].TickResolution.Numerator = 60000;
  this->Rotation[2].TickResolution.Denominator = 1;
  return this;
}

// UMovieSceneRotatorSection @ 146766620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UMovieSceneRotatorSection * __thiscall
UMovieSceneRotatorSection::UMovieSceneRotatorSection
          (UMovieSceneRotatorSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  UMovieSceneRotatorSection *pUVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 auStack_98 [32];
  TReferenceControllerBase<1> *local_78;
  FSharedReferencer<1> local_70;
  FMovieSceneChannelProxyData local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->Rotation[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0].PreInfinityExtrap = '\x04';
  this->Rotation[0].PostInfinityExtrap = '\x04';
  this->Rotation[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[0].Times.ArrayNum = 0;
  this->Rotation[0].Times.ArrayMax = 0;
  this->Rotation[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[0].Values.ArrayNum = 0;
  this->Rotation[0].Values.ArrayMax = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x80 = 0;
  this->Rotation[0].TickResolution.Numerator = 60000;
  this->Rotation[0].TickResolution.Denominator = 1;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[1].PreInfinityExtrap = '\x04';
  this->Rotation[1].PostInfinityExtrap = '\x04';
  this->Rotation[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[1].Times.ArrayNum = 0;
  this->Rotation[1].Times.ArrayMax = 0;
  this->Rotation[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[1].Values.ArrayNum = 0;
  this->Rotation[1].Values.ArrayMax = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x80 = 0;
  this->Rotation[1].TickResolution.Numerator = 60000;
  this->Rotation[1].TickResolution.Denominator = 1;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[2].PreInfinityExtrap = '\x04';
  this->Rotation[2].PostInfinityExtrap = '\x04';
  this->Rotation[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[2].Times.ArrayNum = 0;
  this->Rotation[2].Times.ArrayMax = 0;
  this->Rotation[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[2].Values.ArrayNum = 0;
  this->Rotation[2].Values.ArrayMax = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x80 = 0;
  this->Rotation[2].TickResolution.Numerator = 60000;
  this->Rotation[2].TickResolution.Denominator = 1;
  *(undefined2 *)&this->_padding_ = 0x201;
  *(undefined2 *)&this->_padding_ = 0x101;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->Rotation[0].bHasDefaultValue = true;
  this->Rotation[0].DefaultValue = 0.0;
  this->Rotation[1].bHasDefaultValue = true;
  this->Rotation[1].DefaultValue = 0.0;
  this->Rotation[2].bHasDefaultValue = true;
  this->Rotation[2].DefaultValue = 0.0;
  local_68.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_68.Entries.ArrayNum = 0;
  local_68.Entries.ArrayMax = 1;
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_68,this->Rotation);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_68,this->Rotation + 1);
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_68,this->Rotation + 2);
  pTVar6 = ::operator_new(0x68);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    if (local_68.Entries.AllocatorInstance.SecondaryData ==
        (ForElementType<FMovieSceneChannelEntry>)0x0) {
      memmove(pTVar6 + 4,&local_68,0x18);
    }
    if (*(void **)&pTVar6[5].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar6[5].SharedReferenceCount);
    }
    pTVar10 = pTVar6 + 1;
    *(ForElementType<FMovieSceneChannelEntry> *)&pTVar6[5].SharedReferenceCount =
         local_68.Entries.AllocatorInstance.SecondaryData;
    local_68.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
    *(int *)&pTVar6[6]._padding_ = local_68.Entries.ArrayNum;
    *(int *)((longlong)&pTVar6[6]._padding_ + 4) = local_68.Entries.ArrayMax;
    local_68.Entries.ArrayNum = 0;
    local_68.Entries.ArrayMax = 1;
    pTVar9 = pTVar6;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UMovieSceneRotatorSection *)(*pcVar4)();
        return pUVar7;
      }
      goto LAB_146766b59;
    }
  }
  if (((pTVar10->_padding_ == 0) || (*(longlong *)&pTVar10->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar10->SharedReferenceCount + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10->_padding_ = (longlong)pTVar10;
    if (pTVar9 != *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar10->SharedReferenceCount;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar10->SharedReferenceCount = pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_146766b59:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = pTVar10;
  local_70.ReferenceController = pTVar9;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_78) {
    this->_padding_ = (longlong)pTVar10;
    local_78 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)&local_68;
  if (local_68.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = local_68.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar8,local_68.Entries.ArrayNum);
  if (local_68.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_68.Entries.AllocatorInstance.SecondaryData);
  }
  return this;
}

// ~UMovieSceneRotatorSection @ 14676ac00

void __thiscall
UMovieSceneRotatorSection::~UMovieSceneRotatorSection(UMovieSceneRotatorSection *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Rotation[2].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Rotation[2].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Rotation[2].KeyHandles)
  ;
  pFVar2 = this->Rotation[2].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Rotation[2].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Rotation + 2));
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Rotation[1].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Rotation[1].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Rotation[1].KeyHandles)
  ;
  pFVar2 = this->Rotation[1].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Rotation[1].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Rotation + 1));
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Rotation[0].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Rotation[0].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Rotation[0].KeyHandles)
  ;
  pFVar2 = this->Rotation[0].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Rotation[0].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)this->Rotation);
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146799520

UClass * __cdecl UMovieSceneRotatorSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneRotatorSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneRotatorSection",
               &Z_Registration_Info_UClass_UMovieSceneRotatorSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneRotatorSection,0x4a8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneRotatorSection>,
               InternalVTableHelperCtorCaller<UMovieSceneRotatorSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneRotatorSection.InnerSingleton;
}

// ImportEntityImpl @ 1467a12e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneRotatorSection::ImportEntityImpl
          (UMovieSceneRotatorSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FBuiltInComponentTypes *pFVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  undefined **local_b8;
  ushort local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  undefined1 local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined1 local_80;
  undefined4 local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined1 local_60;
  FComponentTypeID local_58;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_20;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  
  if ((((((int)this->_padding_ != 0) || ((char)this->_padding_ == '\x01')) ||
       (*(int *)&this->Rotation[0].bHasDefaultValue != 0)) ||
      ((this->Rotation[0].KeyHandles.field_0x18 == '\x01' ||
       (*(int *)&this->Rotation[1].bHasDefaultValue != 0)))) ||
     (this->Rotation[1].KeyHandles.field_0x18 == '\x01')) {
    pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
    pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_b0 = (pFVar2->Rotator).PropertyTag.Value;
    if (((int)this->_padding_ == 0) && ((char)this->_padding_ != '\x01')) {
      uStack_4e = 0;
    }
    else {
      uStack_4e = 1;
    }
    local_a0 = &this->_padding_;
    local_50 = pFVar1->DoubleChannel[0];
    if ((*(int *)&this->Rotation[0].bHasDefaultValue == 0) &&
       (this->Rotation[0].KeyHandles.field_0x18 != '\x01')) {
      uStack_36 = 0;
    }
    else {
      uStack_36 = 1;
    }
    local_88 = &this->Rotation[0]._padding_;
    local_38 = pFVar1->DoubleChannel[1];
    if ((*(int *)&this->Rotation[1].bHasDefaultValue == 0) &&
       (this->Rotation[1].KeyHandles.field_0x18 != '\x01')) {
      uStack_1e = 0;
    }
    else {
      uStack_1e = 1;
    }
    local_a8 = _local_50;
    local_90 = _local_38;
    local_20 = pFVar1->DoubleChannel[2];
    local_78 = _local_20;
    local_70 = &this->Rotation[1]._padding_;
    local_b8 = &
               ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423__MovieScene_UE__6B_
    ;
    local_98 = 1;
    local_80 = 1;
    local_68 = 1;
    local_60 = 0;
    local_58.Value = local_b0;
    UE::MovieScene::
    TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
    ::Commit((TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)&local_b8,(UMovieSceneSection *)&this[-1].Rotation[2]._padding_,param_2,param_3);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1ae0

bool __thiscall
UMovieSceneRotatorSection::PopulateEvaluationFieldImpl
          (UMovieSceneRotatorSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
            ((UMovieSceneSection *)&this[-1].Rotation[2]._padding_,param_1,param_2,param_3);
  return true;
}

// StaticRegisterNativesUMovieSceneRotatorSection @ 1467c2a40

void __cdecl UMovieSceneRotatorSection::StaticRegisterNativesUMovieSceneRotatorSection(void)

{
  return;
}

// _getUObject @ 1467ca860

UObject * __thiscall UMovieSceneRotatorSection::_getUObject(UMovieSceneRotatorSection *this)

{
  return (UObject *)&this[-1].Rotation[2]._padding_;
}

