// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 25

// StaticClass @ 148ee4ac0

UClass * __cdecl UNiagaraDataInterfaceUObjectPropertyReader::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceUObjectPropertyReader",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader.InnerSingleton
               ,StaticRegisterNativesUNiagaraDataInterfaceUObjectPropertyReader,0xa8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceUObjectPropertyReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceUObjectPropertyReader>,local_res8
               ,UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader.InnerSingleton;
}

// UNiagaraDataInterfaceUObjectPropertyReader @ 148f80fe0

UNiagaraDataInterfaceUObjectPropertyReader * __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::UNiagaraDataInterfaceUObjectPropertyReader
          (UNiagaraDataInterfaceUObjectPropertyReader *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->SourceMode = Binding;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceUObjectPropertyReader__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->UObjectParameterBinding);
  this_00 = &(this->SourceActor).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SourceActor).SoftObjectPtr.field_0x20 = 0;
  (this->PropertyRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyRemap).ArrayNum = 0;
  (this->PropertyRemap).ArrayMax = 0;
  *(undefined8 *)&(this->SourceActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SourceActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SourceActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SourceActorComponentClass).field0_0x0.DebugPtr = (UClass *)0x0;
  this->ChangeId = 0;
  return this;
}

// UNiagaraDataInterfaceUObjectPropertyReader @ 148f81060

UNiagaraDataInterfaceUObjectPropertyReader * __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::UNiagaraDataInterfaceUObjectPropertyReader
          (UNiagaraDataInterfaceUObjectPropertyReader *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
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
  this->SourceMode = Binding;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceUObjectPropertyReader__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->UObjectParameterBinding);
  puVar3 = (undefined8 *)0x0;
  this_00 = &(this->SourceActor).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SourceActor).SoftObjectPtr.field_0x20 = 0;
  (this->PropertyRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyRemap).ArrayNum = 0;
  (this->PropertyRemap).ArrayMax = 0;
  *(undefined8 *)&(this->SourceActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SourceActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SourceActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SourceActorComponentClass).field0_0x0.DebugPtr = (UClass *)0x0;
  this->ChangeId = 0;
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_1e = 0;
  local_20 = 1;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  *(int *)&(this->UObjectParameterBinding).Parameter._padding_ = iVar1;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &___7FNDIProxy_NDIUObjectPropertyReaderLocal__6B_;
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
  return this;
}

// ~UNiagaraDataInterfaceUObjectPropertyReader @ 148f82190

void __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::~UNiagaraDataInterfaceUObjectPropertyReader
          (UNiagaraDataInterfaceUObjectPropertyReader *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceUObjectPropertyReader__6B_;
  pvVar1 = *(void **)&(this->SourceActor).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->PropertyRemap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UObjectParameterBinding).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 148f84550

