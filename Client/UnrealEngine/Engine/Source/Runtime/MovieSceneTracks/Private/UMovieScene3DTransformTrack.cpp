// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 146881f20

UClass * __cdecl UMovieScene3DTransformTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DTransformTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DTransformTrack",
               &Z_Registration_Info_UClass_UMovieScene3DTransformTrack.InnerSingleton,
               StaticRegisterNativesUMovieScene3DTransformTrack,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene3DTransformTrack>,
               InternalVTableHelperCtorCaller<UMovieScene3DTransformTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DTransformTrack.InnerSingleton;
}

// UMovieScene3DTransformTrack @ 14689c9e0

UMovieScene3DTransformTrack * __thiscall
UMovieScene3DTransformTrack::UMovieScene3DTransformTrack
          (UMovieScene3DTransformTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieScene3DTransformTrack__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BlenderSystemClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UMovieScene3DTransformTrack @ 14689ca60

UMovieScene3DTransformTrack * __thiscall
UMovieScene3DTransformTrack::UMovieScene3DTransformTrack
          (UMovieScene3DTransformTrack *this,FObjectInitializer *param_1)

{
  undefined1 uVar1;
  void *pvVar2;
  FMovieSceneBlendTypeField FVar3;
  FString *pFVar4;
  undefined7 extraout_var;
  FString local_18;
  
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x11;
  this->_padding_ = (longlong)&___7UMovieScene3DTransformTrack__6B_;
  pvVar2 = ThreadLocalStoragePointer;
  (this->BlenderSystemClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Transform,"Transform");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar4 = ::FName::ToString(&::Transform,&local_18);
  UMovieScenePropertyTrack::SetPropertyNameAndPath
            ((UMovieScenePropertyTrack *)this,::Transform,pFVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar3 = FMovieSceneBlendTypeField::All();
  uVar1 = *(undefined1 *)CONCAT71(extraout_var,FVar3.BlendTypeField);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x11;
  *(undefined1 *)&this->_padding_ = uVar1;
  return this;
}

// ~UMovieScene3DTransformTrack @ 1468a0290

void __thiscall
UMovieScene3DTransformTrack::~UMovieScene3DTransformTrack(UMovieScene3DTransformTrack *this)

{
  this->_padding_ = (longlong)&___7IMovieSceneBlenderSystemSupport__6B_;
  this->_padding_ =
       (longlong)&UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// CreateNewSection @ 1468ad870

UMovieSceneSection * __thiscall
UMovieScene3DTransformTrack::CreateNewSection(UMovieScene3DTransformTrack *this)

{
  UMovieScene3DTransformSection *pUVar1;
  
  pUVar1 = NewObject<UMovieScene3DTransformSection>
                     ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return (UMovieSceneSection *)pUVar1;
}

// GetBlenderSystem @ 1468b59a0

TSubclassOf<UMovieSceneBlenderSystem> __thiscall
UMovieScene3DTransformTrack::GetBlenderSystem(UMovieScene3DTransformTrack *this)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  TObjectPtr<UClass> in_RDX;
  
  lVar2 = this->_padding_;
  if ((lVar2 != 0) &&
     (pUVar4 = Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (pUVar4 = (UClass *)this->_padding_, pUVar4 != (UClass *)0x0)) {
      *(UClass **)in_RDX.field0_0x0 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        return (TSubclassOf<UMovieSceneBlenderSystem>)in_RDX.field0_0x0.DebugPtr;
      }
      goto LAB_1468b5a1c;
    }
  }
  pUVar4 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar4;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    return (TSubclassOf<UMovieSceneBlenderSystem>)in_RDX.field0_0x0.DebugPtr;
  }
  if (pUVar4 == (UClass *)0x0) {
    return (TSubclassOf<UMovieSceneBlenderSystem>)in_RDX.field0_0x0.DebugPtr;
  }
LAB_1468b5a1c:
  UE::GC::MarkAsReachable((UObject *)pUVar4);
  return (TSubclassOf<UMovieSceneBlenderSystem>)in_RDX.field0_0x0;
}

// GetPrivateStaticClass @ 1468b6310

UClass * __cdecl UMovieScene3DTransformTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DTransformTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DTransformTrack",
               &Z_Registration_Info_UClass_UMovieScene3DTransformTrack.InnerSingleton,
               StaticRegisterNativesUMovieScene3DTransformTrack,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene3DTransformTrack>,
               InternalVTableHelperCtorCaller<UMovieScene3DTransformTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DTransformTrack.InnerSingleton;
}

// GetSupportedBlenderSystems @ 1468b98b0

void __thiscall
UMovieScene3DTransformTrack::GetSupportedBlenderSystems
          (UMovieScene3DTransformTrack *this,
          TArray<TSubclassOf<UMovieSceneBlenderSystem>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *local_18;
  UClass *local_10;
  
  local_18 = Z_Construct_UClass_UMovieSceneQuaternionBlenderSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(UClass **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18);
  }
  local_10 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_10);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 <= (FScriptContainerElement *)&local_10) {
    if ((FScriptContainerElement *)&local_10 < pFVar1 + (longlong)param_1->ArrayMax * 8) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(UClass **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_10);
  }
  return;
}

// SetBlenderSystem @ 1468cde30

void __thiscall
UMovieScene3DTransformTrack::SetBlenderSystem
          (UMovieScene3DTransformTrack *this,TSubclassOf<UMovieSceneBlenderSystem> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_1468cde82;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468cde82:
  pUVar5 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  if (pUVar4 == pUVar5) {
    *(undefined8 *)param_1.Class.field0_0x0 = 0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (*(UObject **)param_1.Class.field0_0x0 == (UObject *)0x0) {
      this->_padding_ = 0;
      return;
    }
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  this->_padding_ = *(longlong *)param_1.Class.field0_0x0;
  return;
}

// StaticRegisterNativesUMovieScene3DTransformTrack @ 1468cff20

void __cdecl UMovieScene3DTransformTrack::StaticRegisterNativesUMovieScene3DTransformTrack(void)

{
  return;
}

// SupportsType @ 1468d0dd0

bool __thiscall
UMovieScene3DTransformTrack::SupportsType
          (UMovieScene3DTransformTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_1468d0e1a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d0e1a:
  pUVar5 = Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 1468d5530

UObject * __thiscall UMovieScene3DTransformTrack::_getUObject(UMovieScene3DTransformTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

