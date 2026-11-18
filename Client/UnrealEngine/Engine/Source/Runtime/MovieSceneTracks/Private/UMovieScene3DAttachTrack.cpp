// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 14687f520

UClass * __cdecl UMovieScene3DAttachTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DAttachTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DAttachTrack",
               &Z_Registration_Info_UClass_UMovieScene3DAttachTrack.InnerSingleton,
               StaticRegisterNativesUMovieScene3DAttachTrack,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieScene3DAttachTrack>,
               InternalVTableHelperCtorCaller<UMovieScene3DAttachTrack>,local_res8,
               UMovieScene3DConstraintTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DAttachTrack.InnerSingleton;
}

// UMovieScene3DAttachTrack @ 14689c800

UMovieScene3DAttachTrack * __thiscall
UMovieScene3DAttachTrack::UMovieScene3DAttachTrack
          (UMovieScene3DAttachTrack *this,FVTableHelper *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// UMovieScene3DAttachTrack @ 14689c850

UMovieScene3DAttachTrack * __thiscall
UMovieScene3DAttachTrack::UMovieScene3DAttachTrack
          (UMovieScene3DAttachTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// ~UMovieScene3DAttachTrack @ 1468a01a0

void __thiscall UMovieScene3DAttachTrack::~UMovieScene3DAttachTrack(UMovieScene3DAttachTrack *this)

{
  *(undefined ***)this =
       &UMovieScene3DConstraintTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScene3DConstraintTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x118 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x118);
  }
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  return;
}

// AddConstraint @ 1468a6110

UMovieSceneSection * __thiscall
UMovieScene3DAttachTrack::AddConstraint
          (UMovieScene3DAttachTrack *this,FFrameNumber param_1,int param_2,FName param_3,
          FName param_4,FMovieSceneObjectBindingID *param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  UMovieScene3DAttachSection *this_00;
  UMovieSceneSection *pUVar5;
  undefined1 *puVar6;
  UMovieScene3DAttachSection *local_28 [2];
  
  this_00 = NewObject<UMovieScene3DAttachSection>
                      ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  UMovieScene3DAttachSection::SetAttachTargetID(this_00,param_5);
  pcVar1 = *(code **)(this_00->_padding_ + 0x328);
  uVar2 = (**(code **)(*(longlong *)this + 800))(this);
  puVar6 = &this->field_0x118;
  (*pcVar1)(this_00,puVar6,param_1.Value,param_2,uVar2);
  this_00->AttachComponentName = param_4;
  this_00->AttachSocketName = param_3;
  local_28[0] = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if ((*(UMovieScene3DAttachSection ***)puVar6 <= local_28) &&
     (local_28 < *(UMovieScene3DAttachSection ***)puVar6 + *(int *)&this->field_0x124)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UMovieSceneSection *)(*pcVar1)();
      return pUVar5;
    }
  }
  iVar4 = *(int *)&this->field_0x120;
  if (iVar4 == *(int *)&this->field_0x124) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar6,(int *)&this->field_0x124);
  }
  *(int *)&this->field_0x120 = iVar4 + 1;
  *(UMovieScene3DAttachSection **)(*(longlong *)puVar6 + (longlong)iVar4 * 8) = local_28[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_28[0] != (UMovieScene3DAttachSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28[0]);
  }
  return (UMovieSceneSection *)this_00;
}

// CreateNewSection @ 1468ad710

UMovieSceneSection * __thiscall
UMovieScene3DAttachTrack::CreateNewSection(UMovieScene3DAttachTrack *this)

{
  UMovieScene3DAttachSection *pUVar1;
  
  pUVar1 = NewObject<UMovieScene3DAttachSection>
                     ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return (UMovieSceneSection *)pUVar1;
}

// GetPrivateStaticClass @ 1468b60d0

UClass * __cdecl UMovieScene3DAttachTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DAttachTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DAttachTrack",
               &Z_Registration_Info_UClass_UMovieScene3DAttachTrack.InnerSingleton,
               StaticRegisterNativesUMovieScene3DAttachTrack,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieScene3DAttachTrack>,
               InternalVTableHelperCtorCaller<UMovieScene3DAttachTrack>,local_res8,
               UMovieScene3DConstraintTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DAttachTrack.InnerSingleton;
}

// StaticRegisterNativesUMovieScene3DAttachTrack @ 1468cfef0

void __cdecl UMovieScene3DAttachTrack::StaticRegisterNativesUMovieScene3DAttachTrack(void)

{
  return;
}

// SupportsType @ 1468d0c80

bool __thiscall
UMovieScene3DAttachTrack::SupportsType
          (UMovieScene3DAttachTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d0cca;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d0cca:
  pUVar5 = Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister();
  return pUVar4 == pUVar5;
}