void __thiscall
`UNiagaraDataInterfaceUObjectPropertyReader::InitPerInstanceData'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  longlong local_res18;
  
  lVar3 = *(longlong *)this;
  local_res18 = (longlong)this + 8;
  TSet<TTuple<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar3 + 0x10),&local_res8,(bool *)&local_res18);
  lVar3 = (longlong)(int)local_res8.Key * 0x140 + *(longlong *)(lVar3 + 0x10);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,*(int *)((longlong)this + 0x18) + 3U & 0xfffffffc,
             (ForAnyElementType *)(lVar3 + 0x108),(int *)(lVar3 + 0x110),(int *)(lVar3 + 0x114));
  memset(*(void **)(lVar3 + 0x108),0xff,(longlong)*(int *)(lVar3 + 0x114) << 2);
  pFVar4 = (ForAnyElementType *)(lVar3 + 0x118);
  if (pFVar4 != (ForAnyElementType *)((longlong)this + 0x10)) {
    iVar2 = *(int *)((longlong)this + 0x18);
    piVar1 = (int *)(lVar3 + 0x124);
    _Src = ((ForAnyElementType *)((longlong)this + 0x10))->Data;
    *(int *)(lVar3 + 0x120) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,*piVar1,pFVar4,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 2);
    }
  }
  return;
}

// BuildShaderParameters @ 148f8fb90

void __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::BuildShaderParameters
          (UNiagaraDataInterfaceUObjectPropertyReader *this,FNiagaraShaderParametersBuilder *param_1
          )

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FShaderParametersMetadata *pFVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)
              (param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar8 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceUObjectPropertyReader::FShaderParameters>
           ::GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar6 = (pFVar3->Members).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar6 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar9 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
  *(wchar_t **)pFVar9 = pwVar10;
  *(undefined4 *)(pFVar9 + 0x1c) = 1;
  *(undefined8 *)(pFVar9 + 0x20) = 1;
  *(wchar_t **)(pFVar9 + 8) = L"";
  *(undefined4 *)(pFVar9 + 0x10) = 0x7b;
  *(uint *)(pFVar9 + 0x14) = uVar2;
  *(undefined2 *)(pFVar9 + 0x18) = 0x14;
  *(FShaderParametersMetadata **)(pFVar9 + 0x28) = pFVar8;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x70;
  iVar6 = (param_1->GPUParamInfo->GeneratedFunctions).ArrayNum;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = iVar6 + 3;
  iVar7 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
  iVar6 = 1;
  if (1 < iVar7) {
    iVar6 = iVar7;
  }
  FNiagaraShaderParametersBuilder::AddLooseParamArray<UE::Math::TIntVector4<unsigned_int>_>
            (param_1,L"PropertyOffsets",iVar6);
  return;
}

// CanExecuteOnTarget @ 148f91310

bool __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::CanExecuteOnTarget
          (UNiagaraDataInterfaceUObjectPropertyReader *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 148f92600

bool __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::CopyToInternal
          (UNiagaraDataInterfaceUObjectPropertyReader *this,UNiagaraDataInterface *param_1)

{
  TUniquePtr<FNiagaraDataInterfaceProxy,TDefaultDelete<FNiagaraDataInterfaceProxy>_> *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
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
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar6 = GetTypeName<UNiagaraDataInterfaceUObjectPropertyReader>(&local_28);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar5 = StaticClass();
  iVar3 = (int)pUVar5->_padding_;
  if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      == &pUVar5->_padding_)) {
    *(ENDIObjectPropertyReaderSourceMode *)&param_1[1]._padding_ = this->SourceMode;
    param_1[1]._padding_ = (this->UObjectParameterBinding).Parameter._padding_;
    *(int *)&param_1[1]._padding_ = (int)(this->UObjectParameterBinding).Parameter._padding_;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[1]._padding_,
               &(this->UObjectParameterBinding).Parameter.VarData);
    pTVar1 = &param_1[1].Proxy;
    if ((TArray<FNiagaraUObjectPropertyReaderRemap,TSizedDefaultAllocator<32>_> *)pTVar1 !=
        &this->PropertyRemap) {
      iVar3 = (this->PropertyRemap).ArrayNum;
      puVar2 = &param_1[1].field_0x34;
      _Src = (this->PropertyRemap).AllocatorInstance.Data;
      *(int *)&param_1[1].field_0x30 = iVar3;
      if ((iVar3 == 0) && (*(int *)puVar2 == 0)) {
        *(undefined4 *)puVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar3,*(int *)puVar2,(ForAnyElementType *)pTVar1,iVar3,(int *)puVar2);
        if (iVar3 != 0) {
          memcpy(pTVar1->Ptr,_Src,(longlong)iVar3 << 4);
        }
      }
    }
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)(param_1 + 2),
               (TPersistentObjectPtr<FSoftObjectPath> *)&this->SourceActor);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = (this->SourceActorComponentClass).field0_0x0.DebugPtr, pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    param_1[2].Proxy.Ptr =
         (FNiagaraDataInterfaceProxy *)(this->SourceActorComponentClass).field0_0x0;
    return true;
  }
  pFVar6 = GetTypeName<UNiagaraDataInterfaceUObjectPropertyReader>(&local_28);
  pwVar7 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

// DestroyPerInstanceData @ 148fa89c0

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
UNiagaraDataInterfaceUObjectPropertyReader::DestroyPerInstanceData
          (UNiagaraDataInterfaceUObjectPropertyReader *this,void *param_1,
          FNiagaraSystemInstance *param_2)

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
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  DestructItems<NDIUObjectPropertyReaderLocal::FNDIPropertyGetter,int>
            (*(FNDIPropertyGetter **)((longlong)param_1 + 0x40),*(int *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
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
                TFunction_OwnedObject<`UNiagaraDataInterfaceUObjectPropertyReader::DestroyPerInstanceData'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68 = param_2->ID;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceUObjectPropertyReader::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    lStack_70 = lVar1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceUObjectPropertyReader::DestroyPerInstanceData_::__l5::TSTR_NDIUObjectPropertyReader_InitRT748>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
               TRenderCommandTag<`UNiagaraDataInterfaceUObjectPropertyReader::DestroyPerInstanceData'::__l5::TSTR_NDIUObjectPropertyReader_InitRT748>
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

// Equals @ 148fa9820

bool __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::Equals
          (UNiagaraDataInterfaceUObjectPropertyReader *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceUObjectPropertyReader_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceUObjectPropertyReader_const_>(&local_28);
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
    if (((((ENDIObjectPropertyReaderSourceMode)param_1[1]._padding_ == this->SourceMode) &&
         ((this->UObjectParameterBinding).Parameter._padding_ == param_1[1]._padding_)) &&
        ((int)(this->UObjectParameterBinding).Parameter._padding_ == (int)param_1[1]._padding_)) &&
       (*(int *)&param_1[1].field_0x30 == (this->PropertyRemap).ArrayNum)) {
      bVar2 = CompareItems<FNiagaraUObjectPropertyReaderRemap,int>
                        ((FNiagaraUObjectPropertyReaderRemap *)param_1[1].Proxy.Ptr,
                         (FNiagaraUObjectPropertyReaderRemap *)
                         (this->PropertyRemap).AllocatorInstance.Data,*(int *)&param_1[1].field_0x30
                        );
      if (bVar2) {
        bVar2 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)&param_1[2]._padding_,
                           (FSoftObjectPath *)&(this->SourceActor).SoftObjectPtr.field_0x8);
        if ((bVar2) &&
           ((UClass *)param_1[2].Proxy.Ptr == (this->SourceActorComponentClass).field0_0x0.DebugPtr)
           ) {
          return true;
        }
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 148fb6b40

UClass * __cdecl UNiagaraDataInterfaceUObjectPropertyReader::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceUObjectPropertyReader",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader.InnerSingleton
               ,StaticRegisterNativesUNiagaraDataInterfaceUObjectPropertyReader,0xa8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceUObjectPropertyReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceUObjectPropertyReader>,local_res8
               ,UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader.InnerSingleton;
}

// GetRemappedPropertyName @ 148fb6e70

FName __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::GetRemappedPropertyName
          (UNiagaraDataInterfaceUObjectPropertyReader *this,FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong in_R8;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PropertyRemap).ArrayNum;
  pFVar3 = (this->PropertyRemap).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PropertyRemap).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraUObjectPropertyReaderRemap_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*(longlong *)pFVar3 == in_R8) {
      *(longlong *)param_1 = *(longlong *)(pFVar3 + 8);
      return param_1;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  *(longlong *)param_1 = in_R8;
  return param_1;
}

// GetVMExternalFunction @ 148fbdb60

void __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::GetVMExternalFunction
          (UNiagaraDataInterfaceUObjectPropertyReader *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FName FVar7;
  FNiagaraTypeDefinition *pFVar8;
  FMRSWRecursiveAccessDetector *this_00;
  FName *pFVar9;
  FName *pFVar10;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18 [2];
  undefined1 local_578 [8];
  FDelegateAllocation local_570;
  undefined1 local_560 [8];
  FDelegateAllocation local_558;
  undefined1 local_548 [8];
  FDelegateAllocation local_540;
  undefined1 local_530 [8];
  FDelegateAllocation local_528;
  undefined1 local_518 [8];
  FDelegateAllocation local_510;
  undefined1 local_500 [8];
  FDelegateAllocation local_4f8;
  undefined1 local_4e8 [8];
  FDelegateAllocation local_4e0;
  undefined1 local_4d0 [8];
  FDelegateAllocation local_4c8;
  undefined1 local_4b8 [8];
  FDelegateAllocation local_4b0;
  undefined1 local_4a0 [8];
  FDelegateAllocation local_498;
  FName local_488;
  FNiagaraTypeDefinitionHandle local_480;
  FName local_47c;
  FNiagaraTypeDefinitionHandle local_474;
  FName local_470;
  FNiagaraTypeDefinitionHandle local_468;
  FName local_464;
  FNiagaraTypeDefinitionHandle local_45c;
  FName local_458;
  FNiagaraTypeDefinitionHandle local_450;
  FName local_44c;
  FNiagaraTypeDefinitionHandle local_444;
  TObjectPtr<UObject>_u_0 local_440;
  ushort local_438;
  uchar local_436;
  short local_434;
  short local_432;
  int local_430;
  uint local_42c;
  FName local_428;
  FNiagaraTypeDefinitionHandle local_420;
  FName local_41c;
  FNiagaraTypeDefinitionHandle local_414;
  FName local_410;
  FName local_408;
  FName local_400;
  FName local_3f8;
  FName local_3f0;
  FName local_3e8;
  FName local_3e0;
  undefined8 local_3d8;
  FName local_3d0;
  FNiagaraVariableBase local_3c8;
  FNiagaraVariableBase local_3b8;
  FNiagaraVariableBase local_3a8;
  FNiagaraVariableBase local_398;
  FNiagaraVariableBase local_388;
  FNiagaraVariableBase local_378;
  FNiagaraVariableBase local_368;
  FNiagaraVariableBase local_358;
  FDestructionSentinel local_348;
  FDestructionSentinel local_330;
  FDestructionSentinel local_318;
  FDestructionSentinel local_300;
  FDestructionSentinel local_2e8;
  FDestructionSentinel local_2d0;
  FDestructionSentinel local_2b8;
  FDestructionSentinel local_2a0;
  FDestructionSentinel local_288;
  FDestructionSentinel local_270;
  FDestructionSentinel local_258;
  FDelegateAllocation *local_240;
  FDestructionSentinel local_238;
  FDelegateAllocation *local_220;
  FDestructionSentinel local_218;
  FDelegateAllocation *local_200;
  FDestructionSentinel local_1f8;
  FDelegateAllocation *local_1e0;
  FDestructionSentinel local_1d8;
  FDelegateAllocation *local_1c0;
  FDestructionSentinel local_1b8;
  FDelegateAllocation *local_1a0;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  FDestructionSentinel local_178;
  FDelegateAllocation *local_160;
  FDestructionSentinel local_158;
  FDelegateAllocation *local_140;
  FDestructionSentinel local_138;
  FDelegateAllocation *local_120;
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  FNiagaraTypeDefinition local_e0;
  FNiagaraTypeDefinition local_c8;
  FNiagaraTypeDefinition local_b0;
  FNiagaraTypeDefinition local_98;
  FNiagaraTypeDefinition local_80;
  FNiagaraTypeDefinition local_68;
  FNiagaraTypeDefinition local_50;
  
  local_res18[0].ObjectIndex = 0;
  local_res18[0].ObjectSerialNumber = 0;
  local_3d8 = 0;
  FWeakObjectPtr::operator=(local_res18,(FObjectPtr)&local_3d8);
  *(FWeakObjectPtr *)((longlong)param_2 + 0x38) = local_res18[0];
  if (param_1->Name == NDIUObjectPropertyReaderLocal::GetComponentTransformName) {
    local_560 = (undefined1  [8])0x0;
    local_558.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_558.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_560,
               (FWriteAccessScope *)&local_238);
    local_220 = &local_558;
    puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_558);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceUObjectPropertyReader::GetVMExternalFunction'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar5[3] = this;
    }
    if (local_238.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_560);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_560,
               (FWriteAccessScope *)&local_2b8);
    if ((local_558.DelegateSize != 0) &&
       (local_558.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_558.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_558,0,0,0x10);
      local_558.DelegateSize = 0;
    }
    if (local_2b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
    }
    if (local_558.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_558.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_560);
    return;
  }
  if (param_1->Name == NDIUObjectPropertyReaderLocal::GetComponentInvTransformName) {
    local_548 = (undefined1  [8])0x0;
    local_540.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_540.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_548,
               (FWriteAccessScope *)&local_258);
    local_240 = &local_540;
    puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_540);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceUObjectPropertyReader::GetVMExternalFunction'::`9'::<lambda_2>_>
                 ::_vftable_;
      puVar5[3] = this;
    }
    if (local_258.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_548);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_548,
               (FWriteAccessScope *)&local_2a0);
    if ((local_540.DelegateSize != 0) &&
       (local_540.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_540.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_540,0,0,0x10);
      local_540.DelegateSize = 0;
    }
    if (local_2a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a0.Accessor,&local_2a0);
    }
    if (local_540.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_540.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_548);
    return;
  }
  ::FName::FName(&local_410,"GetFloatProperty");
  if (param_1->Name == local_410) {
    if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (this->PropertyRemap).ArrayNum;
    pFVar9 = (FName *)(this->PropertyRemap).AllocatorInstance.Data;
    pFVar10 = pFVar9 + (longlong)iVar1 * 2;
    FVar7 = *(FName *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8);
    while( true ) {
      if ((this->PropertyRemap).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNiagaraUObjectPropertyReaderRemap_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar10) goto LAB_148fbdeb6;
      if (*pFVar9 == FVar7) break;
      pFVar9 = pFVar9 + 2;
    }
    FVar7 = pFVar9[1];
LAB_148fbdeb6:
    local_440 = FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable
                ((UObject *)FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0);
    }
    local_438 = FNiagaraTypeDefinition::FloatDef.UnderlyingType;
    local_436 = FNiagaraTypeDefinition::FloatDef.Flags;
    local_434 = FNiagaraTypeDefinition::FloatDef.Size;
    local_432 = FNiagaraTypeDefinition::FloatDef.Alignment;
    local_430 = FNiagaraTypeDefinition::FloatDef.RegisteredTypeDefIndex;
    local_42c = FNiagaraTypeDefinition::FloatDef.UnderlyingTypePathNameHash;
    local_488 = FVar7;
    local_480.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_480,(FNiagaraTypeDefinition *)&local_440.ObjectPtr);
    local_3c8.Name = local_488;
    local_3c8.TypeDefHandle.RegisteredTypeIndex = local_480.RegisteredTypeIndex;
    uVar4 = NDIUObjectPropertyReaderLocal::FInstanceData_GameThread::AddProperty(param_2,&local_3c8)
    ;
    local_578 = (undefined1  [8])0x0;
    local_570.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_570.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_578,
               (FWriteAccessScope *)&local_1f8);
    local_1e0 = &local_570;
    puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_570);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceUObjectPropertyReader::GetVMExternalFunction'::`13'::<lambda_3>_>
                 ::_vftable_;
      *(uint *)(puVar5 + 3) = uVar4;
    }
    if (local_1f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_578);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_578,
               (FWriteAccessScope *)&local_288);
    if ((local_570.DelegateSize != 0) &&
       (local_570.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_570.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_570,0,0,0x10);
      local_570.DelegateSize = 0;
    }
    if (local_288.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
    }
    if (local_570.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_570.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_578;
  }
  else {
    ::FName::FName(&local_408,"GetVec2Property");
    if (param_1->Name == local_408) {
      if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar7 = GetRemappedPropertyName(this,(FName)local_100);
      pFVar8 = NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector2<float>_>::GetTypeDef
                         (&local_50);
      local_428 = *(FName *)FVar7;
      local_420.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_420,pFVar8);
      local_3b8.Name = local_428;
      local_3b8.TypeDefHandle.RegisteredTypeIndex = local_420.RegisteredTypeIndex;
      uVar4 = NDIUObjectPropertyReaderLocal::FInstanceData_GameThread::AddProperty
                        (param_2,&local_3b8);
      local_4a0 = (undefined1  [8])0x0;
      local_498.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_498.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a0,
                 (FWriteAccessScope *)&local_1d8);
      local_1c0 = &local_498;
      puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_498);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceUObjectPropertyReader::GetVMExternalFunction'::`17'::<lambda_4>_>
                   ::_vftable_;
        *(uint *)(puVar5 + 3) = uVar4;
      }
      if (local_1d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a0,
                 (FWriteAccessScope *)&local_270);
      if ((local_498.DelegateSize != 0) &&
         (local_498.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_498.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_498,0,0,0x10);
        local_498.DelegateSize = 0;
      }
      if (local_270.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
      }
      if (local_498.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_498.DelegateAllocator);
      }
      this_00 = (FMRSWRecursiveAccessDetector *)local_4a0;
    }
    else {
      ::FName::FName(&local_400,"GetVec3Property");
      if (param_1->Name == local_400) {
        if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar7 = GetRemappedPropertyName(this,(FName)local_108);
        pFVar8 = NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector<float>_>::GetTypeDef
                           (&local_98);
        local_41c = *(FName *)FVar7;
        local_414.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_414,pFVar8);
        local_3a8.Name = local_41c;
        local_3a8.TypeDefHandle.RegisteredTypeIndex = local_414.RegisteredTypeIndex;
        uVar4 = NDIUObjectPropertyReaderLocal::FInstanceData_GameThread::AddProperty
                          (param_2,&local_3a8);
        local_4b8 = (undefined1  [8])0x0;
        local_4b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_4b0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
                   (FWriteAccessScope *)&local_1b8);
        local_1a0 = &local_4b0;
        puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_4b0);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[2] = uVar6;
          *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceUObjectPropertyReader::GetVMExternalFunction'::`21'::<lambda_5>_>
                     ::_vftable_;
          *(uint *)(puVar5 + 3) = uVar4;
        }
        if (local_1b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
                   (FWriteAccessScope *)&local_348);
        if ((local_4b0.DelegateSize != 0) &&
           (local_4b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_4b0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_4b0,0,0,0x10);
          local_4b0.DelegateSize = 0;
        }
        if (local_348.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
        }
        if (local_4b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_4b0.DelegateAllocator);
        }
        this_00 = (FMRSWRecursiveAccessDetector *)local_4b8;
      }
      else {
        ::FName::FName(&local_3f8,"GetVec4Property");
        if (param_1->Name == local_3f8) {
          if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar7 = GetRemappedPropertyName(this,(FName)local_110);
          pFVar8 = NDIUObjectPropertyReaderLocal::FTypeHelper<UE::Math::TVector4<float>_>::
                   GetTypeDef(&local_80);
          local_47c = *(FName *)FVar7;
          local_474.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_474,pFVar8);
          local_358.Name = local_47c;
          local_358.TypeDefHandle.RegisteredTypeIndex = local_474.RegisteredTypeIndex;
          uVar4 = NDIUObjectPropertyReaderLocal::FInstanceData_GameThread::AddProperty
                            (param_2,&local_358);
          local_4d0 = (undefined1  [8])0x0;
          local_4c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_4c8.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d0,
                     (FWriteAccessScope *)&local_198);
          local_180 = &local_4c8;
          puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_4c8);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &
                      ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar6 = FDelegateHandle::GenerateNewID();
            puVar5[2] = uVar6;
            *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceUObjectPropertyReader::GetVMExternalFunction'::`25'::<lambda_6>_>
                       ::_vftable_;
            *(uint *)(puVar5 + 3) = uVar4;
          }
          if (local_198.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d0,
                     (FWriteAccessScope *)&local_330);
          if ((local_4c8.DelegateSize != 0) &&
             (local_4c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_4c8.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_4c8,0,0,0x10);
            local_4c8.DelegateSize = 0;
          }
          if (local_330.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
          }
          if (local_4c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_4c8.DelegateAllocator);
          }
          this_00 = (FMRSWRecursiveAccessDetector *)local_4d0;
        }
        else {
          ::FName::FName(&local_3f0,"GetColorProperty");
          if (param_1->Name == local_3f0) {
            if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar7 = GetRemappedPropertyName(this,(FName)local_118);
            pFVar8 = NDIUObjectPropertyReaderLocal::FTypeHelper<FLinearColor>::GetTypeDef(&local_68)
            ;
            local_470 = *(FName *)FVar7;
            local_468.RegisteredTypeIndex =
                 FNiagaraTypeDefinitionHandle::Register(&local_468,pFVar8);
            local_398.Name = local_470;
            local_398.TypeDefHandle.RegisteredTypeIndex = local_468.RegisteredTypeIndex;
            uVar4 = NDIUObjectPropertyReaderLocal::FInstanceData_GameThread::AddProperty
                              (param_2,&local_398);
            local_4e8 = (undefined1  [8])0x0;
            local_4e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_4e0.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4e8,
                       (FWriteAccessScope *)&local_178);
            local_160 = &local_4e0;
            puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_4e0);
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = &
                        ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar6 = FDelegateHandle::GenerateNewID();
              puVar5[2] = uVar6;
              *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceUObjectPropertyReader::GetVMExternalFunction'::`29'::<lambda_7>_>
                         ::_vftable_;
              *(uint *)(puVar5 + 3) = uVar4;
            }
            if (local_178.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
            }
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4e8);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4e8,
                       (FWriteAccessScope *)&local_318);
            if ((local_4e0.DelegateSize != 0) &&
               (local_4e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_4e0.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_4e0,0,0,0x10);
              local_4e0.DelegateSize = 0;
            }
            if (local_318.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
            }
            if (local_4e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_4e0.DelegateAllocator);
            }
            this_00 = (FMRSWRecursiveAccessDetector *)local_4e8;
          }
          else {
            ::FName::FName(&local_3e8,"GetPositionProperty");
            if (param_1->Name == local_3e8) {
              if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar7 = GetRemappedPropertyName(this,(FName)local_e8);
              pFVar8 = NDIUObjectPropertyReaderLocal::FTypeHelper<FNiagaraPosition>::GetTypeDef
                                 (&local_e0);
              local_464 = *(FName *)FVar7;
              local_45c.RegisteredTypeIndex =
                   FNiagaraTypeDefinitionHandle::Register(&local_45c,pFVar8);
              local_388.Name = local_464;
              local_388.TypeDefHandle.RegisteredTypeIndex = local_45c.RegisteredTypeIndex;
              uVar4 = NDIUObjectPropertyReaderLocal::FInstanceData_GameThread::AddProperty
                                (param_2,&local_388);
              local_500 = (undefined1  [8])0x0;
              local_4f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_4f8.DelegateSize = 0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_500,
                         (FWriteAccessScope *)&local_158);
              local_140 = &local_4f8;
              puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_4f8);
              if (puVar5 != (undefined8 *)0x0) {
                *puVar5 = &
                          ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
                ;
                uVar6 = FDelegateHandle::GenerateNewID();
                puVar5[2] = uVar6;
                *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceUObjectPropertyReader::GetVMExternalFunction'::`33'::<lambda_8>_>
                           ::_vftable_;
                *(uint *)(puVar5 + 3) = uVar4;
              }
              if (local_158.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
              }
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                         (TDelegateBase<FNotThreadSafeDelegateMode> *)local_500);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_500,
                         (FWriteAccessScope *)&local_300);
              if ((local_4f8.DelegateSize != 0) &&
                 (local_4f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                (*(code *)**(undefined8 **)local_4f8.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_4f8,0,0,0x10);
                local_4f8.DelegateSize = 0;
              }
              if (local_300.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
              }
              if (local_4f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_4f8.DelegateAllocator);
              }
              this_00 = (FMRSWRecursiveAccessDetector *)local_500;
            }
            else {
              ::FName::FName(&local_3e0,"GetIntProperty");
              if (param_1->Name == local_3e0) {
                if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                FVar7 = GetRemappedPropertyName(this,(FName)local_f0);
                pFVar8 = NDIUObjectPropertyReaderLocal::FTypeHelper<int>::GetTypeDef(&local_c8);
                local_458 = *(FName *)FVar7;
                local_450.RegisteredTypeIndex =
                     FNiagaraTypeDefinitionHandle::Register(&local_450,pFVar8);
                local_378.Name = local_458;
                local_378.TypeDefHandle.RegisteredTypeIndex = local_450.RegisteredTypeIndex;
                uVar4 = NDIUObjectPropertyReaderLocal::FInstanceData_GameThread::AddProperty
                                  (param_2,&local_378);
                local_518 = (undefined1  [8])0x0;
                local_510.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                local_510.DelegateSize = 0;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_518,
                           (FWriteAccessScope *)&local_138);
                local_120 = &local_510;
                puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_510);
                if (puVar5 != (undefined8 *)0x0) {
                  *puVar5 = &
                            ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  uVar6 = FDelegateHandle::GenerateNewID();
                  puVar5[2] = uVar6;
                  *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceUObjectPropertyReader::GetVMExternalFunction'::`37'::<lambda_9>_>
                             ::_vftable_;
                  *(uint *)(puVar5 + 3) = uVar4;
                }
                if (local_138.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
                }
                TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                           (TDelegateBase<FNotThreadSafeDelegateMode> *)local_518);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_518,
                           (FWriteAccessScope *)&local_2e8);
                if ((local_510.DelegateSize != 0) &&
                   (local_510.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                  (*(code *)**(undefined8 **)local_510.DelegateAllocator)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)&local_510,0,0,0x10);
                  local_510.DelegateSize = 0;
                }
                if (local_2e8.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
                }
                if (local_510.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                  FMemory::Free((void *)local_510.DelegateAllocator);
                }
                this_00 = (FMRSWRecursiveAccessDetector *)local_518;
              }
              else {
                ::FName::FName(&local_3d0,"GetBoolProperty");
                if (param_1->Name != local_3d0) {
                  return;
                }
                if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                FVar7 = GetRemappedPropertyName(this,(FName)local_f8);
                pFVar8 = NDIUObjectPropertyReaderLocal::FTypeHelper<bool>::GetTypeDef(&local_b0);
                local_44c = *(FName *)FVar7;
                local_444.RegisteredTypeIndex =
                     FNiagaraTypeDefinitionHandle::Register(&local_444,pFVar8);
                local_368.Name = local_44c;
                local_368.TypeDefHandle.RegisteredTypeIndex = local_444.RegisteredTypeIndex;
                uVar4 = NDIUObjectPropertyReaderLocal::FInstanceData_GameThread::AddProperty
                                  (param_2,&local_368);
                local_530 = (undefined1  [8])0x0;
                local_528.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                local_528.DelegateSize = 0;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_530,
                           (FWriteAccessScope *)&local_218);
                local_200 = &local_528;
                puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_528);
                if (puVar5 != (undefined8 *)0x0) {
                  *puVar5 = &
                            ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  uVar6 = FDelegateHandle::GenerateNewID();
                  puVar5[2] = uVar6;
                  *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceUObjectPropertyReader::GetVMExternalFunction'::`41'::<lambda_10>_>
                             ::_vftable_;
                  *(uint *)(puVar5 + 3) = uVar4;
                }
                if (local_218.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
                }
                TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                           (TDelegateBase<FNotThreadSafeDelegateMode> *)local_530);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_530,
                           (FWriteAccessScope *)&local_2d0);
                if ((local_528.DelegateSize != 0) &&
                   (local_528.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                  (*(code *)**(undefined8 **)local_528.DelegateAllocator)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)&local_528,0,0,0x10);
                  local_528.DelegateSize = 0;
                }
                if (local_2d0.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
                }
                if (local_528.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                  FMemory::Free((void *)local_528.DelegateAllocator);
                }
                this_00 = (FMRSWRecursiveAccessDetector *)local_530;
              }
            }
          }
        }
      }
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  return;
}

