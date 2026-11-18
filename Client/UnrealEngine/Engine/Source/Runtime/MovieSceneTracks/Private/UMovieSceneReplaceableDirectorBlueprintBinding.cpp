// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 11

// StaticClass @ 14658c010

UClass * __cdecl UMovieSceneReplaceableDirectorBlueprintBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneReplaceableDirectorBlueprintBinding.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneReplaceableDirectorBlueprintBinding",
               &Z_Registration_Info_UClass_UMovieSceneReplaceableDirectorBlueprintBinding.
                InnerSingleton,StaticRegisterNativesUMovieSceneReplaceableDirectorBlueprintBinding,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneReplaceableDirectorBlueprintBinding>,
               InternalVTableHelperCtorCaller<UMovieSceneReplaceableDirectorBlueprintBinding>,
               local_res8,UMovieSceneReplaceableBindingBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneReplaceableDirectorBlueprintBinding.InnerSingleton;
}

// UMovieSceneReplaceableDirectorBlueprintBinding @ 14661b8e0

UMovieSceneReplaceableDirectorBlueprintBinding * __thiscall
UMovieSceneReplaceableDirectorBlueprintBinding::UMovieSceneReplaceableDirectorBlueprintBinding
          (UMovieSceneReplaceableDirectorBlueprintBinding *this,FVTableHelper *param_1)

