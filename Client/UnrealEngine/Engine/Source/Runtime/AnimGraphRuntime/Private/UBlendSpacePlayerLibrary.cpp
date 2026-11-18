// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 35

// StaticClass @ 1463edce0

UClass * __cdecl UBlendSpacePlayerLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendSpacePlayerLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"BlendSpacePlayerLibrary",
               &Z_Registration_Info_UClass_UBlendSpacePlayerLibrary.InnerSingleton,
               StaticRegisterNativesUBlendSpacePlayerLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlendSpacePlayerLibrary>,
               InternalVTableHelperCtorCaller<UBlendSpacePlayerLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendSpacePlayerLibrary.InnerSingleton;
}

// UBlendSpacePlayerLibrary @ 146407860

UBlendSpacePlayerLibrary * __thiscall
UBlendSpacePlayerLibrary::UBlendSpacePlayerLibrary
          (UBlendSpacePlayerLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlendSpacePlayerLibrary__6B_;
  return this;
}

// UBlendSpacePlayerLibrary @ 146407890

UBlendSpacePlayerLibrary * __thiscall
UBlendSpacePlayerLibrary::UBlendSpacePlayerLibrary
          (UBlendSpacePlayerLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlendSpacePlayerLibrary__6B_;
  return this;
}

// ~UBlendSpacePlayerLibrary @ 146409750

void __thiscall UBlendSpacePlayerLibrary::~UBlendSpacePlayerLibrary(UBlendSpacePlayerLibrary *this)

{
  *(undefined ***)this = &___7UBlendSpacePlayerLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14640eb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_BlendSpacePlayer *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  FAnimationUpdateContext *this_00;
  IInertializationRequester *pIVar4;
  FInertializationRequest local_68;
  
  lVar3 = (**(code **)(param_1->_padding_ + 0x148))(param_1);
  lVar1 = *(longlong *)this;
  cVar2 = (**(code **)(param_1->_padding_ + 400))(param_1,lVar1);
  if ((cVar2 == '\0') && (2 < (byte)LogBlendSpacePlayerLibrary._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendSpacePlayerLibrary)
    ;
  }
  if ((lVar3 != lVar1) && (0.0 < *(float *)((longlong)this + 0x10))) {
    this_00 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)((longlong)this + 8));
    if (this_00 == (FAnimationUpdateContext *)0x0) {
      if (2 < (byte)LogBlendSpacePlayerLibrary._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogBlendSpacePlayerLibrary);
      }
    }
    else {
      pIVar4 = FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>
                         ((FAnimationBaseContext *)this_00);
      if (pIVar4 != (IInertializationRequester *)0x0) {
        FInertializationRequest::FInertializationRequest(&local_68);
        local_68.NodeId = *(int *)((longlong)&this_00->_padding_ + 4);
        local_68.Duration = *(float *)((longlong)this + 0x10);
        local_68.AnimInstance.field0_0x0 =
             (TObjectPtr<UObject>_u_0)
             ((TObjectPtr<UObject>_u_0 *)(this_00->_padding_ + 0x140))->DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_68.AnimInstance.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_68.AnimInstance.field0_0x0);
        }
        (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,&local_68);
        if (local_68.DescriptionString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_68.DescriptionString.Data.AllocatorInstance.Data);
        }
        if (local_68.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.Description_DEPRECATED.TextData.Reference + 0x10))();
        }
      }
    }
  }
  return;
}

// operator() @ 14640f2d0