// HasPreSimulateTick @ 148fbedc0

bool __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::HasPreSimulateTick
          (UNiagaraDataInterfaceUObjectPropertyReader *this)

{
  return true;
}

// InitPerInstanceData @ 148fc33f0

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

bool __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::InitPerInstanceData
          (UNiagaraDataInterfaceUObjectPropertyReader *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  FWeakObjectPtr FVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FWeakObjectPtr FVar6;
  int iVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar13;
  ForAnyElementType FVar14;
  FNiagaraVariableBase *pFVar15;
  FName FVar16;
  ulonglong uVar17;
  FName *pFVar18;
  longlong lVar19;
  longlong *plVar20;
  FName *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  undefined1 auStackY_368 [32];
  undefined1 local_338;
  undefined1 local_337;
  undefined1 local_336;
  undefined1 local_335;
  undefined1 local_334;
  undefined1 local_333;
  undefined1 local_332;
  undefined1 local_331;
  FWeakObjectPtr local_330;
  int local_328 [4];
  longlong local_318;
  FInstanceData_GameThread *local_310;
  longlong local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong local_2f0;
  FScriptContainerElement *local_2e8;
  FName local_2e0;
  FNiagaraTypeDefinitionHandle local_2d8;
  FName local_2d4;
  FNiagaraTypeDefinitionHandle local_2cc;
  FName local_2c8;
  FNiagaraTypeDefinitionHandle local_2c0;
  FName local_2bc;
  FNiagaraTypeDefinitionHandle local_2b4;
  FName local_2b0;
  FNiagaraTypeDefinitionHandle local_2a8;
  FName local_2a4;
  FNiagaraTypeDefinitionHandle local_29c;
  FName local_298;
  FNiagaraTypeDefinitionHandle local_290 [2];
  TObjectPtr<UObject>_u_0 local_288;
  ushort local_280;
  uchar local_27e;
  short local_27c;
  short local_27a;
  int local_278;
  uint local_274;
  FName local_270;
  FNiagaraTypeDefinitionHandle local_268 [2];
  TObjectPtr<UObject>_u_0 local_260;
  ushort local_258;
  uchar local_256;
  short local_254;
  short local_252;
  int local_250;
  uint local_24c;
  TObjectPtr<UObject>_u_0 local_248;
  ushort local_240;
  uchar local_23e;
  short local_23c;
  short local_23a;
  int local_238;
  uint local_234;
  TObjectPtr<UObject>_u_0 local_230;
  ushort local_228;
  uchar local_226;
  short local_224;
  short local_222;
  int local_220;
  uint local_21c;
  TObjectPtr<UObject>_u_0 local_218;
  ushort local_210;
  uchar local_20e;
  short local_20c;
  short local_20a;
  int local_208;
  uint local_204;
  TObjectPtr<UObject>_u_0 local_200;
  ushort local_1f8;
  uchar local_1f6;
  short local_1f4;
  short local_1f2;
  int local_1f0;
  uint local_1ec;
  TObjectPtr<UObject>_u_0 local_1e8;
  ushort local_1e0;
  uchar local_1de;
  short local_1dc;
  short local_1da;
  int local_1d8;
  uint local_1d4;
  TObjectPtr<UObject>_u_0 local_1d0;
  ushort local_1c8;
  uchar local_1c6;
  short local_1c4;
  short local_1c2;
  int local_1c0;
  uint local_1bc;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8 [2];
  FNiagaraVariableBase local_198;
  FNiagaraVariableBase local_188;
  FNiagaraVariableBase local_178;
  FNiagaraVariableBase local_168;
  longlong local_158;
  FNiagaraVariableBase local_148;
  FNiagaraVariableBase local_138;
  FNiagaraVariableBase local_128;
  FScriptContainerElement *local_118;
  TReferenceControllerBase<1> *local_110;
  FNiagaraSystemInstance *local_108;
  FNiagaraVariableBase local_f8;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  undefined1 local_c0 [24];
  FWeakObjectPtr local_a8;
  ForAnyElementType FStack_a0;
  int local_98;
  int iStack_94;
  ForAnyElementType local_90;
  FWeakObjectPtr local_88;
  FWeakObjectPtr local_78;
  ForAnyElementType FStack_70;
  int local_68;
  int iStack_64;
  ForAnyElementType local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  local_310 = param_1;
  local_108 = param_2;
  memset((void *)((longlong)param_1 + 0x18),0,0x138);
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x18),
                      &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x18) = iVar10;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x140) = 0;
  FNiagaraParameterDirectBinding<UObject_*>::Init
            (param_1,(FNiagaraParameterStore *)local_c0,
             (FNiagaraVariable *)&param_2->InstanceParameters);
  *(uint *)((longlong)param_1 + 0x60) = this->ChangeId;
  if (((uint)this->_padding_ >> 2 & 1) != 0) {
    iVar10 = (param_2->Emitters).ArrayNum;
    pFVar23 = (param_2->Emitters).AllocatorInstance.Data;
    local_330.ObjectIndex = 0;
    local_330.ObjectSerialNumber = 0;
    local_328[0] = 0;
    local_328[1] = 0;
    local_2e8 = pFVar23;
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
    pFVar25 = pFVar23 + (longlong)iVar10 * 0x10;
    local_118 = pFVar25;
    if (pFVar23 != pFVar25) {
      do {
        lVar26 = *(longlong *)pFVar23;
        if (((*(int *)(lVar26 + 0xd4) != 4) && (*(longlong *)(lVar26 + 0x28) != 0)) &&
           (*(char *)(lVar26 + 0xd1) == '\x01')) {
          lVar26 = *(longlong *)(lVar26 + 0x18);
          lVar19 = *(longlong *)(lVar26 + 0x68);
          local_158 = lVar26;
          if (*(longlong *)(lVar19 + 0x20) == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ScriptParametersMetadata.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraShared.h"
                               ,0x378,L"");
            if (bVar8) {
              pcVar2 = (code *)swi(3);
              uVar9 = (*pcVar2)();
              return (bool)uVar9;
            }
            if ((*(longlong *)(lVar19 + 0x20) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x408,L""), bVar8)) {
              pcVar2 = (code *)swi(3);
              uVar9 = (*pcVar2)();
              return (bool)uVar9;
            }
          }
          local_110 = *(TReferenceControllerBase<1> **)(lVar19 + 0x28);
          plVar20 = *(longlong **)(lVar19 + 0x20);
          if (local_110 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_110->SharedReferenceCount =
                 (atomic<int>)((int)local_110->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2f8 = plVar20;
          if ((plVar20 == (longlong *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar8)) {
            pcVar2 = (code *)swi(3);
            uVar9 = (*pcVar2)();
            return (bool)uVar9;
          }
          iVar10 = *(int *)(lVar26 + 0xb8);
          local_328[2] = 0;
          local_2f0 = 0;
          if (0 < iVar10) {
            do {
              lVar19 = local_2f0;
              iVar7 = local_328[2];
              uVar22 = 0;
              if (local_328[2] < iVar10) {
                uVar22 = (uint)~local_328[2] >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar2 = (code *)swi(3);
                uVar9 = (*pcVar2)();
                return (bool)uVar9;
              }
              if (((*(UNiagaraDataInterfaceUObjectPropertyReader **)
                     (*(longlong *)(lVar26 + 0xb0) + lVar19 * 8) == this) && (-1 < local_328[2])) &&
                 (local_328[2] < (int)plVar20[1])) {
                if ((iVar7 < 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar2 = (code *)swi(3);
                  uVar9 = (*pcVar2)();
                  return (bool)uVar9;
                }
                plVar20 = (longlong *)(*plVar20 + 0x28 + lVar19 * 0x38);
                lVar3 = plVar20[1];
                local_300 = plVar20;
                iVar10 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (4,4,(int)lVar3,(ForAnyElementType *)&local_330,local_328,
                                    local_328 + 1);
                memset((void *)((longlong)local_330 + (longlong)iVar10 * 4),0,
                       (longlong)(int)lVar3 << 2);
                iVar10 = (int)plVar20[1];
                uVar22 = 0;
                local_318 = 0;
                plVar20 = local_2f8;
                if (0 < iVar10) {
                  local_308 = 0;
                  do {
                    lVar19 = local_308;
                    lVar26 = local_318;
                    uVar24 = ~uVar22 >> 0x1f;
                    uVar11 = 0;
                    if ((int)uVar22 < iVar10) {
                      uVar11 = uVar24;
                    }
                    if ((uVar11 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar2 = (code *)swi(3);
                      uVar9 = (*pcVar2)();
                      return (bool)uVar9;
                    }
                    lVar3 = *local_300;
                    uVar11 = 0;
                    if ((int)uVar22 < local_328[0]) {
                      uVar11 = uVar24;
                    }
                    if ((uVar11 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar2 = (code *)swi(3);
                      uVar9 = (*pcVar2)();
                      return (bool)uVar9;
                    }
                    *(undefined4 *)((longlong)local_330 + lVar19) = 0xffffffff;
                    ::FName::FName(&local_e0,"GetFloatProperty");
                    if (*(FName *)(lVar3 + lVar26 * 0x50) == local_e0) {
                      if ((*(int *)(lVar3 + 0x20 + lVar26 * 0x50) < 1) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar2 = (code *)swi(3);
                        uVar9 = (*pcVar2)();
                        return (bool)uVar9;
                      }
                      iVar10 = (this->PropertyRemap).ArrayNum;
                      pFVar21 = (FName *)(this->PropertyRemap).AllocatorInstance.Data;
                      FVar16 = *(FName *)(*(longlong *)(lVar3 + 0x18 + lVar26 * 0x50) + 8);
                      pFVar18 = pFVar21 + (longlong)iVar10 * 2;
                      while( true ) {
                        if ((this->PropertyRemap).ArrayNum != iVar10) {
                          local_338 = 0;
                          `TCheckedPointerIterator<FNiagaraUObjectPropertyReaderRemap_const_,int,0>
                          ::operator!='::__l2::<lambda_1>::operator()(&local_338);
                        }
                        if (pFVar21 == pFVar18) goto LAB_148fc38b9;
                        if (*pFVar21 == FVar16) break;
                        pFVar21 = pFVar21 + 2;
                      }
                      FVar16 = pFVar21[1];
LAB_148fc38b9:
                      local_260 = FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0;
                      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                         (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 !=
                          (UObject *)0x0)) {
                        UE::GC::MarkAsReachable
                                  ((UObject *)
                                   FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0);
                      }
                      local_258 = FNiagaraTypeDefinition::FloatDef.UnderlyingType;
                      local_256 = FNiagaraTypeDefinition::FloatDef.Flags;
                      local_254 = FNiagaraTypeDefinition::FloatDef.Size;
                      local_252 = FNiagaraTypeDefinition::FloatDef.Alignment;
                      local_250 = FNiagaraTypeDefinition::FloatDef.RegisteredTypeDefIndex;
                      local_24c = FNiagaraTypeDefinition::FloatDef.UnderlyingTypePathNameHash;
                      local_2e0 = FVar16;
                      local_2d8.RegisteredTypeIndex =
                           FNiagaraTypeDefinitionHandle::Register
                                     (&local_2d8,(FNiagaraTypeDefinition *)&local_260.ObjectPtr);
                      pFVar15 = &local_198;
                      local_198.Name = local_2e0;
                      local_198.TypeDefHandle.RegisteredTypeIndex = local_2d8.RegisteredTypeIndex;
LAB_148fc41ea:
                      uVar12 = NDIUObjectPropertyReaderLocal::FInstanceData_GameThread::AddProperty
                                         (local_310,pFVar15);
                      uVar11 = 0;
                      if ((int)uVar22 < local_328[0]) {
                        uVar11 = uVar24;
                      }
                      if ((uVar11 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar2 = (code *)swi(3);
                        uVar9 = (*pcVar2)();
                        return (bool)uVar9;
                      }
                      *(uint *)((longlong)local_330 + local_318 * 4) = uVar12;
                    }
                    else {
                      ::FName::FName(&local_d8,"GetVec2Property");
                      if (*(FName *)(lVar3 + lVar26 * 0x50) == local_d8) {
                        if ((*(int *)(lVar3 + 0x20 + lVar26 * 0x50) < 1) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar2 = (code *)swi(3);
                          uVar9 = (*pcVar2)();
                          return (bool)uVar9;
                        }
                        iVar10 = (this->PropertyRemap).ArrayNum;
                        pFVar21 = (FName *)(this->PropertyRemap).AllocatorInstance.Data;
                        FVar16 = *(FName *)(*(longlong *)(lVar3 + 0x18 + lVar26 * 0x50) + 8);
                        pFVar18 = pFVar21 + (longlong)iVar10 * 2;
                        while( true ) {
                          if ((this->PropertyRemap).ArrayNum != iVar10) {
                            local_337 = 0;
                            `TCheckedPointerIterator<FNiagaraUObjectPropertyReaderRemap_const_,int,0>
                            ::operator!='::__l2::<lambda_1>::operator()(&local_337);
                          }
                          if (pFVar21 == pFVar18) goto LAB_148fc39ec;
                          if (*pFVar21 == FVar16) break;
                          pFVar21 = pFVar21 + 2;
                        }
                        FVar16 = pFVar21[1];
LAB_148fc39ec:
                        local_248 = FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0;
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0 !=
                            (UObject *)0x0)) {
                          UE::GC::MarkAsReachable
                                    ((UObject *)
                                     FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0);
                        }
                        local_240 = FNiagaraTypeDefinition::Vec2Def.UnderlyingType;
                        local_23e = FNiagaraTypeDefinition::Vec2Def.Flags;
                        local_23c = FNiagaraTypeDefinition::Vec2Def.Size;
                        local_23a = FNiagaraTypeDefinition::Vec2Def.Alignment;
                        local_238 = FNiagaraTypeDefinition::Vec2Def.RegisteredTypeDefIndex;
                        local_234 = FNiagaraTypeDefinition::Vec2Def.UnderlyingTypePathNameHash;
                        local_2d4 = FVar16;
                        local_2cc.RegisteredTypeIndex =
                             FNiagaraTypeDefinitionHandle::Register
                                       (&local_2cc,(FNiagaraTypeDefinition *)&local_248.ObjectPtr);
                        pFVar15 = &local_188;
                        local_188.Name = local_2d4;
                        local_188.TypeDefHandle.RegisteredTypeIndex = local_2cc.RegisteredTypeIndex;
                        goto LAB_148fc41ea;
                      }
                      ::FName::FName(&local_d0,"GetVec3Property");
                      if (*(FName *)(lVar3 + lVar26 * 0x50) == local_d0) {
                        if ((*(int *)(lVar3 + 0x20 + lVar26 * 0x50) < 1) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar2 = (code *)swi(3);
                          uVar9 = (*pcVar2)();
                          return (bool)uVar9;
                        }
                        iVar10 = (this->PropertyRemap).ArrayNum;
                        pFVar21 = (FName *)(this->PropertyRemap).AllocatorInstance.Data;
                        FVar16 = *(FName *)(*(longlong *)(lVar3 + 0x18 + lVar26 * 0x50) + 8);
                        pFVar18 = pFVar21 + (longlong)iVar10 * 2;
                        while( true ) {
                          if ((this->PropertyRemap).ArrayNum != iVar10) {
                            local_336 = 0;
                            `TCheckedPointerIterator<FNiagaraUObjectPropertyReaderRemap_const_,int,0>
                            ::operator!='::__l2::<lambda_1>::operator()(&local_336);
                          }
                          if (pFVar21 == pFVar18) goto LAB_148fc3b1f;
                          if (*pFVar21 == FVar16) break;
                          pFVar21 = pFVar21 + 2;
                        }
                        FVar16 = pFVar21[1];
LAB_148fc3b1f:
                        local_288 = FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0;
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 !=
                            (UObject *)0x0)) {
                          UE::GC::MarkAsReachable
                                    ((UObject *)
                                     FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0);
                        }
                        local_280 = FNiagaraTypeDefinition::Vec3Def.UnderlyingType;
                        local_27e = FNiagaraTypeDefinition::Vec3Def.Flags;
                        local_27c = FNiagaraTypeDefinition::Vec3Def.Size;
                        local_27a = FNiagaraTypeDefinition::Vec3Def.Alignment;
                        local_278 = FNiagaraTypeDefinition::Vec3Def.RegisteredTypeDefIndex;
                        local_274 = FNiagaraTypeDefinition::Vec3Def.UnderlyingTypePathNameHash;
                        local_2c8 = FVar16;
                        local_2c0.RegisteredTypeIndex =
                             FNiagaraTypeDefinitionHandle::Register
                                       (&local_2c0,(FNiagaraTypeDefinition *)&local_288.ObjectPtr);
                        pFVar15 = &local_178;
                        local_178.Name = local_2c8;
                        local_178.TypeDefHandle.RegisteredTypeIndex = local_2c0.RegisteredTypeIndex;
                        goto LAB_148fc41ea;
                      }
                      ::FName::FName(&local_c8,"GetVec4Property");
                      if (*(FName *)(lVar3 + lVar26 * 0x50) == local_c8) {
                        if ((*(int *)(lVar3 + 0x20 + lVar26 * 0x50) < 1) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar2 = (code *)swi(3);
                          uVar9 = (*pcVar2)();
                          return (bool)uVar9;
                        }
                        iVar10 = (this->PropertyRemap).ArrayNum;
                        pFVar21 = (FName *)(this->PropertyRemap).AllocatorInstance.Data;
                        FVar16 = *(FName *)(*(longlong *)(lVar3 + 0x18 + lVar26 * 0x50) + 8);
                        pFVar18 = pFVar21 + (longlong)iVar10 * 2;
                        while( true ) {
                          if ((this->PropertyRemap).ArrayNum != iVar10) {
                            local_335 = 0;
                            `TCheckedPointerIterator<FNiagaraUObjectPropertyReaderRemap_const_,int,0>
                            ::operator!='::__l2::<lambda_1>::operator()(&local_335);
                          }
                          if (pFVar21 == pFVar18) goto LAB_148fc3c59;
                          if (*pFVar21 == FVar16) break;
                          pFVar21 = pFVar21 + 2;
                        }
                        FVar16 = pFVar21[1];
LAB_148fc3c59:
                        local_230 = FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0;
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 !=
                            (UObject *)0x0)) {
                          UE::GC::MarkAsReachable
                                    ((UObject *)
                                     FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0);
                        }
                        local_228 = FNiagaraTypeDefinition::Vec4Def.UnderlyingType;
                        local_226 = FNiagaraTypeDefinition::Vec4Def.Flags;
                        local_224 = FNiagaraTypeDefinition::Vec4Def.Size;
                        local_222 = FNiagaraTypeDefinition::Vec4Def.Alignment;
                        local_220 = FNiagaraTypeDefinition::Vec4Def.RegisteredTypeDefIndex;
                        local_21c = FNiagaraTypeDefinition::Vec4Def.UnderlyingTypePathNameHash;
                        local_2bc = FVar16;
                        local_2b4.RegisteredTypeIndex =
                             FNiagaraTypeDefinitionHandle::Register
                                       (&local_2b4,(FNiagaraTypeDefinition *)&local_230.ObjectPtr);
                        pFVar15 = &local_168;
                        local_168.Name = local_2bc;
                        local_168.TypeDefHandle.RegisteredTypeIndex = local_2b4.RegisteredTypeIndex;
                        goto LAB_148fc41ea;
                      }
                      ::FName::FName(&local_1b8,"GetColorProperty");
                      if (*(FName *)(lVar3 + lVar26 * 0x50) == local_1b8) {
                        if ((*(int *)(lVar3 + 0x20 + lVar26 * 0x50) < 1) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar2 = (code *)swi(3);
                          uVar9 = (*pcVar2)();
                          return (bool)uVar9;
                        }
                        iVar10 = (this->PropertyRemap).ArrayNum;
                        pFVar21 = (FName *)(this->PropertyRemap).AllocatorInstance.Data;
                        FVar16 = *(FName *)(*(longlong *)(lVar3 + 0x18 + lVar26 * 0x50) + 8);
                        pFVar18 = pFVar21 + (longlong)iVar10 * 2;
                        while( true ) {
                          if ((this->PropertyRemap).ArrayNum != iVar10) {
                            local_334 = 0;
                            `TCheckedPointerIterator<FNiagaraUObjectPropertyReaderRemap_const_,int,0>
                            ::operator!='::__l2::<lambda_1>::operator()(&local_334);
                          }
                          if (pFVar21 == pFVar18) goto LAB_148fc3d8c;
                          if (*pFVar21 == FVar16) break;
                          pFVar21 = pFVar21 + 2;
                        }
                        FVar16 = pFVar21[1];
LAB_148fc3d8c:
                        local_218 = FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0;
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0 !=
                            (UObject *)0x0)) {
                          UE::GC::MarkAsReachable
                                    ((UObject *)
                                     FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0);
                        }
                        local_210 = FNiagaraTypeDefinition::ColorDef.UnderlyingType;
                        local_20e = FNiagaraTypeDefinition::ColorDef.Flags;
                        local_20c = FNiagaraTypeDefinition::ColorDef.Size;
                        local_20a = FNiagaraTypeDefinition::ColorDef.Alignment;
                        local_208 = FNiagaraTypeDefinition::ColorDef.RegisteredTypeDefIndex;
                        local_204 = FNiagaraTypeDefinition::ColorDef.UnderlyingTypePathNameHash;
                        local_2b0 = FVar16;
                        local_2a8.RegisteredTypeIndex =
                             FNiagaraTypeDefinitionHandle::Register
                                       (&local_2a8,(FNiagaraTypeDefinition *)&local_218.ObjectPtr);
                        pFVar15 = &local_f8;
                        local_f8.Name = local_2b0;
                        local_f8.TypeDefHandle.RegisteredTypeIndex = local_2a8.RegisteredTypeIndex;
                        goto LAB_148fc41ea;
                      }
                      ::FName::FName(&local_e8,"GetPositionProperty");
                      if (*(FName *)(lVar3 + lVar26 * 0x50) == local_e8) {
                        if ((*(int *)(lVar3 + 0x20 + lVar26 * 0x50) < 1) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar2 = (code *)swi(3);
                          uVar9 = (*pcVar2)();
                          return (bool)uVar9;
                        }
                        iVar10 = (this->PropertyRemap).ArrayNum;
                        pFVar21 = (FName *)(this->PropertyRemap).AllocatorInstance.Data;
                        FVar16 = *(FName *)(*(longlong *)(lVar3 + 0x18 + lVar26 * 0x50) + 8);
                        pFVar18 = pFVar21 + (longlong)iVar10 * 2;
                        while( true ) {
                          if ((this->PropertyRemap).ArrayNum != iVar10) {
                            local_333 = 0;
                            `TCheckedPointerIterator<FNiagaraUObjectPropertyReaderRemap_const_,int,0>
                            ::operator!='::__l2::<lambda_1>::operator()(&local_333);
                          }
                          if (pFVar21 == pFVar18) goto LAB_148fc3ebf;
                          if (*pFVar21 == FVar16) break;
                          pFVar21 = pFVar21 + 2;
                        }
                        FVar16 = pFVar21[1];
LAB_148fc3ebf:
                        local_200 = FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0
                        ;
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0 !=
                            (UObject *)0x0)) {
                          UE::GC::MarkAsReachable
                                    ((UObject *)
                                     FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.
                                     field0_0x0);
                        }
                        local_1f8 = FNiagaraTypeDefinition::PositionDef.UnderlyingType;
                        local_1f6 = FNiagaraTypeDefinition::PositionDef.Flags;
                        local_1f4 = FNiagaraTypeDefinition::PositionDef.Size;
                        local_1f2 = FNiagaraTypeDefinition::PositionDef.Alignment;
                        local_1f0 = FNiagaraTypeDefinition::PositionDef.RegisteredTypeDefIndex;
                        local_1ec = FNiagaraTypeDefinition::PositionDef.UnderlyingTypePathNameHash;
                        local_2a4 = FVar16;
                        local_29c.RegisteredTypeIndex =
                             FNiagaraTypeDefinitionHandle::Register
                                       (&local_29c,(FNiagaraTypeDefinition *)&local_200.ObjectPtr);
                        pFVar15 = &local_148;
                        local_148.Name = local_2a4;
                        local_148.TypeDefHandle.RegisteredTypeIndex = local_29c.RegisteredTypeIndex;
                        goto LAB_148fc41ea;
                      }
                      ::FName::FName(&local_1b0,"GetIntProperty");
                      if (*(FName *)(lVar3 + lVar26 * 0x50) == local_1b0) {
                        if ((*(int *)(lVar3 + 0x20 + lVar26 * 0x50) < 1) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar2 = (code *)swi(3);
                          uVar9 = (*pcVar2)();
                          return (bool)uVar9;
                        }
                        iVar10 = (this->PropertyRemap).ArrayNum;
                        pFVar21 = (FName *)(this->PropertyRemap).AllocatorInstance.Data;
                        FVar16 = *(FName *)(*(longlong *)(lVar3 + 0x18 + lVar26 * 0x50) + 8);
                        pFVar18 = pFVar21 + (longlong)iVar10 * 2;
                        while( true ) {
                          if ((this->PropertyRemap).ArrayNum != iVar10) {
                            local_332 = 0;
                            `TCheckedPointerIterator<FNiagaraUObjectPropertyReaderRemap_const_,int,0>
                            ::operator!='::__l2::<lambda_1>::operator()(&local_332);
                          }
                          if (pFVar21 == pFVar18) goto LAB_148fc3ff9;
                          if (*pFVar21 == FVar16) break;
                          pFVar21 = pFVar21 + 2;
                        }
                        FVar16 = pFVar21[1];
LAB_148fc3ff9:
                        local_1e8 = FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0;
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 !=
                            (UObject *)0x0)) {
                          UE::GC::MarkAsReachable
                                    ((UObject *)
                                     FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0);
                        }
                        local_1e0 = FNiagaraTypeDefinition::IntDef.UnderlyingType;
                        local_1de = FNiagaraTypeDefinition::IntDef.Flags;
                        local_1dc = FNiagaraTypeDefinition::IntDef.Size;
                        local_1da = FNiagaraTypeDefinition::IntDef.Alignment;
                        local_1d8 = FNiagaraTypeDefinition::IntDef.RegisteredTypeDefIndex;
                        local_1d4 = FNiagaraTypeDefinition::IntDef.UnderlyingTypePathNameHash;
                        local_270 = FVar16;
                        local_268[0].RegisteredTypeIndex =
                             FNiagaraTypeDefinitionHandle::Register
                                       (local_268,(FNiagaraTypeDefinition *)&local_1e8.ObjectPtr);
                        pFVar15 = &local_138;
                        local_138.Name = local_270;
                        local_138.TypeDefHandle.RegisteredTypeIndex =
                             local_268[0].RegisteredTypeIndex;
                        goto LAB_148fc41ea;
                      }
                      ::FName::FName(local_1a8,"GetBoolProperty");
                      if (*(FName *)(lVar3 + lVar26 * 0x50) == local_1a8[0]) {
                        if ((*(int *)(lVar3 + 0x20 + lVar26 * 0x50) < 1) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar2 = (code *)swi(3);
                          uVar9 = (*pcVar2)();
                          return (bool)uVar9;
                        }
                        iVar10 = (this->PropertyRemap).ArrayNum;
                        pFVar21 = (FName *)(this->PropertyRemap).AllocatorInstance.Data;
                        FVar16 = *(FName *)(*(longlong *)(lVar3 + 0x18 + lVar26 * 0x50) + 8);
                        pFVar18 = pFVar21 + (longlong)iVar10 * 2;
                        while( true ) {
                          if ((this->PropertyRemap).ArrayNum != iVar10) {
                            local_331 = 0;
                            `TCheckedPointerIterator<FNiagaraUObjectPropertyReaderRemap_const_,int,0>
                            ::operator!='::__l2::<lambda_1>::operator()(&local_331);
                          }
                          if (pFVar21 == pFVar18) goto LAB_148fc4149;
                          if (*pFVar21 == FVar16) break;
                          pFVar21 = pFVar21 + 2;
                        }
                        FVar16 = pFVar21[1];
LAB_148fc4149:
                        local_1d0 = FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0;
                        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                           (FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0 !=
                            (UObject *)0x0)) {
                          UE::GC::MarkAsReachable
                                    ((UObject *)
                                     FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0);
                        }
                        local_1c8 = FNiagaraTypeDefinition::BoolDef.UnderlyingType;
                        local_1c6 = FNiagaraTypeDefinition::BoolDef.Flags;
                        local_1c4 = FNiagaraTypeDefinition::BoolDef.Size;
                        local_1c2 = FNiagaraTypeDefinition::BoolDef.Alignment;
                        local_1c0 = FNiagaraTypeDefinition::BoolDef.RegisteredTypeDefIndex;
                        local_1bc = FNiagaraTypeDefinition::BoolDef.UnderlyingTypePathNameHash;
                        local_298 = FVar16;
                        local_290[0].RegisteredTypeIndex =
                             FNiagaraTypeDefinitionHandle::Register
                                       (local_290,(FNiagaraTypeDefinition *)&local_1d0.ObjectPtr);
                        pFVar15 = &local_128;
                        local_128.Name = local_298;
                        local_128.TypeDefHandle.RegisteredTypeIndex =
                             local_290[0].RegisteredTypeIndex;
                        goto LAB_148fc41ea;
                      }
                    }
                    uVar22 = uVar22 + 1;
                    local_308 = local_308 + 4;
                    local_318 = local_318 + 1;
                    iVar10 = (int)local_300[1];
                    lVar19 = local_2f0;
                    plVar20 = local_2f8;
                    lVar26 = local_158;
                  } while ((int)uVar22 < iVar10);
                }
              }
              iVar10 = *(int *)(lVar26 + 0xb8);
              local_328[2] = local_328[2] + 1;
              local_2f0 = lVar19 + 1;
              pFVar23 = local_2e8;
              pFVar25 = local_118;
            } while (local_328[2] < iVar10);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_110);
        }
        pFVar23 = pFVar23 + 0x10;
        param_2 = local_108;
        local_2e8 = pFVar23;
      } while (pFVar23 != pFVar25);
    }
    FVar1 = (FWeakObjectPtr)this->_padding_;
    if ((FVar1 == (FWeakObjectPtr)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
    FVar6 = local_330;
    uVar4 = *(undefined4 *)&param_2->ID;
    uVar5 = *(undefined4 *)((longlong)&param_2->ID + 4);
    iVar7 = local_328[1];
    iVar10 = local_328[0];
    local_330.ObjectIndex = 0;
    local_330.ObjectSerialNumber = 0;
    local_328[0] = 0;
    local_328[1] = 0;
    local_c0._8_4_ = 0;
    local_c0._12_4_ = 0;
    local_90.Data = FMemory::Malloc(0x28,8);
    *(FWeakObjectPtr *)((longlong)local_90.Data + 8) = FVar1;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x10))->ObjectIndex = uVar4;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x10))->ObjectSerialNumber = uVar5;
    *(undefined ***)local_90.Data =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`UNiagaraDataInterfaceUObjectPropertyReader::InitPerInstanceData'::`5'::<lambda_1>,1,1>
          ::_vftable_;
    *(FWeakObjectPtr *)((longlong)local_90.Data + 0x18) = FVar6;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x20))->ObjectIndex = iVar10;
    ((FWeakObjectPtr *)((longlong)local_90.Data + 0x20))->ObjectSerialNumber = iVar7;
    if ((FWeakObjectPtr *)local_90.Data != (FWeakObjectPtr *)&DAT_fffffffffffffff8) {
      local_c0._8_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UNiagaraDataInterfaceUObjectPropertyReader::InitPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
           ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceUObjectPropertyReader::InitPerInstanceData_::__l5::TSTR_NDIUObjectPropertyReader_InitRT724>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)(local_c0 + 8));
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88.ObjectIndex = local_c0._8_4_;
      local_88.ObjectSerialNumber = local_c0._12_4_;
      local_60.Data = local_90.Data;
      local_90.Data = (FScriptContainerElement *)0x0;
      local_78 = local_a8;
      FStack_70.Data = FStack_a0.Data;
      local_68 = local_98;
      iStack_64 = iStack_94;
      local_c0._8_4_ = 0;
      local_c0._12_4_ = 0;
      local_58 = 2;
      pFVar13 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceUObjectPropertyReader::InitPerInstanceData'::__l5::TSTR_NDIUObjectPropertyReader_InitRT724>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)&local_88,pFVar13);
      uVar17 = (ulonglong)local_58;
      if ((2 < uVar17) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar8)) {
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return (bool)uVar9;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_88 != (FWeakObjectPtr)0x0) {
          FVar14.Data = (FScriptContainerElement *)&local_78;
          if ((FWeakObjectPtr *)local_60.Data != (FWeakObjectPtr *)0x0) {
            FVar14.Data = local_60.Data;
          }
          (**(code **)((longlong)*(FWeakObjectPtr *)FVar14.Data + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17])(&local_88);
      }
    }
    if ((FWeakObjectPtr)local_c0._8_8_ != (FWeakObjectPtr)0x0) {
      FVar14.Data = (FScriptContainerElement *)&local_a8;
      if ((FWeakObjectPtr *)local_90.Data != (FWeakObjectPtr *)0x0) {
        FVar14.Data = local_90.Data;
      }
      (**(code **)((longlong)*(FWeakObjectPtr *)FVar14.Data + 0x10))();
    }
    if (local_330 != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_330);
    }
  }
  return true;
}