{
  UMovieSceneReplaceableBindingBase::UMovieSceneReplaceableBindingBase
            ((UMovieSceneReplaceableBindingBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneReplaceableDirectorBlueprintBinding__6B_;
  (this->DynamicBinding).Function.field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty = 0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty.field_0x10 = 0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty.field_0x18 = 0;
  (this->PreviewSpawnableType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UMovieSceneReplaceableDirectorBlueprintBinding @ 14661b930

UMovieSceneReplaceableDirectorBlueprintBinding * __thiscall
UMovieSceneReplaceableDirectorBlueprintBinding::UMovieSceneReplaceableDirectorBlueprintBinding
          (UMovieSceneReplaceableDirectorBlueprintBinding *this,FObjectInitializer *param_1)

{
  UMovieSceneReplaceableBindingBase::UMovieSceneReplaceableBindingBase
            ((UMovieSceneReplaceableBindingBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneReplaceableDirectorBlueprintBinding__6B_;
  (this->DynamicBinding).Function.field0_0x0.DebugPtr = (UFunction *)0x0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty = 0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty.field_0x10 = 0;
  *(undefined8 *)&(this->DynamicBinding).ResolveParamsProperty.field_0x18 = 0;
  (this->PreviewSpawnableType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UMovieSceneReplaceableDirectorBlueprintBinding @ 146621d50

void __thiscall
UMovieSceneReplaceableDirectorBlueprintBinding::~UMovieSceneReplaceableDirectorBlueprintBinding
          (UMovieSceneReplaceableDirectorBlueprintBinding *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneReplaceableDirectorBlueprintBinding__6B_;
  pvVar1 = *(void **)&(this->DynamicBinding).ResolveParamsProperty.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UMovieSceneReplaceableBindingBase::~UMovieSceneReplaceableBindingBase
            ((UMovieSceneReplaceableBindingBase *)this);
  return;
}

// GetInnerSpawnableClass @ 14668a4d0

TSubclassOf<UMovieSceneSpawnableBindingBase> __thiscall
UMovieSceneReplaceableDirectorBlueprintBinding::GetInnerSpawnableClass
          (UMovieSceneReplaceableDirectorBlueprintBinding *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = (this->PreviewSpawnableType).Class.field0_0x0.DebugPtr;
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UMovieSceneSpawnableBindingBase>)in_RDX.field0_0x0;
}

// GetPrivateStaticClass @ 146696ab0

UClass * __cdecl UMovieSceneReplaceableDirectorBlueprintBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneReplaceableDirectorBlueprintBinding.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneReplaceableDirectorBlueprintBinding",
               &Z_Registration_Info_UClass_UMovieSceneReplaceableDirectorBlueprintBinding.
                InnerSingleton,StaticRegisterNativesUMovieSceneReplaceableDirectorBlueprintBinding,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneReplaceableDirectorBlueprintBinding>,
               InternalVTableHelperCtorCaller<UMovieSceneReplaceableDirectorBlueprintBinding>,
               local_res8,UMovieSceneReplaceableBindingBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneReplaceableDirectorBlueprintBinding.InnerSingleton;
}

// InitReplaceableBinding @ 14669d1e0

void __thiscall
UMovieSceneReplaceableDirectorBlueprintBinding::InitReplaceableBinding
          (UMovieSceneReplaceableDirectorBlueprintBinding *this,UObject *param_1,
          UMovieScene *param_2)

{
  return;
}

// PostDuplicate @ 1466acbe0

void __thiscall
UMovieSceneReplaceableDirectorBlueprintBinding::PostDuplicate
          (UMovieSceneReplaceableDirectorBlueprintBinding *this,Type param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FFieldClass *pFVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UPackage *pUVar8;
  UPackage *pUVar9;
  FFieldClass *pFVar10;
  FField *pFVar11;
  int iVar12;
  undefined1 *puVar13;
  FFieldPath local_28;
  
  UMovieSceneReplaceableBindingBase::PostDuplicate
            ((UMovieSceneReplaceableBindingBase *)this,param_1);
  if ((this->DynamicBinding).Function.field0_0x0.DebugPtr == (UFunction *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar6);
  if (pUVar7 == (UObject *)0x0) {
    return;
  }
  pUVar8 = UObjectBaseUtility::GetPackage
                     ((UObjectBaseUtility *)(this->DynamicBinding).Function.field0_0x0.DebugPtr);
  pUVar9 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  if (pUVar9 == pUVar8) {
    return;
  }
  (this->DynamicBinding).Function.field0_0x0.DebugPtr = (UFunction *)0x0;
  local_28.ResolvedField = (FField *)0x0;
  local_28.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_28.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_28.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Path.ArrayNum = 0;
  local_28.Path.ArrayMax = 0;
  pFVar10 = FProperty::StaticClass();
  if ((local_28.ResolvedField == (FField *)0x0) ||
     (bVar5 = FWeakObjectPtr::IsValid(&local_28.ResolvedOwner.WeakPtr),
     pFVar11 = local_28.ResolvedField, !bVar5)) {
    iVar12 = 0;
    if (local_28.Path.ArrayNum == 0) goto LAB_1466acd18;
    pFVar11 = FFieldPath::TryToResolvePath(&local_28,(UStruct *)0x0,UseStructIfOuterNotFound);
    if (pFVar11 != (FField *)0x0) {
      if ((pFVar10 == (FFieldClass *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = pFVar11->ClassPrivate;
      if (pFVar10->Id == CASTCLASS_None) {
        for (; pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
          if (pFVar3 == pFVar10) {
            bVar5 = true;
            goto LAB_1466accf6;
          }
        }
        bVar5 = false;
      }
      else {
        bVar5 = (pFVar3->CastFlags & pFVar10->Id) != CASTCLASS_None;
      }
LAB_1466accf6:
      if (bVar5) goto LAB_1466acd15;
    }
    pFVar11 = local_28.ResolvedField;
    if (local_28.ResolvedField != (FField *)0x0) {
      local_28.ResolvedOwner.WeakPtr.ObjectIndex = 0;
      local_28.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
      local_28.ResolvedField = (FField *)0x0;
      pFVar11 = local_28.ResolvedField;
    }
  }
LAB_1466acd15:
  local_28.ResolvedField = pFVar11;
  iVar12 = local_28.Path.ArrayNum;
LAB_1466acd18:
  _Src.Data = local_28.Path.AllocatorInstance.Data;
  *(FField **)&(this->DynamicBinding).ResolveParamsProperty = local_28.ResolvedField;
  *(int *)&(this->DynamicBinding).ResolveParamsProperty.field_0x8 =
       local_28.ResolvedOwner.WeakPtr.ObjectIndex;
  *(int *)&(this->DynamicBinding).ResolveParamsProperty.field_0xc =
       local_28.ResolvedOwner.WeakPtr.ObjectSerialNumber;
  puVar13 = &(this->DynamicBinding).ResolveParamsProperty.field_0x10;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)puVar13 != &local_28.Path) {
    iVar2 = *(int *)&(this->DynamicBinding).ResolveParamsProperty.field_0x1c;
    puVar1 = &(this->DynamicBinding).ResolveParamsProperty.field_0x1c;
    *(int *)&(this->DynamicBinding).ResolveParamsProperty.field_0x18 = iVar12;
    if ((iVar12 == 0) && (iVar2 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar12,iVar2,(ForAnyElementType *)puVar13,iVar12,(int *)puVar1);
      if (iVar12 != 0) {
        memcpy(*(void **)puVar13,_Src.Data,(longlong)iVar12 << 3);
      }
    }
  }
  if (local_28.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Path.AllocatorInstance.Data);
  }
  return;
}

// ResolveRuntimeBindingInternal @ 1466dab00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneBindingResolveResult * __thiscall
UMovieSceneReplaceableDirectorBlueprintBinding::ResolveRuntimeBindingInternal
          (UMovieSceneReplaceableDirectorBlueprintBinding *this,
          FMovieSceneBindingResolveResult *__return_storage_ptr__,
          FMovieSceneBindingResolveParams *param_1,int param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  int *piVar1;
  UMovieSceneSequence *pUVar2;
  ForAnyElementType FVar3;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_48;
  FMovieSceneDynamicBindingResolveResult local_38;
  
  piVar1 = &(__return_storage_ptr__->Objects).ArrayMax;
  (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Objects).ArrayNum = 0;
  *piVar1 = 0;
  (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  local_48.Object = param_3->Object;
  pUVar2 = (param_1->Sequence).field0_0x0.DebugPtr;
  local_48.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneDynamicBindingInvoker::ResolveDynamicBinding
            (&local_38,&local_48,pUVar2,&param_1->SequenceID,&param_1->ObjectBindingID,
             &this->DynamicBinding);
  FVar3.Data = local_38.Objects.AllocatorInstance.Data;
  if ((FMovieSceneDynamicBindingResolveResult *)__return_storage_ptr__ != &local_38) {
    (__return_storage_ptr__->Objects).ArrayNum = local_38.Objects.ArrayNum;
    if ((local_38.Objects.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_38.Objects.ArrayNum,*piVar1,(ForAnyElementType *)__return_storage_ptr__,
                 local_38.Objects.ArrayNum,piVar1);
      ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                ((__return_storage_ptr__->Objects).AllocatorInstance.Data,
                 (TObjectPtr<UObject> *)FVar3.Data,local_38.Objects.ArrayNum);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_38.Object.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38.Object.field0_0x0);
  }
  (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)local_38.Object.field0_0x0;
  if (local_38.Objects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Objects.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMovieSceneReplaceableDirectorBlueprintBinding @ 1466fe850

void __cdecl
UMovieSceneReplaceableDirectorBlueprintBinding::
StaticRegisterNativesUMovieSceneReplaceableDirectorBlueprintBinding(void)

{
  return;
}

// SupportsBindingCreationFromObject @ 1466fe910

bool __thiscall
UMovieSceneReplaceableDirectorBlueprintBinding::SupportsBindingCreationFromObject
          (UMovieSceneReplaceableDirectorBlueprintBinding *this,UObject *param_1)

{
  return true;
}

