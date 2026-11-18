// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 24

// StaticClass @ 148ee5ab0

UClass * __cdecl UNiagaraDataInterfaceSocketReader::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSocketReader.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSocketReader",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSocketReader.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSocketReader,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSocketReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSocketReader>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSocketReader.InnerSingleton;
}

// UNiagaraDataInterfaceSocketReader @ 148f80bc0

UNiagaraDataInterfaceSocketReader * __thiscall
UNiagaraDataInterfaceSocketReader::UNiagaraDataInterfaceSocketReader
          (UNiagaraDataInterfaceSocketReader *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->SourceMode = Default;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSocketReader__6B_;
  (this->FilteredSockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredSockets).ArrayNum = 0;
  (this->FilteredSockets).ArrayMax = 0;
  *(undefined8 *)&this->SourceActor = 0;
  *(undefined8 *)&(this->SourceActor).field_0x10 = 0;
  *(undefined8 *)&(this->SourceActor).field_0x8 = 0;
  (this->SourceAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->AttachComponentClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AttachComponentTag).ComparisonIndex = 0;
  (this->AttachComponentTag).Number = 0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->ObjectParameterBinding);
  this->bUpdateSocketsPerFrame = true;
  this->bRequireCurrentFrameData = true;
  return this;
}

// UNiagaraDataInterfaceSocketReader @ 148f80c30

UNiagaraDataInterfaceSocketReader * __thiscall
UNiagaraDataInterfaceSocketReader::UNiagaraDataInterfaceSocketReader
          (UNiagaraDataInterfaceSocketReader *this,FObjectInitializer *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar3 = (undefined8 *)0x0;
  this->SourceMode = Default;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSocketReader__6B_;
  (this->FilteredSockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredSockets).ArrayNum = 0;
  (this->FilteredSockets).ArrayMax = 0;
  *(undefined8 *)&this->SourceActor = 0;
  *(undefined8 *)&(this->SourceActor).field_0x10 = 0;
  *(undefined8 *)&(this->SourceActor).field_0x8 = 0;
  (this->SourceAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->AttachComponentClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AttachComponentTag).ComparisonIndex = 0;
  (this->AttachComponentTag).Number = 0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->ObjectParameterBinding);
  this->bUpdateSocketsPerFrame = true;
  this->bRequireCurrentFrameData = true;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &___7FNDIProxy_NDISocketReaderLocal__6B_;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_20 = 1;
  local_1e = 0;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  *(int *)&(this->ObjectParameterBinding).Parameter._padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceSocketReader @ 148f820c0

