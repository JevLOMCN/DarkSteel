// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 18

// StaticClass @ 148e89dd0

UClass * __cdecl UNiagaraDataInterfaceDataTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDataTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDataTable",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataTable.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceDataTable,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceDataTable>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDataTable>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataTable.InnerSingleton;
}

// UNiagaraDataInterfaceDataTable @ 148ea4950

UNiagaraDataInterfaceDataTable * __thiscall
UNiagaraDataInterfaceDataTable::UNiagaraDataInterfaceDataTable
          (UNiagaraDataInterfaceDataTable *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceDataTable__6B_;
  (this->DataTable).field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->FilteredRowNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredRowNames).ArrayNum = 0;
  (this->FilteredRowNames).ArrayMax = 0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->ObjectParameterBinding);
  this->bCreateFilteredTable = true;
  return this;
}

// UNiagaraDataInterfaceDataTable @ 148ea49a0

UNiagaraDataInterfaceDataTable * __thiscall
UNiagaraDataInterfaceDataTable::UNiagaraDataInterfaceDataTable
          (UNiagaraDataInterfaceDataTable *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceDataTable__6B_;
  (this->DataTable).field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->FilteredRowNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredRowNames).ArrayNum = 0;
  (this->FilteredRowNames).ArrayMax = 0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->ObjectParameterBinding);
  this->bCreateFilteredTable = true;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &___7FNDIProxy_NDIDataTableLocal__6B_;
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

// ~UNiagaraDataInterfaceDataTable @ 148ea6bd0

void __thiscall
UNiagaraDataInterfaceDataTable::~UNiagaraDataInterfaceDataTable
          (UNiagaraDataInterfaceDataTable *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceDataTable__6B_;
  pFVar1 = (this->ObjectParameterBinding).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilteredRowNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 148eac880

void __thiscall
UNiagaraDataInterfaceDataTable::BuildShaderParameters
          (UNiagaraDataInterfaceDataTable *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FNiagaraDataInterfaceGeneratedFunction *pFVar3;
  FShaderParametersMetadataBuilder *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FShaderParametersMetadata *pFVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  undefined4 uStack_2c;
  FGpuAttributeHelper local_28;
  TArrayView<FNiagaraDataInterfaceGeneratedFunction_const_,int> local_18;
  
  pFVar3 = (FNiagaraDataInterfaceGeneratedFunction *)
           (param_1->GPUParamInfo->GeneratedFunctions).AllocatorInstance.Data;
  iVar7 = (param_1->GPUParamInfo->GeneratedFunctions).ArrayNum;
  if (iVar7 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iVar7;
  local_18.DataPtr = pFVar3;
  NDIDataTableLocal::FGpuAttributeHelper::FGpuAttributeHelper(&local_28,&local_18);
  iVar7 = 1;
  if (1 < local_28.Attributes.ArrayNum) {
    iVar7 = local_28.Attributes.ArrayNum;
  }
  FNiagaraShaderParametersBuilder::AddLooseParamArray<UE::Math::TIntVector4<unsigned_int>_>
            (param_1,L"AttributeReadOffset",(int)((iVar7 + 3 >> 0x1f & 3U) + iVar7 + 3) >> 2);
  pFVar4 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)
              (param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data;
  }
  pFVar4->NextMemberOffset = pFVar4->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar8 = TShaderParameterStructTypeInfo<NDIDataTableLocal::FShaderParameters>::GetStructMetadata()
  ;
  piVar1 = &(pFVar4->Members).ArrayMax;
  iVar7 = (pFVar4->Members).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar4,piVar1);
  }
  (pFVar4->Members).ArrayNum = iVar7 + 1;
  uVar2 = pFVar4->NextMemberOffset;
  pFVar9 = (pFVar4->Members).AllocatorInstance.Data + (longlong)iVar7 * 0x30;
  *(wchar_t **)pFVar9 = pwVar10;
  *(wchar_t **)(pFVar9 + 8) = L"";
  *(undefined4 *)(pFVar9 + 0x10) = 0x7b;
  *(uint *)(pFVar9 + 0x14) = uVar2;
  *(undefined2 *)(pFVar9 + 0x18) = 0x14;
  *(undefined4 *)(pFVar9 + 0x1c) = 1;
  *(undefined8 *)(pFVar9 + 0x20) = 1;
  *(FShaderParametersMetadata **)(pFVar9 + 0x28) = pFVar8;
  pFVar4->NextMemberOffset = pFVar4->NextMemberOffset + 0x20;
  if (local_28.Attributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Attributes.AllocatorInstance.Data);
  }
  return;
}