// PerInstanceDataSize @ 148fc6400

int __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::PerInstanceDataSize
          (UNiagaraDataInterfaceUObjectPropertyReader *this)

{
  return 0x150;
}

// PerInstanceTick @ 148fc64b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UNiagaraDataInterfaceUObjectPropertyReader::PerInstanceTick
          (UNiagaraDataInterfaceUObjectPropertyReader *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  ENDIObjectPropertyReaderSourceMode EVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  TObjectPtr<USceneComponent>_u_0 TVar12;
  USceneComponent *this_00;
  AActor *pAVar13;
  UClass *pUVar14;
  TObjectPtr<USceneComponent>_u_0 TVar15;
  longlong lVar16;
  TTransform<double> *pTVar17;
  undefined7 extraout_var;
  double *pdVar18;
  undefined8 uVar19;
  longlong *plVar20;
  undefined4 uVar21;
  uint uVar22;
  TObjectPtr<UClass>_u_0 *pTVar23;
  char *pcVar24;
  int *piVar25;
  undefined8 *puVar26;
  TObjectPtr<USceneComponent>_u_0 TVar27;
  int *piVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 local_res10 [8];
  FNiagaraSystemInstance *local_res18;
  undefined1 local_188 [8];
  TObjectPtr<USceneComponent>_u_0 local_180;
  TObjectPtr<USceneComponent>_u_0 local_178;
  int *local_170;
  FString local_168;
  TObjectPtr<UClass>_u_0 local_158;
  FName local_150;
  FName local_148;
  TObjectPtr<UClass>_u_0 local_140;
  longlong local_138;
  FString local_130;
  FString local_120;
  FNiagaraLWCConverter local_110;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  undefined7 extraout_var_00;
  
  local_res18 = param_2;
  if (((param_1 == (void *)0x0) || (param_2 == (FNiagaraSystemInstance *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PerInstanceData && SystemInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceUObjectPropertyReader.cpp"
                         ,0x307,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return (bool)uVar10;
  }
  if (*(uint *)((longlong)param_1 + 0x60) != this->ChangeId) {
    return true;
  }
  TVar27.DebugPtr = (USceneComponent *)0x0;
  if ((this->SourceMode == Binding) ||
     (TVar12.DebugPtr = TVar27.DebugPtr,
     (this->SourceMode - BindingThenAttachParentActor & 0xfd) == 0)) {
    if (*(int *)param_1 == -1) {
      local_180.DebugPtr = (USceneComponent *)0x0;
LAB_148fc6579:
      TVar12.DebugPtr = (USceneComponent *)TSoftObjectPtr<AActor>::Get(&this->SourceActor);
      if ((AActor *)TVar12.DebugPtr == (AActor *)0x0) goto LAB_148fc658a;
    }
    else {
      FNiagaraParameterStore::GetUObject
                (*(FNiagaraParameterStore **)((longlong)param_1 + 8),(int)&local_180);
      TVar12 = local_180;
      if ((AActor *)local_180.DebugPtr == (AActor *)0x0) goto LAB_148fc6579;
    }
  }
  else {
LAB_148fc658a:
    EVar1 = this->SourceMode;
    if ((EVar1 == AttachParent) || (EVar1 == BindingThenAttachParent)) {
      TVar12.DebugPtr = (USceneComponent *)FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr);
    }
    else if (((byte)(EVar1 - AttachParentActor) < 2) &&
            (this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr),
            this_00 != (USceneComponent *)0x0)) {
      TVar12.DebugPtr = (USceneComponent *)USceneComponent::GetAttachParentActor(this_00);
    }
  }
  pAVar13 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x38));
  if (pAVar13 != (AActor *)TVar12.DebugPtr) {
    local_178 = TVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       ((AActor *)TVar12.DebugPtr == (AActor *)0x0)) {
      FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0x38),(FObjectPtr)&local_178)
      ;
      TVar15.DebugPtr = (USceneComponent *)0x0;
      if ((AActor *)TVar12.DebugPtr != (AActor *)0x0) goto LAB_148fc661f;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)TVar12.DebugPtr);
      FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0x38),(FObjectPtr)&local_178)
      ;