void __thiscall
UNiagaraDataInterfaceSocketReader::~UNiagaraDataInterfaceSocketReader
          (UNiagaraDataInterfaceSocketReader *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSocketReader__6B_;
  pFVar1 = (this->ObjectParameterBinding).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilteredSockets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 148f84430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l5::<lambda_1>::operator()
          (void *this,UNiagaraScript *param_1,FVMExternalFunctionBindingInfo *param_2)

{
  uint uVar1;
  FName FVar2;
  uint uVar3;
  FName *pFVar4;
  longlong lVar5;
  FName *pFVar6;
  uint uVar7;
  
  FVar2 = param_2->Name;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (NDISocketReaderLocal::VMFunctionInfos._8_4_ != NDISocketReaderLocal::VMFunctionInfos._52_4_) {
    lVar5 = 0x15526f168;
    if (NDISocketReaderLocal::VMFunctionInfos._64_8_ != 0) {
      lVar5 = NDISocketReaderLocal::VMFunctionInfos._64_8_;
    }
    uVar3 = *(uint *)(lVar5 + (ulonglong)
                              (NDISocketReaderLocal::VMFunctionInfos._72_4_ - 1 &
                              FVar2.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar4 = (FName *)((longlong)(int)uVar3 * 0x30 + NDISocketReaderLocal::VMFunctionInfos._0_8_);
      if (*pFVar4 == FVar2) {
        uVar3 = 0;
        pFVar6 = pFVar4 + 1;
        if (pFVar4 == (FName *)0x0) {
          pFVar6 = (FName *)0x0;
        }
        if (pFVar6 != (FName *)0x0) {
          uVar1 = pFVar6[3].ComparisonIndex.Value;
          if ((uVar1 == 1) || (uVar7 = uVar3, uVar1 == 2)) {
            uVar7 = 8;
          }
          uVar1 = *(uint *)(**(longlong **)this + 0x38);
          *(uint *)(**(longlong **)this + 0x38) = (uVar1 & 8 | uVar7) ^ uVar1 & 0xfffffff7;
          uVar1 = pFVar6[3].ComparisonIndex.Value;
          if ((uVar1 == 1) || (uVar1 == 3)) {
            uVar3 = 0x10;
          }
          uVar1 = *(uint *)(**(longlong **)this + 0x38);
          *(uint *)(**(longlong **)this + 0x38) = (uVar1 & 0x10 | uVar3) ^ uVar1 & 0xffffffef;
        }
        break;
      }
      uVar3 = pFVar4[5].ComparisonIndex.Value;
    }
  }
  return ((byte)*(undefined4 *)(**(longlong **)this + 0x38) & 0x18) != 0x18;
}

// operator() @ 148f84b90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l8::<lambda_2>::operator()
          (void *this,UNiagaraScript *param_1,FNiagaraDataInterfaceGeneratedFunction *param_2)

{
  uint uVar1;
  FName FVar2;
  uint uVar3;
  FName *pFVar4;
  longlong lVar5;
  FName *pFVar6;
  uint uVar7;
  
  FVar2 = param_2->DefinitionName;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (NDISocketReaderLocal::VMFunctionInfos._8_4_ != NDISocketReaderLocal::VMFunctionInfos._52_4_) {
    lVar5 = 0x15526f168;
    if (NDISocketReaderLocal::VMFunctionInfos._64_8_ != 0) {
      lVar5 = NDISocketReaderLocal::VMFunctionInfos._64_8_;
    }
    uVar3 = *(uint *)(lVar5 + (ulonglong)
                              (NDISocketReaderLocal::VMFunctionInfos._72_4_ - 1 &
                              FVar2.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar4 = (FName *)((longlong)(int)uVar3 * 0x30 + NDISocketReaderLocal::VMFunctionInfos._0_8_);
      if (*pFVar4 == FVar2) {
        uVar3 = 0;
        pFVar6 = pFVar4 + 1;
        if (pFVar4 == (FName *)0x0) {
          pFVar6 = (FName *)0x0;
        }
        if (pFVar6 != (FName *)0x0) {
          uVar1 = pFVar6[3].ComparisonIndex.Value;
          if ((uVar1 == 1) || (uVar7 = uVar3, uVar1 == 2)) {
            uVar7 = 8;
          }
          uVar1 = *(uint *)(**(longlong **)this + 0x38);
          *(uint *)(**(longlong **)this + 0x38) = (uVar1 & 8 | uVar7) ^ uVar1 & 0xfffffff7;
          uVar1 = pFVar6[3].ComparisonIndex.Value;
          if ((uVar1 == 1) || (uVar1 == 3)) {
            uVar3 = 0x10;
          }
          uVar1 = *(uint *)(**(longlong **)this + 0x38);
          *(uint *)(**(longlong **)this + 0x38) = (uVar1 & 0x10 | uVar3) ^ uVar1 & 0xffffffef;
        }
        break;
      }
      uVar3 = pFVar4[5].ComparisonIndex.Value;
    }
  }
  return ((byte)*(undefined4 *)(**(longlong **)this + 0x38) & 0x18) != 0x18;
}

// BuildShaderParameters @ 148f8f9e0

void __thiscall
UNiagaraDataInterfaceSocketReader::BuildShaderParameters
          (UNiagaraDataInterfaceSocketReader *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceSocketReader::FShaderParameters>::
           GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x90;
  return;
}

// CalculateTickGroup @ 148f90910

ETickingGroup __thiscall
UNiagaraDataInterfaceSocketReader::CalculateTickGroup
          (UNiagaraDataInterfaceSocketReader *this,void *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  byte bVar4;
  ETickingGroup EVar5;
  ETickingGroup EVar6;
  
  if (this->bRequireCurrentFrameData == false) {
    return TG_PrePhysics;
  }
  if (param_1 == (void *)0x0) {
    return TG_PrePhysics;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x1c0));
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_148f90964;
  }
  pUVar2 = (UObject *)0x0;
LAB_148f90964:
  if (pUVar2 == (UObject *)0x0) {
    return TG_PrePhysics;
  }
  bVar4 = pUVar2[1].field_0x19;
  if ((byte)pUVar2[1].field_0x19 < (byte)pUVar2[1].field_0x18) {
    bVar4 = pUVar2[1].field_0x18;
  }
  EVar5 = TG_LastDemotable;
  if (bVar4 + TG_StartPhysics < TG_LastDemotable) {
    EVar5 = bVar4 + TG_StartPhysics;
  }
  EVar6 = TG_PrePhysics;
  if (EVar5 != TG_PrePhysics) {
    EVar6 = EVar5;
  }
  return EVar6;
}

// CanExecuteOnTarget @ 148f912f0

bool __thiscall
UNiagaraDataInterfaceSocketReader::CanExecuteOnTarget
          (UNiagaraDataInterfaceSocketReader *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 148f92270

bool __thiscall
UNiagaraDataInterfaceSocketReader::CopyToInternal
          (UNiagaraDataInterfaceSocketReader *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  bVar4 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar4) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar5 = StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      *(ENDISocketReaderSourceMode *)&param_1[1]._padding_ = this->SourceMode;
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1[1]._padding_,
                 &this->FilteredSockets);
      lVar3 = *(longlong *)&(this->SourceActor).field_0x8;
      param_1[1]._padding_ = *(longlong *)&this->SourceActor;
      param_1[1]._padding_ = lVar3;
      param_1[1].Proxy.Ptr = *(FNiagaraDataInterfaceProxy **)&(this->SourceActor).field_0x10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->SourceAsset).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(TObjectPtr<UObject>_u_0 *)&param_1[1].field_0x30 = (this->SourceAsset).field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 = (this->AttachComponentClass).field0_0x0.DebugPtr, pUVar5 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      *(TObjectPtr<UClass>_u_0 *)(param_1 + 2) = (this->AttachComponentClass).field0_0x0;
      param_1[2]._padding_ = (longlong)this->AttachComponentTag;
      param_1[2]._padding_ = (this->ObjectParameterBinding).Parameter._padding_;
      *(int *)&param_1[2]._padding_ = (int)(this->ObjectParameterBinding).Parameter._padding_;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[2]._padding_,
                 &(this->ObjectParameterBinding).Parameter.VarData);
      param_1[2].field_0x30 = this->bUpdateSocketsPerFrame;
      param_1[2].field_0x31 = this->bRequireCurrentFrameData;
      return true;
    }
    pFVar6 = GetTypeName<UNiagaraDataInterfaceSocketReader>(&local_28);
    pwVar8 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar8,pwVar7);
  }
  pFVar6 = GetTypeName<UNiagaraDataInterfaceSocketReader>(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar8);
}

