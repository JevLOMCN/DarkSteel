// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 11

// StaticClass @ 14687f920

UClass * __cdecl UMovieScene3DPathTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DPathTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DPathTrack",
               &Z_Registration_Info_UClass_UMovieScene3DPathTrack.InnerSingleton,
               StaticRegisterNativesUMovieScene3DPathTrack,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieScene3DPathTrack>,
               InternalVTableHelperCtorCaller<UMovieScene3DPathTrack>,local_res8,
               UMovieScene3DConstraintTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DPathTrack.InnerSingleton;
}

// UMovieScene3DPathTrack @ 14689c940

UMovieScene3DPathTrack * __thiscall
UMovieScene3DPathTrack::UMovieScene3DPathTrack(UMovieScene3DPathTrack *this,FVTableHelper *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x128 = &___7UMovieScene3DPathTrack__6B_;
  return this;
}

// UMovieScene3DPathTrack @ 14689c990

UMovieScene3DPathTrack * __thiscall
UMovieScene3DPathTrack::UMovieScene3DPathTrack
          (UMovieScene3DPathTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(undefined ***)&this->field_0x128 = &___7UMovieScene3DPathTrack__6B_;
  return this;
}

// ~UMovieScene3DPathTrack @ 1468a0240

void __thiscall UMovieScene3DPathTrack::~UMovieScene3DPathTrack(UMovieScene3DPathTrack *this)

{
  *(undefined ***)&this->field_0x128 = &___7IMovieSceneTrackTemplateProducer__6B_;
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

// AddConstraint @ 1468a62c0

UMovieSceneSection * __thiscall
UMovieScene3DPathTrack::AddConstraint
          (UMovieScene3DPathTrack *this,FFrameNumber param_1,int param_2,FName param_3,FName param_4
          ,FMovieSceneObjectBindingID *param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  UMovieScene3DPathSection *this_00;
  UMovieSceneSection *pUVar5;
  undefined1 *puVar6;
  UMovieScene3DPathSection *local_28 [2];
  
  this_00 = NewObject<UMovieScene3DPathSection>
                      ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  UMovieScene3DPathSection::SetPathBindingID(this_00,param_5);
  pcVar1 = *(code **)(this_00->_padding_ + 0x328);
  uVar2 = (**(code **)(*(longlong *)this + 800))(this);
  puVar6 = &this->field_0x118;
  (*pcVar1)(this_00,puVar6,param_1.Value,param_2,uVar2);
  local_28[0] = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if ((*(UMovieScene3DPathSection ***)puVar6 <= local_28) &&
     (local_28 < *(UMovieScene3DPathSection ***)puVar6 + *(int *)&this->field_0x124)) {
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
  *(UMovieScene3DPathSection **)(*(longlong *)puVar6 + (longlong)iVar4 * 8) = local_28[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_28[0] != (UMovieScene3DPathSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28[0]);
  }
  return (UMovieSceneSection *)this_00;
}

// CreateNewSection @ 1468ad830

UMovieSceneSection * __thiscall
UMovieScene3DPathTrack::CreateNewSection(UMovieScene3DPathTrack *this)

{
  UMovieScene3DPathSection *pUVar1;
  
  pUVar1 = NewObject<UMovieScene3DPathSection>
                     ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return (UMovieSceneSection *)pUVar1;
}

// CreateTemplateForSection @ 1468af5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneEvalTemplatePtr * __thiscall
UMovieScene3DPathTrack::CreateTemplateForSection
          (UMovieScene3DPathTrack *this,FMovieSceneEvalTemplatePtr *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FMovieScene3DPathSectionTemplate *pFVar5;
  FMovieScene3DPathSectionTemplate *pFVar6;
  FMovieSceneEvalTemplatePtr *pFVar7;
  FMovieSceneEvalTemplatePtr *pFVar8;
  FString *pFVar9;
  FMovieScene3DPathSectionTemplate *this_00;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStack_1c8 [32];
  FString local_1a8;
  FString local_198;
  FString local_188;
  FMovieScene3DPathSectionTemplate local_178;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (param_1 == (UMovieSceneSection *)0x0) {
    pFVar9 = GetTypeName<UMovieScene3DPathSection>(&local_1a8);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar10);
  }
  pUVar4 = Z_Construct_UClass_UMovieScene3DPathSection_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar4->_padding_)) {
    pFVar5 = FMovieScene3DPathSectionTemplate::FMovieScene3DPathSectionTemplate
                       (&local_178,(UMovieScene3DPathSection *)param_1);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 & 0xfc;
    pFVar6 = FMemory::Malloc(0x168,8);
    __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 1;
    *(FMovieScene3DPathSectionTemplate **)__return_storage_ptr__ = pFVar6;
    this_00 = (FMovieScene3DPathSectionTemplate *)__return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      this_00 = pFVar6;
    }
    FMovieScene3DPathSectionTemplate::FMovieScene3DPathSectionTemplate(this_00,pFVar5);
    if ((__return_storage_ptr__->field_0x80 & 1) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvalTemplatePtr *)(*pcVar2)();
        return pFVar7;
      }
    }
    pFVar7 = __return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      pFVar7 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    if ((__return_storage_ptr__->field_0x80 & 1) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvalTemplatePtr *)(*pcVar2)();
        return pFVar7;
      }
    }
    pFVar8 = __return_storage_ptr__;
    if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
      pFVar8 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
    }
    if (pFVar7 != pFVar8) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FMovieSceneEvalTemplatePtr *)(*pcVar2)();
        return pFVar7;
      }
    }
    FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&local_178.TimingCurve);
    return __return_storage_ptr__;
  }
  pFVar9 = GetTypeName<UMovieScene3DPathSection>(&local_198);
  pwVar10 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  pFVar9 = GetFullNameForCastLogError<UMovieSceneSection_const_>(&local_188,param_1);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar10,pwVar11);
}

// GetPrivateStaticClass @ 1468b6250

UClass * __cdecl UMovieScene3DPathTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DPathTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DPathTrack",
               &Z_Registration_Info_UClass_UMovieScene3DPathTrack.InnerSingleton,
               StaticRegisterNativesUMovieScene3DPathTrack,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieScene3DPathTrack>,
               InternalVTableHelperCtorCaller<UMovieScene3DPathTrack>,local_res8,
               UMovieScene3DConstraintTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DPathTrack.InnerSingleton;
}

// StaticRegisterNativesUMovieScene3DPathTrack @ 1468cff10

void __cdecl UMovieScene3DPathTrack::StaticRegisterNativesUMovieScene3DPathTrack(void)

{
  return;
}

// SupportsType @ 1468d0d60

bool __thiscall
UMovieScene3DPathTrack::SupportsType
          (UMovieScene3DPathTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d0daa;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d0daa:
  pUVar5 = Z_Construct_UClass_UMovieScene3DPathSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 1468d5520

UObject * __thiscall UMovieScene3DPathTrack::_getUObject(UMovieScene3DPathTrack *this)

{
  return (UObject *)&this[-1].field_0x8;
}