// CanExecuteOnTarget @ 148eadcd0

bool __thiscall
UNiagaraDataInterfaceDataTable::CanExecuteOnTarget
          (UNiagaraDataInterfaceDataTable *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 148eaefe0

bool __thiscall
UNiagaraDataInterfaceDataTable::CopyToInternal
          (UNiagaraDataInterfaceDataTable *this,UNiagaraDataInterface *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UDataTable *pUVar5;
  FScriptContainerElement *_Src;
  bool bVar6;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString local_28;
  FString local_18;
  
  bVar6 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar6) {
    return false;
  }
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar8 = GetTypeName<UNiagaraDataInterfaceDataTable>(&local_28);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar7 = StaticClass();
  iVar3 = (int)pUVar7->_padding_;
  if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      == &pUVar7->_padding_)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = (this->DataTable).field0_0x0.DebugPtr, pUVar5 != (UDataTable *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    plVar1 = &param_1[1]._padding_;
    *(TObjectPtr<UDataTable>_u_0 *)(param_1 + 1) = (this->DataTable).field0_0x0;
    if ((TArray<FName,TSizedDefaultAllocator<32>_> *)plVar1 != &this->FilteredRowNames) {
      iVar3 = (this->FilteredRowNames).ArrayNum;
      piVar2 = (int *)((longlong)&param_1[1]._padding_ + 4);
      iVar4 = *piVar2;
      _Src = (this->FilteredRowNames).AllocatorInstance.Data;
      *(int *)&param_1[1]._padding_ = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,iVar4,(ForAnyElementType *)plVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((void *)*plVar1,_Src,(longlong)iVar3 << 3);
        }
      }
    }
    param_1[1]._padding_ = (this->ObjectParameterBinding).Parameter._padding_;
    *(int *)&param_1[1]._padding_ = (int)(this->ObjectParameterBinding).Parameter._padding_;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[1].Proxy,
               &(this->ObjectParameterBinding).Parameter.VarData);
    *(bool *)&param_1[2]._padding_ = this->bCreateFilteredTable;
    return true;
  }
  pFVar8 = GetTypeName<UNiagaraDataInterfaceDataTable>(&local_28);
  pwVar9 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar8 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar10);
}

// CreateShaderStorage @ 148eb2970

FNiagaraDataInterfaceParametersCS * __thiscall
UNiagaraDataInterfaceDataTable::CreateShaderStorage
          (UNiagaraDataInterfaceDataTable *this,FNiagaraDataInterfaceGPUParamInfo *param_1,
          FShaderParameterMap *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraDataInterfaceParametersCS *pFVar6;
  ForAnyElementType *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  undefined1 local_res10 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  FGpuAttributeHelper local_50;
  FNiagaraDataInterfaceGeneratedFunction *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FNiagaraDataInterfaceGeneratedFunction_const_,int> local_28;
  
  local_38 = (FNiagaraDataInterfaceGeneratedFunction *)
             (param_1->GeneratedFunctions).AllocatorInstance.Data;
  iVar9 = (param_1->GeneratedFunctions).ArrayNum;
  if ((iVar9 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FNiagaraDataInterfaceParametersCS *)(*pcVar3)();
    return pFVar6;
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar9;
  local_28.DataPtr = local_38;
  iStack_30 = iVar9;
  NDIDataTableLocal::FGpuAttributeHelper::FGpuAttributeHelper(&local_50,&local_28);
  pFVar7 = ::operator_new(0x10);
  if (pFVar7 != (ForAnyElementType *)0x0) {
    *pFVar7 = (ForAnyElementType)0x0;
    pFVar7[1] = (ForAnyElementType)0x0;
  }
  iVar9 = local_50.Attributes.ArrayNum;
  if (-1 < iVar9) {
    puVar1 = &pFVar7[1].field_0x4;
    if (*(int *)puVar1 < iVar9) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,4,iVar9,pFVar7,*(int *)(pFVar7 + 1),(int *)puVar1);
    }
    iVar9 = local_50.Attributes.ArrayNum;
    pFVar2 = local_50.Attributes.AllocatorInstance.Data + (longlong)iVar9 * 0xc;
    FVar10.Data = local_50.Attributes.AllocatorInstance.Data;
    while( true ) {
      if (local_50.Attributes.ArrayNum != iVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar10.Data == pFVar2) break;
      local_58 = *(undefined4 *)FVar10.Data;
      FVar8 = *pFVar7;
      uStack_54 = *(undefined4 *)(FVar10.Data + 4);
      FVar11 = (ForAnyElementType)((longlong)&pFVar7->field_0x0 + ((longlong)FVar8 >> 0x18));
      if (((ulonglong)FVar8 & 1) == 0) {
        FVar11 = FVar8;
      }
      if ((ulonglong)FVar11 <= &local_58) {
        if (((ulonglong)FVar8 & 1) != 0) {
          FVar8 = (ForAnyElementType)((longlong)&pFVar7->field_0x0 + ((longlong)FVar8 >> 0x18));
        }
        if ((&local_58 < (undefined4 *)((longlong)FVar8 + (longlong)*(int *)puVar1 * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FNiagaraDataInterfaceParametersCS *)(*pcVar3)();
          return pFVar6;
        }
      }
      iVar5 = *(int *)(pFVar7 + 1);
      if (iVar5 == *(int *)puVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                          (0x408,pFVar7,(int *)puVar1);
      }
      *(int *)(pFVar7 + 1) = iVar5 + 1;
      FVar8 = *pFVar7;
      if (((ulonglong)FVar8 & 1) != 0) {
        FVar8 = (ForAnyElementType)((longlong)&pFVar7->field_0x0 + ((longlong)FVar8 >> 0x18));
      }
      FVar10.Data = FVar10.Data + 0xc;
      *(ulonglong *)((longlong)FVar8 + (longlong)iVar5 * 8) = CONCAT44(uStack_54,local_58);
    }
    if (local_50.Attributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Attributes.AllocatorInstance.Data);
    }
    return (FNiagaraDataInterfaceParametersCS *)pFVar7;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(local_50.Attributes._8_8_ & 0xffffffff);
}