LAB_148fc661f:
      pUVar14 = Z_Construct_UClass_AActor_NoRegister();
      iVar11 = (int)pUVar14->_padding_;
      TVar15.DebugPtr = TVar27.DebugPtr;
      if ((iVar11 <= *(int *)((TVar12.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
          &pUVar14->_padding_)) {
        TVar2 = (TObjectPtr<UClass>_u_0)(this->SourceActorComponentClass).field0_0x0.DebugPtr;
        if (TVar2.DebugPtr == (UClass *)0x0) {
          TVar15 = (TObjectPtr<USceneComponent>_u_0)
                   *(TObjectPtr<USceneComponent>_u_0 *)
                    &((TVar12.DebugPtr)->TransformUpdated).field_0x8;
        }
        else {
          pcVar3 = *(code **)((TVar12.DebugPtr)->_padding_ + 0x738);
          local_158 = TVar2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
          }
          TVar15.DebugPtr = (USceneComponent *)(*pcVar3)(TVar12.DebugPtr,&local_158);
        }
      }
    }
    iVar11 = *(int *)((longlong)param_1 + 0x48);
    piVar25 = (int *)(*(longlong *)((longlong)param_1 + 0x40) + 0x34);
    piVar28 = (int *)((longlong)iVar11 * 0x70 + *(longlong *)((longlong)param_1 + 0x40));
    local_170 = piVar28;
    while( true ) {
      if (*(int *)((longlong)param_1 + 0x48) != iVar11) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<NDIUObjectPropertyReaderLocal::FNDIPropertyGetter,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      param_2 = local_res18;
      if (piVar25 + -0xd == piVar28) break;
      piVar25[-9] = 0;
      piVar25[-8] = 0;
      piVar25[-7] = 0;
      piVar25[-6] = 0;
      piVar25[-5] = 0;
      piVar25[-4] = 0;
      piVar25[-1] = 0;
      if (*piVar25 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,(ForAnyElementType *)(piVar25 + -3),0,piVar25);
      }
      if (*(longlong *)(piVar25 + 3) != 0) {
        plVar20 = *(longlong **)(piVar25 + 0xd);
        if (plVar20 == (longlong *)0x0) {
          plVar20 = (longlong *)(piVar25 + 7);
        }
        (**(code **)(*plVar20 + 0x10))();
        piVar25[3] = 0;
        piVar25[4] = 0;
      }
      if (((AActor *)TVar12.DebugPtr != (AActor *)0x0) &&
         (NDIUObjectPropertyReaderLocal::BindPropertyGetter
                    ((FNDIPropertyGetter *)(piVar25 + -0xd),(UObject *)TVar12.DebugPtr),
         *(longlong *)(piVar25 + 3) == 0)) {
        if ((AActor *)TVar15.DebugPtr != (AActor *)0x0) {
          NDIUObjectPropertyReaderLocal::BindPropertyGetter
                    ((FNDIPropertyGetter *)(piVar25 + -0xd),(UObject *)TVar15.DebugPtr);
        }
        if (((*(longlong *)(piVar25 + 3) == 0) &&
            (bVar9 = FNiagaraUtilities::LogVerboseWarnings(), bVar9)) &&
           (2 < (byte)LogNiagara._0_1_)) {
          if ((AActor *)TVar15.DebugPtr == (AActor *)0x0) {
            ::FString::FString(&local_168,L"None");
          }
          else {
            local_150 = (FName)(TVar15.DebugPtr)->_padding_;
            ::FName::ToString(&local_150,&local_168);
          }
          local_148 = (FName)(TVar12.DebugPtr)->_padding_;
          ::FName::ToString(&local_148,&local_130);
          ::FName::ToString((FName *)(piVar25 + -0xd),&local_120);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          piVar28 = local_170;
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
            piVar28 = local_170;
          }
        }
      }
      piVar25 = piVar25 + 0x1c;
    }
  }
  if (*(char *)((longlong)param_1 + 0xd0) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xd0) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x140) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x140) = 0;
  }
  if ((AActor *)TVar12.DebugPtr == (AActor *)0x0) {
    return false;
  }
  pUVar14 = Z_Construct_UClass_AActor_NoRegister();
  pTVar23 = (TObjectPtr<UClass>_u_0 *)(TVar12.DebugPtr)->_padding_;
  iVar11 = (int)pUVar14->_padding_;
  if ((*(int *)(pTVar23 + 7) < iVar11) ||
     ((longlong *)(&(pTVar23[6].DebugPtr)->_padding_)[iVar11] != &pUVar14->_padding_)) {
    pUVar14 = Z_Construct_UClass_USceneComponent_NoRegister();
    pcVar24 = (char *)(TVar12.DebugPtr)->_padding_;
    iVar11 = (int)pUVar14->_padding_;
    if ((*(int *)(pcVar24 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pcVar24 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar14->_padding_)) goto LAB_148fc6bb2;
    pdVar18 = (double *)((longlong)param_1 + 0x70);
    if (&(TVar12.DebugPtr)->ComponentToWorld != (TTransform<double> *)pdVar18) {
      dVar8 = ((TVar12.DebugPtr)->ComponentToWorld).Rotation.XY.m128d_f64[1];
      *pdVar18 = ((TVar12.DebugPtr)->ComponentToWorld).Rotation.XY.m128d_f64[0];
      *(double *)((longlong)param_1 + 0x78) = dVar8;
      dVar8 = ((TVar12.DebugPtr)->ComponentToWorld).Rotation.ZW.m128d_f64[1];
      *(double *)((longlong)param_1 + 0x80) =
           ((TVar12.DebugPtr)->ComponentToWorld).Rotation.ZW.m128d_f64[0];
      *(double *)((longlong)param_1 + 0x88) = dVar8;
      dVar8 = ((TVar12.DebugPtr)->ComponentToWorld).Translation.XY.m128d_f64[1];
      *(double *)((longlong)param_1 + 0x90) =
           ((TVar12.DebugPtr)->ComponentToWorld).Translation.XY.m128d_f64[0];
      *(double *)((longlong)param_1 + 0x98) = dVar8;
      dVar8 = ((TVar12.DebugPtr)->ComponentToWorld).Translation.ZW.m128d_f64[1];
      *(double *)((longlong)param_1 + 0xa0) =
           ((TVar12.DebugPtr)->ComponentToWorld).Translation.ZW.m128d_f64[0];
      *(double *)((longlong)param_1 + 0xa8) = dVar8;
      dVar8 = ((TVar12.DebugPtr)->ComponentToWorld).Scale3D.XY.m128d_f64[1];
      *(double *)((longlong)param_1 + 0xb0) =
           ((TVar12.DebugPtr)->ComponentToWorld).Scale3D.XY.m128d_f64[0];
      *(double *)((longlong)param_1 + 0xb8) = dVar8;
      dVar8 = ((TVar12.DebugPtr)->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
      *(double *)((longlong)param_1 + 0xc0) =
           ((TVar12.DebugPtr)->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
      *(double *)((longlong)param_1 + 200) = dVar8;
      *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
    }
    if (*(char *)((longlong)param_1 + 0xd0) == '\0') {
      pcVar24 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h";
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      pdVar18 = (double *)CONCAT71(extraout_var_00,bVar9);
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
    }
    auVar31._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)param_1 + 0xc4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)((longlong)param_1 + 0xc0));
    auVar31._8_4_ = _UNK_15061cc88 & *(uint *)((longlong)param_1 + 200);
    auVar31._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)param_1 + 0xcc);
    lVar16 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
              (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)param_1 + 0xbc),
                               _UNK_15061cc88 & *(uint *)((longlong)param_1 + 0xb8)));
    lVar29 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar31._8_8_);
    auVar5._8_4_ = (int)lVar29;
    auVar5._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar31._0_8_);
    auVar5._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
    uVar22 = movmskpd((int)pcVar24,auVar5);
    auVar7._8_4_ = (int)lVar16;
    auVar7._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                    (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                     *(uint *)((longlong)param_1 + 0xb4),
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                     *(uint *)((longlong)param_1 + 0xb0)));
    auVar7._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    iVar11 = movmskpd((int)pdVar18,auVar7);
    if ((uVar22 & 0x3fffffff) == 0 && iVar11 == 0) {
      local_f8.Rotation.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      local_f8.Rotation.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      local_f8.Rotation.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      local_f8.Rotation.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      local_f8.Translation.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      local_f8.Translation.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      local_f8.Scale3D.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      local_f8.Scale3D.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      local_f8.Scale3D.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_f8.Scale3D.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_f8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast
                ((TTransform<double> *)((longlong)param_1 + 0x70),&local_98);
      local_f8.Scale3D.ZW.m128d_f64[0]._0_4_ = local_98.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_f8.Scale3D.ZW.m128d_f64[0]._4_4_ = local_98.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ = local_98.Scale3D.ZW.m128d_f64[1]._0_4_;
      local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ = local_98.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_f8.Scale3D.XY.m128d_f64[0]._0_4_ = local_98.Scale3D.XY.m128d_f64[0]._0_4_;
      local_f8.Scale3D.XY.m128d_f64[0]._4_4_ = local_98.Scale3D.XY.m128d_f64[0]._4_4_;
      local_f8.Scale3D.XY.m128d_f64[1]._0_4_ = local_98.Scale3D.XY.m128d_f64[1]._0_4_;
      local_f8.Scale3D.XY.m128d_f64[1]._4_4_ = local_98.Scale3D.XY.m128d_f64[1]._4_4_;
      local_f8.Translation.ZW.m128d_f64[0]._0_4_ = local_98.Translation.ZW.m128d_f64[0]._0_4_;
      local_f8.Translation.ZW.m128d_f64[0]._4_4_ = local_98.Translation.ZW.m128d_f64[0]._4_4_;
      local_f8.Translation.ZW.m128d_f64[1]._0_4_ = local_98.Translation.ZW.m128d_f64[1]._0_4_;
      local_f8.Translation.ZW.m128d_f64[1]._4_4_ = local_98.Translation.ZW.m128d_f64[1]._4_4_;
      local_f8.Translation.XY.m128d_f64 = local_98.Translation.XY.m128d_f64;
      local_f8.Rotation.ZW.m128d_f64[0]._0_4_ = local_98.Rotation.ZW.m128d_f64[0]._0_4_;
      local_f8.Rotation.ZW.m128d_f64[0]._4_4_ = local_98.Rotation.ZW.m128d_f64[0]._4_4_;
      local_f8.Rotation.ZW.m128d_f64[1]._0_4_ = local_98.Rotation.ZW.m128d_f64[1]._0_4_;
      local_f8.Rotation.ZW.m128d_f64[1]._4_4_ = local_98.Rotation.ZW.m128d_f64[1]._4_4_;
      local_f8.Rotation.XY.m128d_f64[0]._0_4_ = local_98.Rotation.XY.m128d_f64[0]._0_4_;
      local_f8.Rotation.XY.m128d_f64[0]._4_4_ = local_98.Rotation.XY.m128d_f64[0]._4_4_;
      local_f8.Rotation.XY.m128d_f64[1]._0_4_ = local_98.Rotation.XY.m128d_f64[1]._0_4_;
      local_f8.Rotation.XY.m128d_f64[1]._4_4_ = local_98.Rotation.XY.m128d_f64[1]._4_4_;
    }
    pTVar17 = &local_98;
  }
  else {
    TVar2 = (TObjectPtr<UClass>_u_0)(this->SourceActorComponentClass).field0_0x0.DebugPtr;
    if (TVar2.DebugPtr == (UClass *)0x0) {
      lVar16 = *(longlong *)&((TVar12.DebugPtr)->TransformUpdated).field_0x8;
    }
    else {
      pcVar3 = *(code **)((TVar12.DebugPtr)->_padding_ + 0x738);
      local_140 = TVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      pTVar23 = &local_140;
      lVar16 = (*pcVar3)(TVar12.DebugPtr);
    }
    if (lVar16 == 0) {
LAB_148fc6930:
      lVar16 = *(longlong *)&((TVar12.DebugPtr)->TransformUpdated).field_0x8;
      if (lVar16 == 0) {
        pTVar17 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar17 = (TTransform<double> *)(lVar16 + 0x1f0);
      }
    }
    else {
      pUVar14 = Z_Construct_UClass_USceneComponent_NoRegister();
      pTVar23 = *(TObjectPtr<UClass>_u_0 **)(lVar16 + 0x10);
      iVar11 = (int)pUVar14->_padding_;
      if ((*(int *)(pTVar23 + 7) < iVar11) ||
         ((longlong *)(&(pTVar23[6].DebugPtr)->_padding_)[iVar11] != &pUVar14->_padding_))
      goto LAB_148fc6930;
      pTVar17 = (TTransform<double> *)(lVar16 + 0x1f0);
    }
    uVar21 = SUB84(pTVar23,0);
    if (pTVar17 != (TTransform<double> *)((longlong)param_1 + 0x70)) {
      dVar8 = (pTVar17->Rotation).XY.m128d_f64[1];
      (((TTransform<double> *)((longlong)param_1 + 0x70))->Rotation).XY.m128d_f64[0] =
           (pTVar17->Rotation).XY.m128d_f64[0];
      *(double *)((longlong)param_1 + 0x78) = dVar8;
      dVar8 = (pTVar17->Rotation).ZW.m128d_f64[1];
      *(double *)((longlong)param_1 + 0x80) = (pTVar17->Rotation).ZW.m128d_f64[0];
      *(double *)((longlong)param_1 + 0x88) = dVar8;
      dVar8 = (pTVar17->Translation).XY.m128d_f64[1];
      *(double *)((longlong)param_1 + 0x90) = (pTVar17->Translation).XY.m128d_f64[0];
      *(double *)((longlong)param_1 + 0x98) = dVar8;
      dVar8 = (pTVar17->Translation).ZW.m128d_f64[1];
      *(double *)((longlong)param_1 + 0xa0) = (pTVar17->Translation).ZW.m128d_f64[0];
      *(double *)((longlong)param_1 + 0xa8) = dVar8;
      dVar8 = (pTVar17->Scale3D).XY.m128d_f64[1];
      *(double *)((longlong)param_1 + 0xb0) = (pTVar17->Scale3D).XY.m128d_f64[0];
      *(double *)((longlong)param_1 + 0xb8) = dVar8;
      dVar8 = (pTVar17->Scale3D).ZW.m128d_f64[1];
      *(double *)((longlong)param_1 + 0xc0) = (pTVar17->Scale3D).ZW.m128d_f64[0];
      *(double *)((longlong)param_1 + 200) = dVar8;
      *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
    }
    if (*(char *)((longlong)param_1 + 0xd0) == '\0') {
      uVar21 = 0x50621540;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      pTVar17 = (TTransform<double> *)CONCAT71(extraout_var,bVar9);
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
    }
    auVar30._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)param_1 + 0xc4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)((longlong)param_1 + 0xc0));
    auVar30._8_4_ = _UNK_15061cc88 & *(uint *)((longlong)param_1 + 200);
    auVar30._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)param_1 + 0xcc);
    lVar16 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
              (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)param_1 + 0xbc),
                               _UNK_15061cc88 & *(uint *)((longlong)param_1 + 0xb8)));
    lVar29 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar30._8_8_);
    auVar4._8_4_ = (int)lVar29;
    auVar4._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar30._0_8_);
    auVar4._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
    uVar22 = movmskpd(uVar21,auVar4);
    auVar6._8_4_ = (int)lVar16;
    auVar6._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                    (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                     *(uint *)((longlong)param_1 + 0xb4),
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                     *(uint *)((longlong)param_1 + 0xb0)));
    auVar6._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    iVar11 = movmskpd((int)pTVar17,auVar6);
    if ((uVar22 & 0x3fffffff) == 0 && iVar11 == 0) {
      local_f8.Rotation.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      local_f8.Rotation.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      pTVar17 = &local_f8;
      local_f8.Rotation.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      local_f8.Rotation.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      local_f8.Translation.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      local_f8.Translation.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      local_f8.Scale3D.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      local_f8.Scale3D.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      local_f8.Scale3D.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_f8.Scale3D.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
      local_f8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast
                ((TTransform<double> *)((longlong)param_1 + 0x70),&local_f8);
      pTVar17 = &local_f8;
    }
  }
  if (pTVar17 != (TTransform<double> *)((longlong)param_1 + 0xe0)) {
    *(undefined4 *)(((TTransform<double> *)((longlong)param_1 + 0xe0))->Rotation).XY.m128d_f64 =
         local_f8.Rotation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)param_1 + 0xe4) = local_f8.Rotation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((longlong)param_1 + 0xe8) = local_f8.Rotation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)param_1 + 0xec) = local_f8.Rotation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)((longlong)param_1 + 0xf0) = local_f8.Rotation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)param_1 + 0xf4) = local_f8.Rotation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((longlong)param_1 + 0xf8) = local_f8.Rotation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)param_1 + 0xfc) = local_f8.Rotation.ZW.m128d_f64[1]._4_4_;
    *(double (*) [2])((longlong)param_1 + 0x100) = local_f8.Translation.XY.m128d_f64;
    *(undefined4 *)((longlong)param_1 + 0x110) = local_f8.Translation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x114) = local_f8.Translation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((longlong)param_1 + 0x118) = local_f8.Translation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x11c) = local_f8.Translation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)((longlong)param_1 + 0x120) = local_f8.Scale3D.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x124) = local_f8.Scale3D.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((longlong)param_1 + 0x128) = local_f8.Scale3D.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)param_1 + 300) = local_f8.Scale3D.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)((longlong)param_1 + 0x130) = local_f8.Scale3D.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x134) = local_f8.Scale3D.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((longlong)param_1 + 0x138) = local_f8.Scale3D.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x13c) = local_f8.Scale3D.ZW.m128d_f64[1]._4_4_;
    *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  }