void __thiscall
`UBlendSpacePlayerLibrary::SnapToPosition'::__l2::<lambda_1>::operator()
          (void *this,FAnimNode_BlendSpacePlayer *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar1 = *(longlong *)this;
  uVar7 = 0;
  iVar5 = 3;
  if ((int)param_1->_padding_ < 3) {
    iVar5 = (int)param_1->_padding_;
  }
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)param_1->_padding_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = param_1->_padding_;
      if ((2 < uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7ab,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FFIRFilterTimeBased::SetToValue
                ((FFIRFilterTimeBased *)((longlong)(int)uVar7 * 0x38 + lVar2),
                 (float)*(double *)(lVar1 + lVar8 * 8));
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  return;
}

// ConvertToBlendSpacePlayer @ 1464218d0

FBlendSpacePlayerReference * __cdecl
UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayer
          (FBlendSpacePlayerReference *__return_storage_ptr__,FAnimNodeReference *param_1,
          EAnimNodeReferenceConversionResult *param_2)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  pUVar4 = param_1->AnimNodeStruct;
  if (pUVar4 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar3,
                           L"AnimNode_BlendSpacePlayer");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14642195b;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)->
                 _padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)->_padding_))
    {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = Succeeded;
      pUVar4 = param_1->AnimNodeStruct;
      pUVar5 = (UScriptStruct *)param_1->AnimNode;
      goto LAB_146421963;
    }
  }
LAB_14642195b:
  pUVar4 = (UScriptStruct *)0x0;
  *param_2 = Failed;
  pUVar5 = pUVar4;
LAB_146421963:
  *(UScriptStruct **)__return_storage_ptr__ = pUVar5;
  *(UScriptStruct **)&__return_storage_ptr__->field_0x8 = pUVar4;
  return __return_storage_ptr__;
}

// GetBlendSpace @ 146447d50

UBlendSpace * __cdecl UBlendSpacePlayerLibrary::GetBlendSpace(FBlendSpacePlayerReference *param_1)

{
  UBlendSpace *local_res10;
  UBlendSpace **local_res18 [2];
  code *local_18;
  undefined8 **local_10;
  
  local_res18[0] = &local_res10;
  local_res10 = (UBlendSpace *)0x0;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetBlendSpace'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            ((FAnimNodeReference *)param_1,L"GetBlendSpace",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  return local_res10;
}

// GetLoop @ 14644b850

bool __cdecl UBlendSpacePlayerLibrary::GetLoop(FBlendSpacePlayerReference *param_1)

{
  undefined1 local_res10 [8];
  undefined1 *local_res18 [2];
  code *local_18;
  undefined1 **local_10;
  
  local_res18[0] = local_res10;
  local_res10[0] = 0;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetLoop'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            ((FAnimNodeReference *)param_1,L"GetLoop",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  return (bool)local_res10[0];
}

// GetPlayRate @ 14644c6c0

float __cdecl UBlendSpacePlayerLibrary::GetPlayRate(FBlendSpacePlayerReference *param_1)

{
  float local_res10 [2];
  float *local_res18 [2];
  code *local_18;
  undefined4 **local_10;
  
  local_res18[0] = local_res10;
  local_res10[0] = 0.0;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetPlayRate'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            ((FAnimNodeReference *)param_1,L"GetPlayRate",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  return local_res10[0];
}

// GetPosition @ 14644cb70

TVector<double> * __cdecl
UBlendSpacePlayerLibrary::GetPosition
          (TVector<double> *__return_storage_ptr__,FBlendSpacePlayerReference *param_1)

{
  undefined8 uVar1;
  TVector<double> *local_res8 [4];
  code *local_18;
  TVector<double> **local_10;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetPosition'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  local_res8[0] = __return_storage_ptr__;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            ((FAnimNodeReference *)param_1,L"GetPosition",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14644d1e0

UClass * __cdecl UBlendSpacePlayerLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendSpacePlayerLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"BlendSpacePlayerLibrary",
               &Z_Registration_Info_UClass_UBlendSpacePlayerLibrary.InnerSingleton,
               StaticRegisterNativesUBlendSpacePlayerLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlendSpacePlayerLibrary>,
               InternalVTableHelperCtorCaller<UBlendSpacePlayerLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendSpacePlayerLibrary.InnerSingleton;
}

// GetStartPosition @ 14644f640

float __cdecl UBlendSpacePlayerLibrary::GetStartPosition(FBlendSpacePlayerReference *param_1)

{
  float local_res10 [2];
  float *local_res18 [2];
  code *local_18;
  undefined4 **local_10;
  
  local_res18[0] = local_res10;
  local_res10[0] = 0.0;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetStartPosition'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            ((FAnimNodeReference *)param_1,L"GetStartPosition",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  return local_res10[0];
}

// SetBlendSpace @ 146467ff0

FBlendSpacePlayerReference * __cdecl
UBlendSpacePlayerLibrary::SetBlendSpace
          (FBlendSpacePlayerReference *__return_storage_ptr__,FBlendSpacePlayerReference *param_1,
          UBlendSpace *param_2)

{
  undefined8 uVar1;
  UBlendSpace *local_res8;
  code *local_18;
  UBlendSpace **local_10;
  
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetBlendSpace'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  local_res8 = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            ((FAnimNodeReference *)param_1,L"SetBlendSpace",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetBlendSpaceWithInertialBlending @ 146468050

FBlendSpacePlayerReference * __cdecl
UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending
          (FBlendSpacePlayerReference *__return_storage_ptr__,FAnimUpdateContext *param_1,
          FBlendSpacePlayerReference *param_2,UBlendSpace *param_3,float param_4)

{
  undefined8 uVar1;
  code *local_38;
  UBlendSpace **local_30;
  UBlendSpace *local_28;
  FAnimUpdateContext *local_20;
  float local_18;
  
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  local_18 = param_4;
  local_28 = param_3;
  local_20 = param_1;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            ((FAnimNodeReference *)param_2,L"SetBlendSpaceWithInertialBlending",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_38);
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetLoop @ 146469780

FBlendSpacePlayerReference * __cdecl
UBlendSpacePlayerLibrary::SetLoop
          (FBlendSpacePlayerReference *__return_storage_ptr__,FBlendSpacePlayerReference *param_1,
          bool param_2)

{
  undefined8 uVar1;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetLoop'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            ((FAnimNodeReference *)param_1,L"SetLoop",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetPlayRate @ 14646a580

FBlendSpacePlayerReference * __cdecl
UBlendSpacePlayerLibrary::SetPlayRate
          (FBlendSpacePlayerReference *__return_storage_ptr__,FBlendSpacePlayerReference *param_1,
          float param_2)

{
  undefined8 uVar1;
  float local_res18 [4];
  code *local_18;
  float *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetPlayRate'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            ((FAnimNodeReference *)param_1,L"SetPlayRate",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// SetResetPlayTimeWhenBlendSpaceChanges @ 14646ad00

FBlendSpacePlayerReference * __cdecl
UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges
          (FBlendSpacePlayerReference *__return_storage_ptr__,FBlendSpacePlayerReference *param_1,
          bool param_2)

{
  undefined8 uVar1;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  local_res18[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            ((FAnimNodeReference *)param_1,L"SetResetPlayTimeWhenBlendSpaceChanges",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

// ShouldResetPlayTimeWhenBlendSpaceChanges @ 14646b8b0

bool __cdecl
UBlendSpacePlayerLibrary::ShouldResetPlayTimeWhenBlendSpaceChanges
          (FBlendSpacePlayerReference *param_1)

{
  undefined1 local_res10 [8];
  undefined1 *local_res18 [2];
  code *local_18;
  undefined1 **local_10;
  
  local_res18[0] = local_res10;
  local_res10[0] = 0;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::ShouldResetPlayTimeWhenBlendSpaceChanges'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            ((FAnimNodeReference *)param_1,L"ShouldResetPlayTimeWhenBlendSpaceChanges",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  return (bool)local_res10[0];
}

// SnapToPosition @ 14646bca0

void __cdecl
UBlendSpacePlayerLibrary::SnapToPosition
          (FBlendSpacePlayerReference *param_1,TVector<double> *param_2)

{
  TVector<double> *local_res10 [3];
  code *local_18;
  TVector<double> **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::SnapToPosition'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  local_res10[0] = param_2;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            ((FAnimNodeReference *)param_1,L"SnapToPosition",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  return;
}

// StaticRegisterNativesUBlendSpacePlayerLibrary @ 14646e650

void __cdecl UBlendSpacePlayerLibrary::StaticRegisterNativesUBlendSpacePlayerLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UBlendSpacePlayerLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToBlendSpacePlayer @ 14647e880

void __cdecl
UBlendSpacePlayerLibrary::execConvertToBlendSpacePlayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimNodeReference *pFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  FBlendSpacePlayerReference *pFVar4;
  FAnimNodeReference *pFVar5;
  EAnimNodeReferenceConversionResult *pEVar6;
  EAnimNodeReferenceConversionResult local_res10 [8];
  FAnimNodeReference local_28;
  FBlendSpacePlayerReference local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  local_res10[0] = Failed;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_28;
  if (pFVar1 != (FAnimNodeReference *)0x0) {
    pFVar5 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (EAnimNodeReferenceConversionResult *)0x0) {
    pEVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = ConvertToBlendSpacePlayer(&local_18,pFVar5,pEVar6);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar4;
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  return;
}

// execConvertToBlendSpacePlayerPure @ 14647e990

void __cdecl
UBlendSpacePlayerLibrary::execConvertToBlendSpacePlayerPure
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  bool bVar5;
  uchar uVar6;
  UPackage *pUVar7;
  undefined8 uVar8;
  uchar *puVar9;
  uchar *puVar10;
  undefined8 uVar11;
  uchar *puVar12;
  uchar local_res10 [8];
  uchar local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar8 = 0;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar9 = local_38;
  if (puVar10 != (uchar *)0x0) {
    puVar9 = puVar10;
  }
  local_28 = 0;
  uStack_20 = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar12 = (uchar *)&local_28;
  if (puVar10 != (uchar *)0x0) {
    puVar12 = puVar10;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = *(longlong *)(puVar9 + 8);
  if (lVar4 != 0) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar7,
                           L"AnimNode_BlendSpacePlayer");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14647eb1a;
    }
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)->_padding_))
    {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar6 = '\x01';
      uVar8 = *(undefined8 *)puVar9;
      uVar11 = *(undefined8 *)(puVar9 + 8);
      goto LAB_14647eb1f;
    }
  }
LAB_14647eb1a:
  uVar6 = '\0';
  uVar11 = uVar8;
LAB_14647eb1f:
  *(undefined8 *)puVar12 = uVar8;
  *(undefined8 *)(puVar12 + 8) = uVar11;
  *puVar10 = uVar6;
  return;
}

// execGetBlendSpace @ 146481810

void __cdecl
UBlendSpacePlayerLibrary::execGetBlendSpace(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined8 local_res10;
  undefined8 *local_res18 [2];
  FAnimNodeReference local_28;
  code *local_18;
  undefined8 **local_10;
  
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = 0;
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18[0] = &local_res10;
  local_10 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetBlendSpace'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            (this,L"GetBlendSpace",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  *(undefined8 *)param_3 = local_res10;
  return;
}

// execGetLoop @ 146481d10

void __cdecl UBlendSpacePlayerLibrary::execGetLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined1 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetLoop'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            (this,L"GetLoop",(TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  *(undefined1 *)param_3 = local_res10[0];
  return;
}

// execGetPlayRate @ 1464822a0

void __cdecl
UBlendSpacePlayerLibrary::execGetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined4 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetPlayRate'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            (this,L"GetPlayRate",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execGetPosition @ 1464825b0

void __cdecl
UBlendSpacePlayerLibrary::execGetPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  double *local_res10;
  FAnimNodeReference local_48;
  code *local_38;
  undefined8 **local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48.AnimNode = (FAnimNode_Base *)0x0;
  local_48.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  this = &local_48;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res10 = &local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = &local_res10;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetPosition'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            (this,L"GetPosition",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_38);
  *(double *)param_3 = local_28;
  *(double *)((longlong)param_3 + 8) = dStack_20;
  *(double *)((longlong)param_3 + 0x10) = local_18;
  return;
}

// execGetStartPosition @ 146482e50

void __cdecl
UBlendSpacePlayerLibrary::execGetStartPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined4 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetStartPosition'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            (this,L"GetStartPosition",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execSetBlendSpace @ 1464862d0

void __cdecl
UBlendSpacePlayerLibrary::execSetBlendSpace(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  FAnimNodeReference local_38;
  code *local_28;
  undefined8 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0] = local_res10;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetBlendSpace'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            (this,L"SetBlendSpace",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetBlendSpaceWithInertialBlending @ 1464863e0

void __cdecl
UBlendSpacePlayerLibrary::execSetBlendSpaceWithInertialBlending
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FAnimNodeReference *this;
  uchar *puVar8;
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  uchar local_78 [8];
  longlong *plStack_70;
  FAnimNodeReference local_68;
  code *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  uchar *local_40;
  undefined4 local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  plStack_70 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar8 = local_78;
  if (puVar3 != (uchar *)0x0) {
    puVar8 = puVar3;
  }
  local_68.AnimNode = (FAnimNode_Base *)0x0;
  local_68.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res18[0] = 0;
  this = &local_68;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38 = local_res10[0];
  local_48 = local_res18[0];
  local_50 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40 = puVar8;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            (this,L"SetBlendSpaceWithInertialBlending",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_58);
  uVar5 = *(undefined4 *)((longlong)&this->AnimNode + 4);
  uVar6 = *(undefined4 *)&this->AnimNodeStruct;
  uVar7 = *(undefined4 *)((longlong)&this->AnimNodeStruct + 4);
  *(undefined4 *)param_3 = *(undefined4 *)&this->AnimNode;
  *(undefined4 *)((longlong)param_3 + 4) = uVar5;
  *(undefined4 *)((longlong)param_3 + 8) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar7;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_70 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_70 + 8))(plStack_70,1);
    }
  }
  return;
}

// execSetLoop @ 1464869c0

void __cdecl UBlendSpacePlayerLibrary::execSetLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  int local_res18 [4];
  FAnimNodeReference local_38;
  code *local_28;
  undefined1 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_20 = local_res10;
  local_res10[0] = local_res18[0] != 0;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetLoop'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            (this,L"SetLoop",(TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetPlayRate @ 146486e80

void __cdecl
UBlendSpacePlayerLibrary::execSetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  FAnimNodeReference local_38;
  code *local_28;
  undefined4 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = local_res10[0];
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetPlayRate'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            (this,L"SetPlayRate",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execSetResetPlayTimeWhenBlendSpaceChanges @ 146487130

void __cdecl
UBlendSpacePlayerLibrary::execSetResetPlayTimeWhenBlendSpaceChanges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UScriptStruct *pUVar2;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  int local_res18 [4];
  FAnimNodeReference local_38;
  code *local_28;
  undefined1 *local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38.AnimNode = (FAnimNode_Base *)0x0;
  local_38.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0;
  this = &local_38;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_20 = local_res10;
  local_res10[0] = local_res18[0] != 0;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            (this,L"SetResetPlayTimeWhenBlendSpaceChanges",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_28);
  pUVar2 = this->AnimNodeStruct;
  *(FAnimNode_Base **)param_3 = this->AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = pUVar2;
  return;
}

// execShouldResetPlayTimeWhenBlendSpaceChanges @ 146487d90

void __cdecl
UBlendSpacePlayerLibrary::execShouldResetPlayTimeWhenBlendSpaceChanges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  FAnimNodeReference local_28;
  code *local_18;
  undefined1 **local_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AnimNode = (FAnimNode_Base *)0x0;
  local_28.AnimNodeStruct = (UScriptStruct *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  this = &local_28;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  local_res18 = local_res10;
  local_10 = &local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::ShouldResetPlayTimeWhenBlendSpaceChanges'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            (this,L"ShouldResetPlayTimeWhenBlendSpaceChanges",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_18);
  *(undefined1 *)param_3 = local_res10[0];
  return;
}

// execSnapToPosition @ 146487fa0

void __cdecl
UBlendSpacePlayerLibrary::execSnapToPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNodeReference *this;
  undefined8 *local_res10;
  FAnimNodeReference local_68;
  code *local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_68.AnimNode = (FAnimNode_Base *)0x0;
  local_68.AnimNodeStruct = (UScriptStruct *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  this = &local_68;
  if ((FAnimNodeReference *)param_2->MostRecentPropertyAddress != (FAnimNodeReference *)0x0) {
    this = (FAnimNodeReference *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = local_48;
  uStack_20 = uStack_40;
  local_18 = local_38;
  local_res10 = &local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = &local_res10;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UBlendSpacePlayerLibrary::SnapToPosition'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
             ::Call;
  FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
            (this,L"SnapToPosition",
             (TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *)&local_58);
  return;
}