// DestroyPerInstanceData @ 148fa8590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceSocketReader::DestroyPerInstanceData
          (UNiagaraDataInterfaceSocketReader *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  longlong lStack_70;
  ulong64 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  ulong64 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (*(void **)((longlong)param_1 + 0x1b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1b0));
  }
  if (*(void **)((longlong)param_1 + 0x1a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1a0));
  }
  if (*(void **)((longlong)param_1 + 400) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 400));
  }
  if (*(void **)((longlong)param_1 + 0x180) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x180));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceSocketReader::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  lStack_70 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSocketReader::DestroyPerInstanceData_::__l2::TSTR_RemoveProxy883>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    lStack_40 = lStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceSocketReader::DestroyPerInstanceData'::__l2::TSTR_RemoveProxy883>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar5 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar5 = local_60;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// DrawDebugHud @ 148fa8e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceSocketReader::DrawDebugHud
          (UNiagaraDataInterfaceSocketReader *this,FNDIDrawDebugHudContext *param_1)

{
  FWeakObjectPtr *pFVar1;
  uint uVar2;
  int iVar3;
  FNiagaraSystemInstance *pFVar4;
  UCanvas *this_00;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  UNiagaraDataInterfaceSocketReader *pUVar9;
  UObject *pUVar10;
  FWeakObjectPtr *this_01;
  float *pfVar11;
  float *pfVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  FString local_170;
  FName local_160;
  TVector2<double>_u_0 local_158;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar4 = param_1->SystemInstance;
  this_01 = (FWeakObjectPtr *)(pFVar4->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
  pFVar1 = (FWeakObjectPtr *)
           ((longlong)this_01 + (longlong)(pFVar4->DataInterfaceInstanceDataOffsets).ArrayNum * 0xc)
  ;
  while( true ) {
    if (this_01 == pFVar1) {
      return;
    }
    pUVar9 = (UNiagaraDataInterfaceSocketReader *)FWeakObjectPtr::Get(this_01);
    if (pUVar9 == this) break;
    this_01 = (FWeakObjectPtr *)&this_01[1].ObjectSerialNumber;
  }
  if (this_01 == (FWeakObjectPtr *)0x0) {
    return;
  }
  uVar2 = this_01[1].ObjectIndex;
  uVar8 = 0;
  if ((int)uVar2 < (pFVar4->DataInterfaceInstanceData).ArrayNum) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar13 = (pFVar4->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar2;
  if (pFVar13 == (FScriptContainerElement *)0x0) {
    return;
  }
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar13 + 0x1c0));
  if (pUVar10 == (UObject *)0x0) {
    ::FString::FString(&local_170,L"None");
  }
  else {
    local_160.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
    local_160.Number = *(uint *)&pUVar10->field_0x1c;
    ::FName::ToString(&local_160,&local_170);
  }
  ::FString::AppendfImpl(&param_1->OutputString,L"ResolvedObject(%s)");
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  fVar6 = __real_40800000;
  if (param_1->bVerbose == false) {
    return;
  }
  if (pUVar10 == (UObject *)0x0) {
    return;
  }
  this_00 = param_1->Canvas;
  if (this_00 == (UCanvas *)0x0) {
    return;
  }
  iVar3 = *(int *)(pFVar13 + 0x1a8);
  pfVar11 = *(float **)(pFVar13 + 0x1a0);
  pfVar12 = pfVar11 + (longlong)iVar3 * 0xc;
  while( true ) {
    if (*(int *)(pFVar13 + 0x1a8) != iVar3) {
      `TCheckedPointerIterator<UE::Math::TTransform<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_178);
    }
    if (pfVar11 == pfVar12) break;
    local_a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)pfVar11[1],0);
    local_a8.Rotation.XY.m128d_f64[0] = (double)*pfVar11;
    local_a8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar11[1] >> 0x20);
    local_a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)pfVar11[3],0);
    local_a8.Rotation.ZW.m128d_f64[0] = (double)pfVar11[2];
    local_a8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar11[3] >> 0x20);
    local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)pfVar11[5],0);
    local_a8.Translation.XY.m128d_f64[0] = (double)pfVar11[4];
    local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar11[5] >> 0x20);
    local_a8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)pfVar11[7],0);
    local_a8.Translation.ZW.m128d_f64[0] = (double)pfVar11[6];
    local_a8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar11[7] >> 0x20);
    local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)pfVar11[9],0);
    local_a8.Scale3D.XY.m128d_f64[0] = (double)pfVar11[8];
    local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar11[9] >> 0x20);
    local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)pfVar11[0xb],0);
    local_a8.Scale3D.ZW.m128d_f64[0] = (double)pfVar11[10];
    local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)pfVar11[0xb] >> 0x20);
    local_108.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_108.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_108.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_108.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_108.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_108,&local_a8,(TTransform<double> *)(pFVar13 + 0x50));
    local_128._s_0.X = local_108.Translation.XY.m128d_f64[0];
    local_128._s_0.Y = local_108.Translation.XY.m128d_f64[1];
    local_128._s_0.Z = local_108.Translation.ZW.m128d_f64[0];
    UCanvas::Project(this_00,(TVector<double> *)&local_148._s_0,(TVector<double> *)&local_128._s_0,
                     false);
    if (0.0 < local_148._s_0.Z) {
      local_158._s_0.X = local_148._s_0.X;
      local_158._s_0.Y = local_148._s_0.Y;
      FCanvas::DrawNGon(this_00->Canvas,(TVector2<double> *)&local_158._s_0,&FColor::Red,8,fVar6);
    }
    pfVar11 = pfVar11 + 0xc;
  }
  return;
}

// Equals @ 148fa9440

bool __thiscall
UNiagaraDataInterfaceSocketReader::Equals
          (UNiagaraDataInterfaceSocketReader *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceSocketReader_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar6);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceSocketReader_const_>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
    if (((ENDISocketReaderSourceMode)param_1[1]._padding_ == this->SourceMode) &&
       (iVar1 = (int)param_1[1]._padding_, iVar1 == (this->FilteredSockets).ArrayNum)) {
      bVar2 = CompareItems<FName,int>
                        ((FName *)param_1[1]._padding_,
                         (FName *)(this->FilteredSockets).AllocatorInstance.Data,iVar1);
      if ((((bVar2) &&
           ((((((*(int *)((longlong)&param_1[1].Proxy.Ptr + 4) ==
                 *(int *)&(this->SourceActor).field_0x14 &&
                *(int *)&param_1[1].Proxy.Ptr == *(int *)&(this->SourceActor).field_0x10) &&
               *(int *)((longlong)&param_1[1]._padding_ + 4) ==
               *(int *)&(this->SourceActor).field_0xc) &&
               (int)param_1[1]._padding_ == *(int *)&(this->SourceActor).field_0x8 &&
              (*(UObject **)&param_1[1].field_0x30 == (this->SourceAsset).field0_0x0.DebugPtr)) &&
             ((UClass *)param_1[2]._padding_ == (this->AttachComponentClass).field0_0x0.DebugPtr))
            && (((FName)param_1[2]._padding_ == this->AttachComponentTag &&
                ((this->ObjectParameterBinding).Parameter._padding_ == param_1[2]._padding_)))))) &&
          ((int)(this->ObjectParameterBinding).Parameter._padding_ == (int)param_1[2]._padding_)) &&
         (((bool)param_1[2].field_0x30 == this->bUpdateSocketsPerFrame &&
          ((bool)param_1[2].field_0x31 == this->bRequireCurrentFrameData)))) {
        return true;
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 148fb69c0

UClass * __cdecl UNiagaraDataInterfaceSocketReader::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSocketReader.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSocketReader",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSocketReader.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSocketReader,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSocketReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSocketReader>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSocketReader.InnerSingleton;
}

// GetVMExternalFunction @ 148fbbbd0

void __thiscall
UNiagaraDataInterfaceSocketReader::GetVMExternalFunction
          (UNiagaraDataInterfaceSocketReader *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  longlong lVar4;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar5;
  
  FVar1 = param_1->Name;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (NDISocketReaderLocal::VMFunctionInfos._8_4_ != NDISocketReaderLocal::VMFunctionInfos._52_4_) {
    lVar4 = 0x15526f168;
    if (NDISocketReaderLocal::VMFunctionInfos._64_8_ != 0) {
      lVar4 = NDISocketReaderLocal::VMFunctionInfos._64_8_;
    }
    uVar2 = *(uint *)(lVar4 + (ulonglong)
                              (NDISocketReaderLocal::VMFunctionInfos._72_4_ - 1 &
                              FVar1.Number + uVar2) * 4);
    if (uVar2 != 0xffffffff) {
      while (pFVar3 = (FName *)((longlong)(int)uVar2 * 0x30 +
                               NDISocketReaderLocal::VMFunctionInfos._0_8_), *pFVar3 != FVar1) {
        uVar2 = pFVar3[5].ComparisonIndex.Value;
        if (uVar2 == 0xffffffff) {
          return;
        }
      }
      pTVar5 = (TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *)(pFVar3 + 1);
      if (pFVar3 == (FName *)0x0) {
        pTVar5 = (TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *)0x0;
      }
      if (pTVar5 != (TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                     *)0x0) {
        TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>(param_3,pTVar5);
      }
    }
  }
  return;
}

// HasPreSimulateTick @ 148fbeda0

bool __thiscall
UNiagaraDataInterfaceSocketReader::HasPreSimulateTick(UNiagaraDataInterfaceSocketReader *this)

{
  return true;
}

// HasTickGroupPrereqs @ 148fbfc70

bool __thiscall
UNiagaraDataInterfaceSocketReader::HasTickGroupPrereqs(UNiagaraDataInterfaceSocketReader *this)

{
  return true;
}

// InitPerInstanceData @ 148fc24f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceSocketReader::InitPerInstanceData
          (UNiagaraDataInterfaceSocketReader *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  undefined ***pppuVar1;
  FInstanceData_GameThread *local_98 [2];
  code *local_88 [2];
  undefined **local_78;
  FInstanceData_GameThread **local_70;
  undefined ***local_60;
  undefined1 local_58 [32];
  FFunctionStorage local_38;
  
  local_98[0] = NDISocketReaderLocal::FInstanceData_GameThread::FInstanceData_GameThread(param_1);
  FNiagaraParameterDirectBinding<UObject_*>::Init
            (&local_98[0]->UserParamBinding,(FNiagaraParameterStore *)local_58,
             (FNiagaraVariable *)&param_2->InstanceParameters);
  NDISocketReaderLocal::ResolveObject(this,local_98[0],param_2);
  *(uint *)&local_98[0]->field_0x38 =
       ((uint)NDISocketReaderLocal::GDisableTransformReadType << 3 |
       *(uint *)&local_98[0]->field_0x38) & 8 ^ *(uint *)&local_98[0]->field_0x38 & 0xfffffff7;
  *(uint *)&local_98[0]->field_0x38 =
       ((uint)NDISocketReaderLocal::GDisableTransformReadType << 4 |
       *(uint *)&local_98[0]->field_0x38) & 0x10 ^ *(uint *)&local_98[0]->field_0x38 & 0xffffffef;
  if ((((uint)this->_padding_ >> 1 & 1) != 0) &&
     (local_98[0]->bReadsFilteredTransforms != 1 || local_98[0]->bReadsUnfilteredTransforms != 1)) {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_70 = local_98;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l5::<lambda_1>,bool,UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&>
                  ::Call;
    FNiagaraDataInterfaceUtilities::ForEachVMFunction
              ((UNiagaraDataInterface *)this,param_2,
               (TFunction<bool___cdecl(UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&)>
                *)local_88);
  }
  if ((((uint)this->_padding_ >> 2 & 1) != 0) &&
     (local_98[0]->bReadsFilteredTransforms != 1 || local_98[0]->bReadsUnfilteredTransforms != 1)) {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::`8'::<lambda_2>,0,0>
                ::_vftable_;
    local_70 = local_98;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l8::<lambda_2>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
                  ::Call;
    if ((param_2 != (FNiagaraSystemInstance *)0x0) &&
       ((param_2->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0 &&
        (param_2->System != (UNiagaraSystem *)0x0)))) {
      local_58._16_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l8::<lambda_2>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
           ::Call;
      local_38.HeapAllocation = (void *)0x0;
      UE::Core::Private::Function::
      TFunction_OwnedObject<`UNiagaraDataInterfaceSocketReader::InitPerInstanceData'::__l8::<lambda_2>,0,0>
      ::CloneToEmptyStorage(&local_78,&local_38);
      FNiagaraDataInterfaceUtilities::ForEachGpuFunctionImpl
                ((UNiagaraDataInterface *)this,param_2->System,
                 (FNiagaraParameterStore *)param_2->OverrideParameters,
                 (TFunction<bool___cdecl(UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&)>
                  *)(local_58 + 0x10));
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar1 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar1 = local_60;
      }
      (*(code *)(*pppuVar1)[2])();
    }
  }
  return true;
}

// PerInstanceDataSize @ 148fc63e0

int __thiscall
UNiagaraDataInterfaceSocketReader::PerInstanceDataSize(UNiagaraDataInterfaceSocketReader *this)

{
  return 0x1d0;
}

// PerInstanceTick @ 148fc6420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceSocketReader::PerInstanceTick
          (UNiagaraDataInterfaceSocketReader *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  float fVar1;
  
  fVar1 = 0.0;
  *(float *)((longlong)param_1 + 0x3c) = param_3;
  if (0.0 < param_3) {
    fVar1 = __real_3f800000 / param_3;
  }
  *(float *)((longlong)param_1 + 0x40) = fVar1;
  NDISocketReaderLocal::ResolveObject(this,param_1,param_2);
  NDISocketReaderLocal::UpdateSocketCache(this,param_1,param_2);
  return false;
}

// PostInitProperties @ 148fc7230

void __thiscall
UNiagaraDataInterfaceSocketReader::PostInitProperties(UNiagaraDataInterfaceSocketReader *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// ProvidePerInstanceDataForRenderThread @ 148fc7a30

void __thiscall
UNiagaraDataInterfaceSocketReader::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceSocketReader *this,void *param_1,void *param_2,ulong64 *param_3)

{
  NDISocketReaderLocal::FNDIProxy::ProvidePerInstanceDataForRenderThread(param_1,param_2,param_3);
  return;
}

// SetShaderParameters @ 148fcc390

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceSocketReader::SetShaderParameters
          (UNiagaraDataInterfaceSocketReader *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  FRDGBuilder *this_00;
  longlong lVar4;
  uchar *puVar5;
  code *pcVar6;
  FRDGBuffer *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  ulong64 uVar11;
  FInstanceData_RenderThread *pFVar12;
  FRDGBufferSRV *pFVar13;
  FShaderParametersMetadata *pFVar14;
  uint uVar15;
  FRDGBufferSRVDesc local_38;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = param_1->DataInterfaceProxy;
  uVar11 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar12 = TMapBase<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>_>
            ::FindChecked((TMapBase<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDISocketReaderLocal::FInstanceData_RenderThread,0>_>
                           *)(pFVar3 + 1),uVar11);
  this_00 = param_1->GraphBuilder;
  local_38._padding_._4_4_ = 0;
  local_38._padding_._0_4_ = (uint)local_38._padding_ & 0xffffff00;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  local_38.Buffer = FRDGBuilder::RegisterExternalBuffer(this_00,&pFVar12->PooledBuffer,None);
  uVar9 = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    uVar9 = 0x1c;
  }
  local_38._padding_._0_4_ = CONCAT31(local_38._padding_._1_3_,uVar9);
  FRDGUserValidation::ValidateCreateSRV(&this_00->UserValidation,&local_38);
  pFVar7 = local_38.Buffer;
  pFVar13 = FMemStackBase::Alloc((FMemStackBase *)&this_00->_padding_,0x50,8);
  lVar4 = pFVar7->_padding_;
  piVar1 = &(this_00->Views).Array.ArrayMax;
  *(byte *)&pFVar13->_padding_ = (byte)pFVar13->_padding_ & 0xfe;
  *(undefined8 *)((longlong)&pFVar13->_padding_ + 4) = 0xffffffffffffffff;
  pFVar13->_padding_ = lVar4;
  pFVar13->_padding_ = 0;
  *(undefined1 *)&pFVar13->_padding_ = 3;
  pFVar13->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
  (pFVar13->Desc)._padding_ = CONCAT44(local_38._padding_._4_4_,(uint)local_38._padding_);
  (pFVar13->Desc)._padding_ = CONCAT44(local_38._padding_._4_4_,(undefined4)local_38._padding_);
  (pFVar13->Desc)._padding_ = local_38._padding_;
  (pFVar13->Desc).Buffer = local_38.Buffer;
  iVar10 = (this_00->Views).Array.ArrayNum;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                       (0x808,(ForElementType<FRDGView_*> *)&this_00->Views,piVar1);
  }
  (this_00->Views).Array.ArrayNum = iVar10 + 1;
  (this_00->Views).Array.AllocatorInstance.Data[iVar10] = (FRDGView *)pFVar13;
  *(int *)((longlong)&pFVar13->_padding_ + 4) = (this_00->Views).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateSRV(&this_00->UserValidation,pFVar13);
  uVar15 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar14 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceSocketReader::FShaderParameters>::
            GetStructMetadata();
  puVar5 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar14->Size + uVar15;
  *(uint *)(puVar5 + uVar15) = (uint)((char)pFVar12->_padding_ != '\0');
  *(undefined4 *)(puVar5 + (ulonglong)uVar15 + 4) =
       *(undefined4 *)((longlong)&pFVar12->_padding_ + 4);
  *(int *)(puVar5 + (ulonglong)uVar15 + 8) = (int)pFVar12->_padding_;
  *(undefined4 *)(puVar5 + (ulonglong)uVar15 + 0xc) =
       *(undefined4 *)((longlong)&pFVar12->_padding_ + 4);
  *(int *)(puVar5 + (ulonglong)uVar15 + 0x10) = (int)pFVar12->_padding_;
  lVar4 = pFVar12->_padding_;
  *(longlong *)(puVar5 + (ulonglong)uVar15 + 0x20) = pFVar12->_padding_;
  *(int *)(puVar5 + (ulonglong)uVar15 + 0x28) = (int)lVar4;
  lVar4 = pFVar12->_padding_;
  *(longlong *)(puVar5 + (ulonglong)uVar15 + 0x30) = pFVar12->_padding_;
  *(longlong *)((longlong)(puVar5 + (ulonglong)uVar15 + 0x30) + 8) = lVar4;
  lVar4 = pFVar12->_padding_;
  *(longlong *)(puVar5 + (ulonglong)uVar15 + 0x40) = pFVar12->_padding_;
  *(int *)(puVar5 + (ulonglong)uVar15 + 0x48) = (int)lVar4;
  lVar4 = pFVar12->_padding_;
  *(longlong *)(puVar5 + (ulonglong)uVar15 + 0x50) = pFVar12->_padding_;
  *(int *)(puVar5 + (ulonglong)uVar15 + 0x58) = (int)lVar4;
  lVar4 = pFVar12->_padding_;
  *(longlong *)(puVar5 + (ulonglong)uVar15 + 0x60) = pFVar12->_padding_;
  *(longlong *)((longlong)(puVar5 + (ulonglong)uVar15 + 0x60) + 8) = lVar4;
  lVar4 = pFVar12->_padding_;
  *(longlong *)(puVar5 + (ulonglong)uVar15 + 0x70) = pFVar12->_padding_;
  *(int *)(puVar5 + (ulonglong)uVar15 + 0x78) = (int)lVar4;
  *(int *)(puVar5 + (ulonglong)uVar15 + 0x7c) = (int)pFVar12->_padding_;
  uVar2 = *(undefined4 *)((longlong)&pFVar12->_padding_ + 4);
  *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar15 + 0x88) = pFVar13;
  *(undefined4 *)(puVar5 + (ulonglong)uVar15 + 0x80) = uVar2;
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceSocketReader @ 148fcdd00

void __cdecl
UNiagaraDataInterfaceSocketReader::StaticRegisterNativesUNiagaraDataInterfaceSocketReader(void)

{
  return;
}