LAB_148fc6bb2:
  FNiagaraSystemInstance::GetLWCConverter(param_2,&local_110,false);
  lVar16 = *(longlong *)((longlong)param_1 + 0x40);
  iVar11 = *(int *)((longlong)param_1 + 0x48);
  puVar26 = (undefined8 *)(lVar16 + 0x40);
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x48) != iVar11) {
      `TCheckedPointerIterator<NDIUObjectPropertyReaderLocal::FNDIPropertyGetter,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_188);
    }
    if (puVar26 + -8 == (undefined8 *)((longlong)iVar11 * 0x70 + lVar16)) break;
    if ((void *)*puVar26 != (void *)0x0) {
      local_138 = (ulonglong)*(uint *)((longlong)puVar26 + -0x34) +
                  *(longlong *)((longlong)param_1 + 0x50);
      UE::Core::Private::Function::CheckCallable((void *)*puVar26);
      plVar20 = (longlong *)puVar26[5];
      pcVar3 = (code *)*puVar26;
      if (plVar20 == (longlong *)0x0) {
        plVar20 = puVar26 + 2;
      }
      uVar19 = (**(code **)(*plVar20 + 8))();
      (*pcVar3)(uVar19,&local_110,&local_138);
    }
    puVar26 = puVar26 + 0xe;
  }
  return false;
}

// PostInitProperties @ 148fc73b0

void __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::PostInitProperties
          (UNiagaraDataInterfaceUObjectPropertyReader *this)

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

// ProvidePerInstanceDataForRenderThread @ 148fc7c50

void __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceUObjectPropertyReader *this,void *param_1,void *param_2,
          ulong64 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  if (((undefined8 *)((longlong)param_2 + 0x70) != param_1) &&
     (*(char *)((longlong)param_2 + 0xd0) != '\0')) {
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined8 *)param_1 = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x88);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x80);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x98);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x90);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0xa8);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0xa0);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0xb8);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0xb0);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 200);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0xc0);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar2;
    *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  }
  if (0 < *(int *)((longlong)param_2 + 0x58)) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddZeroed
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70),
               *(int *)((longlong)param_2 + 0x48));
    uVar5 = 0;
    if (0 < *(int *)((longlong)param_2 + 0x48)) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar5 < *(int *)((longlong)param_2 + 0x48)) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(longlong *)(*(longlong *)((longlong)param_2 + 0x40) + 0x40 + lVar8) == 0) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = *(uint *)(*(longlong *)((longlong)param_2 + 0x40) + 0xc + lVar8) >> 2;
        }
        uVar4 = 0;
        if ((int)uVar5 < *(int *)((longlong)param_1 + 0x78)) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 0x70;
        *(uint *)((((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))
                  ->AllocatorInstance).Data + lVar7 * 4) = uVar6;
        lVar7 = lVar7 + 1;
      } while ((int)uVar5 < *(int *)((longlong)param_2 + 0x48));
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x50));
  }
  return;
}

// SetShaderParameters @ 148fcd080

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
UNiagaraDataInterfaceUObjectPropertyReader::SetShaderParameters
          (UNiagaraDataInterfaceUObjectPropertyReader *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  float fVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulong64 uVar8;
  FShaderParametersMetadata *pFVar9;
  TQuat<float> *pTVar10;
  float *pfVar11;
  ulong64 *puVar12;
  uint uVar13;
  FName *pFVar14;
  ulong64 *puVar15;
  float local_118;
  float fStack_114;
  float local_110;
  float local_10c;
  float fStack_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float fStack_f0;
  float local_ec;
  TQuat<float> local_e8;
  TQuat<float> local_d8;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  TQuat<float> local_98;
  TQuat<float> local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = param_1->DataInterfaceProxy;
  uVar8 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  puVar15 = (ulong64 *)0x0;
  puVar12 = puVar15;
  if (pFVar2[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar2[4]._padding_ + 4))
  {
    pFVar14 = (FName *)pFVar2[5]._padding_;
    if ((FName *)pFVar2[5]._padding_ == (FName *)0x0) {
      pFVar14 = &pFVar2[4].SourceDIName;
    }
    uVar13 = (&pFVar14->ComparisonIndex)
             [(uVar8 >> 0x20) * 0x17 + uVar8 &
              (ulonglong)(pFVar2[5].SourceDIName.ComparisonIndex.Value - 1)].Value;
    if (uVar13 != 0xffffffff) {
      do {
        puVar12 = (ulong64 *)((longlong)(int)uVar13 * 0x140 + pFVar2[1]._padding_);
        if (*puVar12 == uVar8) {
          if (puVar12 != (ulong64 *)0x0) goto LAB_148fcd16a;
          break;
        }
        uVar13 = (uint)puVar12[0x26];
        puVar12 = puVar15;
      } while (uVar13 != 0xffffffff);
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_148fcd16a:
  uVar13 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar9 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceUObjectPropertyReader::FShaderParameters>
           ::GetStructMetadata();
  puVar3 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar9->Size + uVar13;
  if ((char)puVar12[0xe] == '\0') {
    local_c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    pfVar11 = (float *)&local_c8;
    local_c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  }
  else {
    local_78 = (double)puVar12[6];
    dStack_70 = (double)puVar12[7];
    pfVar11 = &local_118;
    local_68 = (double)puVar12[8];
    local_118 = (float)local_78;
    fStack_114 = (float)dStack_70;
    local_110 = (float)local_68;
  }
  fVar1 = pfVar11[2];
  *(undefined8 *)(puVar3 + uVar13) = *(undefined8 *)pfVar11;
  *(float *)(puVar3 + (ulonglong)uVar13 + 8) = fVar1;
  *(uint *)(puVar3 + (ulonglong)uVar13 + 0xc) = (uint)((char)puVar12[0xe] != '\0');
  if ((char)puVar12[0xe] == '\0') {
    pTVar10 = &local_98;
    local_98 = UE::Math::TQuat<float>::Identity;
  }
  else {
    pTVar10 = &local_e8;
    local_e8.X = (float)(double)puVar12[2];
    local_e8.Y = (float)(double)puVar12[3];
    local_e8.Z = (float)(double)puVar12[4];
    local_e8.W = (float)(double)puVar12[5];
  }
  uVar5 = *(undefined8 *)&pTVar10->Z;
  *(undefined8 *)(puVar3 + (ulonglong)uVar13 + 0x10) = *(undefined8 *)pTVar10;
  *(undefined8 *)(puVar3 + (ulonglong)uVar13 + 0x10 + 8) = uVar5;
  if ((char)puVar12[0xe] == '\0') {
    local_b4 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    pfVar11 = (float *)&local_bc;
    local_bc = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  }
  else {
    local_60 = (double)puVar12[10];
    dStack_58 = (double)puVar12[0xb];
    pfVar11 = &local_10c;
    local_50 = (double)puVar12[0xc];
    local_10c = (float)local_60;
    fStack_108 = (float)dStack_58;
    local_104 = (float)local_50;
  }
  fVar1 = pfVar11[2];
  *(undefined8 *)(puVar3 + (ulonglong)uVar13 + 0x20) = *(undefined8 *)pfVar11;
  *(float *)(puVar3 + (ulonglong)uVar13 + 0x28) = fVar1;
  if ((char)puVar12[0x1c] == '\0') {
    local_a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    pfVar11 = (float *)&local_b0;
    local_b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  }
  else {
    local_48 = (double)puVar12[0x14];
    dStack_40 = (double)puVar12[0x15];
    pfVar11 = &local_100;
    local_38 = (double)puVar12[0x16];
    local_100 = (float)local_48;
    fStack_fc = (float)dStack_40;
    local_f8 = (float)local_38;
  }
  fVar1 = pfVar11[2];
  *(undefined8 *)(puVar3 + (ulonglong)uVar13 + 0x30) = *(undefined8 *)pfVar11;
  *(float *)(puVar3 + (ulonglong)uVar13 + 0x38) = fVar1;
  *(uint *)(puVar3 + (ulonglong)uVar13 + 0x3c) = (uint)((char)puVar12[0x1c] != '\0');
  if ((char)puVar12[0x1c] == '\0') {
    pTVar10 = &local_88;
    local_88 = UE::Math::TQuat<float>::Identity;
  }
  else {
    pTVar10 = &local_d8;
    local_d8.X = (float)(double)puVar12[0x10];
    local_d8.Y = (float)(double)puVar12[0x11];
    local_d8.Z = (float)(double)puVar12[0x12];
    local_d8.W = (float)(double)puVar12[0x13];
  }
  uVar5 = *(undefined8 *)&pTVar10->Z;
  *(undefined8 *)(puVar3 + (ulonglong)uVar13 + 0x40) = *(undefined8 *)pTVar10;
  *(undefined8 *)(puVar3 + (ulonglong)uVar13 + 0x40 + 8) = uVar5;
  if ((char)puVar12[0x1c] == '\0') {
    local_9c = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    pfVar11 = (float *)&local_a4;
    local_a4 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  }
  else {
    local_30 = (double)puVar12[0x18];
    dStack_28 = (double)puVar12[0x19];
    pfVar11 = &local_f4;
    local_20 = (double)puVar12[0x1a];
    local_f4 = (float)local_30;
    fStack_f0 = (float)dStack_28;
    local_ec = (float)local_20;
  }
  fVar1 = pfVar11[2];
  *(undefined8 *)(puVar3 + (ulonglong)uVar13 + 0x50) = *(undefined8 *)pfVar11;
  *(float *)(puVar3 + (ulonglong)uVar13 + 0x58) = fVar1;
  *(ulong64 *)(puVar3 + (ulonglong)uVar13 + 0x60) = puVar12[0x1f];
  uVar13 = (uint)puVar12[0x22] & 0x80000003;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
  }
  if (((uVar13 != 0) || ((int)(uint)puVar12[0x22] < 1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InstanceData_RT.PropertyOffsets.Num() % 4) == 0 && InstanceData_RT.PropertyOffsets.Num() > 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceUObjectPropertyReader.cpp"
                         ,0x43a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar13 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  iVar7 = (int)((int)puVar12[0x22] + ((int)puVar12[0x22] >> 0x1f & 3U)) >> 2;
  puVar3 = param_1->BaseParameters;
  param_1->ParametersOffset = iVar7 * 0x10 + uVar13;
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  memcpy(puVar3 + uVar13,(void *)puVar12[0x21],(ulonglong)(uint)((int)puVar12[0x22] << 2));
  return;
}

// SetUObjectReaderPropertyRemap @ 148fcdb40

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceUObjectPropertyReader::SetUObjectReaderPropertyRemap
          (UNiagaraComponent *param_1,FName param_2,FName param_3,FName param_4)

{
  int iVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *pUVar3;
  FNiagaraDataInterfaceProxy *pFVar4;
  FNiagaraDataInterfaceProxy *pFVar5;
  
  pUVar2 = StaticClass();
  pUVar3 = UNiagaraFunctionLibrary::GetDataInterface(pUVar2,param_1,param_2);
  if (pUVar3 != (UNiagaraDataInterface *)0x0) {
    pFVar5 = pUVar3[1].Proxy.Ptr;
    pFVar4 = pFVar5 + *(int *)&pUVar3[1].field_0x30;
    for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
      if ((FName)pFVar5->_padding_ == param_3) {
        if (pFVar5 != (FNiagaraDataInterfaceProxy *)0x0) goto LAB_148fcdbeb;
        break;
      }
    }
    if (*(int *)&pUVar3[1].field_0x30 == *(int *)&pUVar3[1].field_0x34) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,(ForAnyElementType *)&pUVar3[1].Proxy,(int *)&pUVar3[1].field_0x34);
      *(int *)&pUVar3[1].field_0x30 = iVar1;
    }
    pFVar5 = pUVar3[1].Proxy.Ptr + *(int *)&pUVar3[1].field_0x30;
    *(int *)&pUVar3[1].field_0x30 = *(int *)&pUVar3[1].field_0x30 + 1;
    DefaultConstructItems<FNiagaraUObjectPropertyReaderRemap,int>(pFVar5,1);
    pFVar5->_padding_ = (longlong)param_3;
LAB_148fcdbeb:
    pFVar5->SourceDIName = param_4;
    *(int *)&pUVar3[2].field_0x30 = *(int *)&pUVar3[2].field_0x30 + 1;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceUObjectPropertyReader @ 148fcdd50

void __cdecl
UNiagaraDataInterfaceUObjectPropertyReader::
StaticRegisterNativesUNiagaraDataInterfaceUObjectPropertyReader(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// VMGetComponentInvTransform @ 148fd2300

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::VMGetComponentInvTransform
          (UNiagaraDataInterfaceUObjectPropertyReader *this,
          FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float *local_res20;
  float *local_1d8;
  int local_1d0 [2];
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  float *local_1a0;
  float *local_198;
  float *local_190;
  FInstanceData_GameThread *local_188;
  double local_180;
  double dStack_178;
  double local_170;
  FNDIOutputParam<FNiagaraPosition> local_168;
  FNDIOutputParam<UE::Math::TVector<float>_> local_138;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_108 [3];
  
  VectorVM::FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread> *)&local_190,
             param_1);
  iVar7 = 0;
  local_1d0[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1d0);
  iVar6 = local_1d0[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<FNiagaraPosition>::FNDIOutputParam<FNiagaraPosition>(&local_168,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (local_108,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_138,param_1);
  bVar1 = (local_188->CachedInvTransform).bIsSet;
  if (bVar1 == false) {
    fVar10 = UE::Math::TQuat<float>::Identity.X;
    fVar13 = UE::Math::TQuat<float>::Identity.Y;
    fVar12 = UE::Math::TQuat<float>::Identity.Z;
    fVar11 = UE::Math::TQuat<float>::Identity.W;
    fVar15 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_180 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    dVar3 = local_180;
    local_180._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    fVar14 = local_180._0_4_;
    uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_180 = dVar3;
  }
  else {
    local_180 = (local_188->CachedInvTransform).TypedValue.Translation.XY.m128d_f64[0];
    dStack_178 = (local_188->CachedInvTransform).TypedValue.Translation.XY.m128d_f64[1];
    local_170 = (local_188->CachedInvTransform).TypedValue.Translation.ZW.m128d_f64[0];
    fVar14 = (float)local_180;
    fVar15 = (float)dStack_178;
    uVar16 = (undefined4)local_170;
    if (((local_188->CachedInvTransform).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar10 = (float)(local_188->CachedInvTransform).TypedValue.Rotation.XY.m128d_f64[0];
    fVar12 = (float)(local_188->CachedInvTransform).TypedValue.Rotation.ZW.m128d_f64[0];
    fVar13 = (float)(local_188->CachedInvTransform).TypedValue.Rotation.XY.m128d_f64[1];
    fVar11 = (float)(local_188->CachedInvTransform).TypedValue.Rotation.ZW.m128d_f64[1];
  }
  if (bVar1 == false) {
    fVar8 = (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
    local_180._0_4_ = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    uVar9 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  }
  else {
    if (((local_188->CachedInvTransform).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_180._0_4_ = (float)(local_188->CachedInvTransform).TypedValue.Scale3D.XY.m128d_f64[0];
    fVar8 = (float)(local_188->CachedInvTransform).TypedValue.Scale3D.XY.m128d_f64[1];
    uVar9 = (float)(local_188->CachedInvTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
  }
  if (0 < param_1->NumInstances) {
    local_1c0 = local_168.Z.Register;
    local_1c8 = local_168.Y.Register;
    local_res20 = local_168.X.Register;
    local_1a0 = local_108[0].W.Register;
    local_1a8 = local_108[0].Z.Register;
    local_1b0 = local_108[0].Y.Register;
    local_1b8 = local_108[0].X.Register;
    local_1d8 = local_138.Z.Register;
    local_190 = local_138.Y.Register;
    local_198 = local_138.X.Register;
    pfVar5 = pfVar5 + iVar6;
    do {
      iVar7 = iVar7 + 1;
      *pfVar5 = (float)-(uint)(bVar1 != false);
      *local_res20 = fVar14;
      local_res20 = local_res20 + local_168.X.AdvanceOffset;
      *local_1c8 = fVar15;
      local_1c8 = local_1c8 + local_168.Y.AdvanceOffset;
      *local_1c0 = (float)uVar16;
      local_1c0 = local_1c0 + local_168.Z.AdvanceOffset;
      *local_1b8 = fVar10;
      local_1b8 = local_1b8 + local_108[0].X.AdvanceOffset;
      *local_1b0 = fVar13;
      local_1b0 = local_1b0 + local_108[0].Y.AdvanceOffset;
      *local_1a8 = fVar12;
      local_1a8 = local_1a8 + local_108[0].Z.AdvanceOffset;
      *local_1a0 = fVar11;
      local_1a0 = local_1a0 + local_108[0].W.AdvanceOffset;
      *local_198 = local_180._0_4_;
      local_198 = local_198 + local_138.X.AdvanceOffset;
      *local_190 = fVar8;
      *local_1d8 = (float)uVar9;
      pfVar5 = pfVar5 + local_1d0[0];
      local_1d8 = local_1d8 + local_138.Z.AdvanceOffset;
      local_190 = local_190 + local_138.Y.AdvanceOffset;
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

// VMGetComponentTransform @ 148fd29d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataInterfaceUObjectPropertyReader::VMGetComponentTransform
          (UNiagaraDataInterfaceUObjectPropertyReader *this,
          FVectorVMExternalFunctionContext *param_1)

{
  bool bVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float *local_res20;
  float *local_1d8;
  int local_1d0 [2];
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  float *local_1a8;
  float *local_1a0;
  float *local_198;
  float *local_190;
  FInstanceData_GameThread *local_188;
  double local_180;
  double dStack_178;
  double local_170;
  FNDIOutputParam<FNiagaraPosition> local_168;
  FNDIOutputParam<UE::Math::TVector<float>_> local_138;
  FNDIOutputParam<UE::Math::TQuat<float>_> local_108 [3];
  
  VectorVM::FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread>
            ((FUserPtrHandler<NDIUObjectPropertyReaderLocal::FInstanceData_GameThread> *)&local_190,
             param_1);
  iVar7 = 0;
  local_1d0[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1d0);
  iVar6 = local_1d0[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<FNiagaraPosition>::FNDIOutputParam<FNiagaraPosition>(&local_168,param_1);
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (local_108,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_138,param_1);
  bVar1 = (local_188->CachedTransform).bIsSet;
  if (bVar1 == false) {
    fVar10 = UE::Math::TQuat<float>::Identity.X;
    fVar13 = UE::Math::TQuat<float>::Identity.Y;
    fVar12 = UE::Math::TQuat<float>::Identity.Z;
    fVar11 = UE::Math::TQuat<float>::Identity.W;
    fVar15 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_180 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    dVar3 = local_180;
    local_180._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    fVar14 = local_180._0_4_;
    uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_180 = dVar3;
  }
  else {
    local_180 = (local_188->CachedTransform).TypedValue.Translation.XY.m128d_f64[0];
    dStack_178 = (local_188->CachedTransform).TypedValue.Translation.XY.m128d_f64[1];
    local_170 = (local_188->CachedTransform).TypedValue.Translation.ZW.m128d_f64[0];
    fVar14 = (float)local_180;
    fVar15 = (float)dStack_178;
    uVar16 = (undefined4)local_170;
    if (((local_188->CachedTransform).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar10 = (float)(local_188->CachedTransform).TypedValue.Rotation.XY.m128d_f64[0];
    fVar12 = (float)(local_188->CachedTransform).TypedValue.Rotation.ZW.m128d_f64[0];
    fVar13 = (float)(local_188->CachedTransform).TypedValue.Rotation.XY.m128d_f64[1];
    fVar11 = (float)(local_188->CachedTransform).TypedValue.Rotation.ZW.m128d_f64[1];
  }
  if (bVar1 == false) {
    fVar8 = (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
    local_180._0_4_ = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    uVar9 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  }
  else {
    if (((local_188->CachedTransform).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_180._0_4_ = (float)(local_188->CachedTransform).TypedValue.Scale3D.XY.m128d_f64[0];
    fVar8 = (float)(local_188->CachedTransform).TypedValue.Scale3D.XY.m128d_f64[1];
    uVar9 = (float)(local_188->CachedTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
  }
  if (0 < param_1->NumInstances) {
    local_1c0 = local_168.Z.Register;
    local_1c8 = local_168.Y.Register;
    local_res20 = local_168.X.Register;
    local_1a0 = local_108[0].W.Register;
    local_1a8 = local_108[0].Z.Register;
    local_1b0 = local_108[0].Y.Register;
    local_1b8 = local_108[0].X.Register;
    local_1d8 = local_138.Z.Register;
    local_190 = local_138.Y.Register;
    local_198 = local_138.X.Register;
    pfVar5 = pfVar5 + iVar6;
    do {
      iVar7 = iVar7 + 1;
      *pfVar5 = (float)-(uint)(bVar1 != false);
      *local_res20 = fVar14;
      local_res20 = local_res20 + local_168.X.AdvanceOffset;
      *local_1c8 = fVar15;
      local_1c8 = local_1c8 + local_168.Y.AdvanceOffset;
      *local_1c0 = (float)uVar16;
      local_1c0 = local_1c0 + local_168.Z.AdvanceOffset;
      *local_1b8 = fVar10;
      local_1b8 = local_1b8 + local_108[0].X.AdvanceOffset;
      *local_1b0 = fVar13;
      local_1b0 = local_1b0 + local_108[0].Y.AdvanceOffset;
      *local_1a8 = fVar12;
      local_1a8 = local_1a8 + local_108[0].Z.AdvanceOffset;
      *local_1a0 = fVar11;
      local_1a0 = local_1a0 + local_108[0].W.AdvanceOffset;
      *local_198 = local_180._0_4_;
      local_198 = local_198 + local_138.X.AdvanceOffset;
      *local_190 = fVar8;
      *local_1d8 = (float)uVar9;
      pfVar5 = pfVar5 + local_1d0[0];
      local_1d8 = local_1d8 + local_138.Z.AdvanceOffset;
      local_190 = local_190 + local_138.Y.AdvanceOffset;
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

// execSetUObjectReaderPropertyRemap @ 148fdb560

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceUObjectPropertyReader::execSetUObjectReaderPropertyRemap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  longlong lVar4;
  FName FVar5;
  UNiagaraComponent *pUVar6;
  int iVar7;
  UClass *pUVar8;
  UNiagaraDataInterface *pUVar9;
  FNiagaraDataInterfaceProxy *pFVar10;
  FNiagaraDataInterfaceProxy *pFVar11;
  FName local_res10;
  longlong local_res20;
  FName local_28;
  UNiagaraComponent *local_20;
  
  local_20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_20;
  FVar5 = local_28;
  lVar4 = local_res20;
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar8 = StaticClass();
  pUVar9 = UNiagaraFunctionLibrary::GetDataInterface(pUVar8,pUVar6,FVar5);
  if (pUVar9 != (UNiagaraDataInterface *)0x0) {
    pFVar11 = pUVar9[1].Proxy.Ptr;
    pFVar10 = pFVar11 + *(int *)&pUVar9[1].field_0x30;
    for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 1) {
      if (pFVar11->_padding_ == lVar4) {
        if (pFVar11 != (FNiagaraDataInterfaceProxy *)0x0) goto LAB_148fdb706;
        break;
      }
    }
    if (*(int *)&pUVar9[1].field_0x30 == *(int *)&pUVar9[1].field_0x34) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,(ForAnyElementType *)&pUVar9[1].Proxy,(int *)&pUVar9[1].field_0x34);
      *(int *)&pUVar9[1].field_0x30 = iVar7;
    }
    pFVar11 = pUVar9[1].Proxy.Ptr + *(int *)&pUVar9[1].field_0x30;
    *(int *)&pUVar9[1].field_0x30 = *(int *)&pUVar9[1].field_0x30 + 1;
    DefaultConstructItems<FNiagaraUObjectPropertyReaderRemap,int>(pFVar11,1);
    pFVar11->_padding_ = lVar4;
LAB_148fdb706:
    pFVar11->SourceDIName = FVar3;
    *(int *)&pUVar9[2].field_0x30 = *(int *)&pUVar9[2].field_0x30 + 1;
  }
  return;
}