// DestroyPerInstanceData @ 148eb4210

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
UNiagaraDataInterfaceDataTable::DestroyPerInstanceData
          (UNiagaraDataInterfaceDataTable *this,void *param_1,FNiagaraSystemInstance *param_2)

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
  if (*(void **)((longlong)param_1 + 0x128) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x128));
  }
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (((uint)this->_padding_ >> 2 & 1) != 0) {
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
                TFunction_OwnedObject<`UNiagaraDataInterfaceDataTable::DestroyPerInstanceData'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68 = param_2->ID;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceDataTable::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    lStack_70 = lVar1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDataTable::DestroyPerInstanceData_::__l5::TSTR_FNDISimpleCounter_RemoveProxy607>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`UNiagaraDataInterfaceDataTable::DestroyPerInstanceData'::__l5::TSTR_FNDISimpleCounter_RemoveProxy607>
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
  }
  return;
}

// Equals @ 148eb5ed0

bool __thiscall
UNiagaraDataInterfaceDataTable::Equals
          (UNiagaraDataInterfaceDataTable *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceDataTable_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceDataTable_const_>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    if (((UDataTable *)param_1[1]._padding_ == (this->DataTable).field0_0x0.DebugPtr) &&
       (iVar1 = (int)param_1[1]._padding_, iVar1 == (this->FilteredRowNames).ArrayNum)) {
      bVar2 = CompareItems<FName,int>
                        ((FName *)param_1[1]._padding_,
                         (FName *)(this->FilteredRowNames).AllocatorInstance.Data,iVar1);
      if ((bVar2) &&
         (((this->ObjectParameterBinding).Parameter._padding_ == param_1[1]._padding_ &&
          ((int)(this->ObjectParameterBinding).Parameter._padding_ == (int)param_1[1]._padding_))))
      {
        return true;
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 148ebf860

UClass * __cdecl UNiagaraDataInterfaceDataTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDataTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDataTable",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataTable.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceDataTable,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceDataTable>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDataTable>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataTable.InnerSingleton;
}

// GetShaderStorageType @ 148ec0270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
UNiagaraDataInterfaceDataTable::GetShaderStorageType(UNiagaraDataInterfaceDataTable *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderStorage;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = NDIDataTableLocal::FShaderStorage::InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<NDIDataTableLocal::FShaderStorage,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_NDIDataTableLocal::FShaderStorage::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AttributeNames";
    DAT_15526d7c2 = Freeze::FindFieldNameLength(L"AttributeNames");
    _DAT_15526d7a0 = StaticGetTypeLayoutDesc<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>();
    DAT_15526d7a8 = ::TypeBuffer[0x10];
    DAT_15526d7a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15526d7a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15526d7a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15526d7a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15526d7a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15526d7a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15526d7a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_NDIDataTableLocal::FShaderStorage::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15526d7b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15526d7b8 = 0;
    _DAT_15526d7bc = 1;
    _DAT_15526d7c0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FNiagaraDataInterfaceParametersCS::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetVMExternalFunction @ 148ec1600

void __thiscall
UNiagaraDataInterfaceDataTable::GetVMExternalFunction
          (UNiagaraDataInterfaceDataTable *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  undefined1 local_50 [16];
  int local_40;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  FVar3 = param_1->Name;
  if (FVar3 == NDIDataTableLocal::NAME_IsValid) {
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar4[3] = NDIDataTableLocal::VMIsValid;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_40._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_50._8_8_,(FDestructionSentinel *)local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    return;
  }
  if (FVar3 != NDIDataTableLocal::NAME_GetNumRows) {
    if (FVar3 == NDIDataTableLocal::NAME_GetNumFilteredRows) {
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_38);
      local_20 = &local_60;
      puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar4[3] = NDIDataTableLocal::VMGetNumRows<1>;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_40._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_50._8_8_,(FDestructionSentinel *)local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
      return;
    }
    if (FVar3 == NDIDataTableLocal::NAME_GetRow) {
      pTVar6 = NDIDataTableLocal::FInstanceData_GameThread::CreateVariadicReadTable
                         (param_2,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_68,
                          param_1);
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar1 = pTVar6->ArrayNum;
      iVar2 = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
      local_50._0_8_ = (atomic<unsigned___int64>)0x0;
      local_50._8_8_ = (atomic<unsigned___int64> *)0x0;
      local_40 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
                 (FWriteAccessScope *)&local_38);
      local_20 = (FDelegateAllocation *)(local_50 + 8);
      puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(local_50 + 8));
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataTable::GetVMExternalFunction'::`17'::<lambda_1>_>
                   ::_vftable_;
        puVar4[3] = pFVar7;
        *(int *)(puVar4 + 4) = iVar1;
        *(int *)((longlong)puVar4 + 0x24) = iVar2;
        pFVar7 = (FScriptContainerElement *)0x0;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
                 (FWriteAccessScope *)&local_38);
    }
    else {
      if (FVar3 != NDIDataTableLocal::NAME_GetFilteredRow) {
        return;
      }
      pTVar6 = NDIDataTableLocal::FInstanceData_GameThread::CreateVariadicReadTable
                         (param_2,(TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_68,
                          param_1);
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar1 = pTVar6->ArrayNum;
      iVar2 = pTVar6->ArrayMax;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
      local_50._0_8_ = (atomic<unsigned___int64>)0x0;
      local_50._8_8_ = (atomic<unsigned___int64> *)0x0;
      local_40 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
                 (FWriteAccessScope *)&local_38);
      local_20 = (FDelegateAllocation *)(local_50 + 8);
      puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(local_50 + 8));
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataTable::GetVMExternalFunction'::`21'::<lambda_2>_>
                   ::_vftable_;
        puVar4[3] = pFVar7;
        *(int *)(puVar4 + 4) = iVar1;
        *(int *)((longlong)puVar4 + 0x24) = iVar2;
        pFVar7 = (FScriptContainerElement *)0x0;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
                 (FWriteAccessScope *)&local_38);
    }
    if ((local_40 != 0) &&
       ((FMRSWRecursiveAccessDetector *)local_50._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)local_50._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_50 + 8),0,0,0x10);
      local_40 = 0;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    if ((atomic<unsigned___int64> *)local_50._8_8_ != (atomic<unsigned___int64> *)0x0) {
      FMemory::Free((void *)local_50._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_50);
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    if ((atomic<unsigned___int64>)local_68 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_68);
    }
    return;
  }
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = NDIDataTableLocal::VMGetNumRows<0>;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_40._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_50._8_8_,(FDestructionSentinel *)local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// InitPerInstanceData @ 148ec7310

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
UNiagaraDataInterfaceDataTable::InitPerInstanceData
          (UNiagaraDataInterfaceDataTable *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  UDataTable *pUVar1;
  FNDIProxy *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uStack_2c;
  TArrayView<FName_const_,int> local_28;
  
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  memset((void *)((longlong)param_1 + 0x18),0,0x128);
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  iVar6 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x18),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x18) = iVar6;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x10;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x10;
  FNiagaraParameterDirectBinding<UObject_*>::Init
            (param_1,(FNiagaraParameterStore *)&stack0x00000008,
             (FNiagaraVariable *)&param_2->InstanceParameters);
  local_28.DataPtr = (FName *)(this->FilteredRowNames).AllocatorInstance.Data;
  iVar6 = (this->FilteredRowNames).ArrayNum;
  bVar5 = this->bCreateFilteredTable;
  pUVar1 = (this->DataTable).field0_0x0.DebugPtr;
  if (iVar6 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar6;
  NDIDataTableLocal::FInstanceData_GameThread::Initialize(param_1,&local_28,pUVar1,bVar5);
  if (((uint)this->_padding_ >> 2 & 1) != 0) {
    this_00 = (FNDIProxy *)this->_padding_;
    if (this_00 == (FNDIProxy *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    NDIDataTableLocal::FNDIProxy::SendGameToRender(this_00,param_1,param_2->ID);
  }
  return true;
}

// PerInstanceDataSize @ 148ec8f50

int __thiscall
UNiagaraDataInterfaceDataTable::PerInstanceDataSize(UNiagaraDataInterfaceDataTable *this)

{
  return 0x140;
}

// PostInitProperties @ 148ecb090

void __thiscall
UNiagaraDataInterfaceDataTable::PostInitProperties(UNiagaraDataInterfaceDataTable *this)

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

// SetShaderParameters @ 148ed0140

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
UNiagaraDataInterfaceDataTable::SetShaderParameters
          (UNiagaraDataInterfaceDataTable *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong64 uVar7;
  ForElementType<unsigned_int> FVar8;
  FNiagaraDataInterfaceParametersCS *pFVar9;
  FShaderParametersMetadata *pFVar10;
  FRHIShaderResourceView *pFVar11;
  ForElementType<unsigned_int> FVar12;
  undefined4 uVar13;
  uchar *puVar14;
  ulong64 *puVar15;
  FNiagaraDataInterfaceParametersCS *pFVar16;
  longlong *plVar17;
  FName *pFVar18;
  uint uVar19;
  int iVar20;
  longlong *plVar21;
  int *piVar22;
  undefined1 local_res18 [8];
  int local_res20;
  longlong local_70;
  longlong local_68;
  FNiagaraDataInterfaceParametersCS *local_60;
  int *local_58;
  ForElementType<unsigned_int> local_50;
  FNiagaraDataInterfaceParametersCS *local_48;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = param_1->DataInterfaceProxy;
  uVar7 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  if (pFVar1[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar1[4]._padding_ + 4))
  {
    pFVar18 = (FName *)pFVar1[5]._padding_;
    if ((FName *)pFVar1[5]._padding_ == (FName *)0x0) {
      pFVar18 = &pFVar1[4].SourceDIName;
    }
    uVar19 = (&pFVar18->ComparisonIndex)
             [(ulonglong)(pFVar1[5].SourceDIName.ComparisonIndex.Value - 1) &
              (uVar7 >> 0x20) * 0x17 + uVar7].Value;
    if (uVar19 != 0xffffffff) {
      do {
        puVar15 = (ulong64 *)((longlong)(int)uVar19 * 0x90 + pFVar1[1]._padding_);
        if (*puVar15 == uVar7) {
          if (puVar15 == (ulong64 *)0x0) goto LAB_148ed0203;
          goto LAB_148ed0229;
        }
        uVar19 = (uint)puVar15[0x11];
      } while (uVar19 != 0xffffffff);
    }
  }
  puVar15 = (ulong64 *)0x0;
LAB_148ed0203:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_148ed0229:
  if ((param_1->ShaderStorage == (FNiagaraDataInterfaceParametersCS *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderStorage != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1f1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar16 = param_1->ShaderStorage;
  iVar20 = 1;
  if (1 < *(int *)(pFVar16 + 8)) {
    iVar20 = *(int *)(pFVar16 + 8);
  }
  iVar20 = (int)((iVar20 + 3 >> 0x1f & 3U) + iVar20 + 3) >> 2;
  local_res20 = iVar20;
  local_60 = pFVar16;
  local_48 = pFVar16;
  FVar8 = (ForElementType<unsigned_int>)
          TMapBase<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
          ::FindOrAddImpl<unsigned___int64>
                    ((TMapBase<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<unsigned_int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                      *)(puVar15 + 7),(int)((ulonglong)pFVar16 >> 0x20) * 0x17 + (int)pFVar16,
                     (ulong64 *)&local_60);
  piVar22 = (int *)((longlong)FVar8 + 0x48);
  local_58 = piVar22;
  local_50 = FVar8;
  if (*(int *)((longlong)FVar8 + 0x48) == 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (4,4,iVar20 * 4,(ForElementType<unsigned_int> *)FVar8,piVar22,
                       (int *)((longlong)FVar8 + 0x4c));
    FVar12 = FVar8;
    if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x40) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar12 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x40);
    }
    memset((void *)((longlong)FVar12 + (longlong)iVar5 * 4),0,(longlong)(iVar20 * 4) << 2);
    uVar19 = 0;
    if (0 < *(int *)(pFVar16 + 8)) {
      local_68 = 0;
      local_70 = 0;
      do {
        if ((puVar15[1] == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = puVar15[1];
        uVar6 = 0;
        if ((int)uVar19 < *(int *)(pFVar16 + 8)) {
          uVar6 = ~uVar19 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = *(FNiagaraDataInterfaceParametersCS **)pFVar16;
        if (((ulonglong)pFVar9 & 1) != 0) {
          pFVar9 = pFVar16 + ((longlong)pFVar9 >> 0x18);
        }
        lVar2 = *(longlong *)(pFVar9 + local_70);
        plVar17 = (longlong *)(uVar7 + 0x330);
        iVar20 = *(int *)(uVar7 + 0x438);
        if (*(longlong **)(uVar7 + 0x430) != (longlong *)0x0) {
          plVar17 = *(longlong **)(uVar7 + 0x430);
        }
        plVar21 = plVar17 + (longlong)iVar20 * 2;
        while( true ) {
          if (*(int *)(uVar7 + 0x438) != iVar20) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<TTuple<FNiagaraVariableBase,unsigned_int>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          piVar22 = local_58;
          if (plVar17 == plVar21) {
            uVar13 = 0xffffffff;
            goto LAB_148ed0448;
          }
          if (*plVar17 == lVar2) break;
          plVar17 = plVar17 + 2;
        }
        uVar13 = *(undefined4 *)((longlong)plVar17 + 0xc);
LAB_148ed0448:
        uVar6 = 0;
        if ((int)uVar19 < *local_58) {
          uVar6 = ~uVar19 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar8 = local_50;
        if (*(ForElementType<unsigned_int> *)((longlong)local_50 + 0x40) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar8 = *(ForElementType<unsigned_int> *)((longlong)local_50 + 0x40);
        }
        uVar19 = uVar19 + 1;
        *(undefined4 *)(local_68 + (longlong)FVar8) = uVar13;
        local_68 = local_68 + 4;
        local_70 = local_70 + 8;
        FVar8 = local_50;
        pFVar16 = local_48;
        iVar20 = local_res20;
      } while ((int)uVar19 < *(int *)(local_48 + 8));
    }
  }
  uVar19 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  puVar14 = param_1->BaseParameters;
  param_1->ParametersOffset = iVar20 * 0x10 + uVar19;
  if ((iVar20 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x40) != (ForElementType<unsigned_int>)0x0
     ) {
    FVar8 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x40);
  }
  memcpy(puVar14 + uVar19,(void *)FVar8,(ulonglong)(uint)(*piVar22 << 2));
  uVar19 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar10 = TShaderParameterStructTypeInfo<NDIDataTableLocal::FShaderParameters>::GetStructMetadata
                      ();
  puVar14 = param_1->BaseParameters + uVar19;
  param_1->ParametersOffset = pFVar10->Size + uVar19;
  if ((puVar15[1] == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)puVar14 = *(undefined4 *)(puVar15[1] + 0x444);
  if ((puVar15[1] == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar15[1] + 0x440);
  if ((puVar15[1] == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(int *)(puVar14 + 8) = *(int *)(puVar15[1] + 0x444) * *(int *)(puVar15[1] + 0x440);
  *(int *)(puVar14 + 0xc) = (int)puVar15[3];
  if ((puVar15[1] == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar11 = NDIDataTableLocal::FBuiltDataTable::GetGpuRowDataSrv
                      ((FBuiltDataTable *)puVar15[1],param_1->GraphBuilder);
  *(FRHIShaderResourceView **)(puVar14 + 0x10) = pFVar11;
  *(ulong64 *)(puVar14 + 0x18) = puVar15[5];
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceDataTable @ 148ed4be0

void __cdecl
UNiagaraDataInterfaceDataTable::StaticRegisterNativesUNiagaraDataInterfaceDataTable(void)

{
  return;
}

