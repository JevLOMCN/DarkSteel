// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 13

// StaticClass @ 14915caa0

UClass * __cdecl UNiagaraDataInterfaceGrid3DCollectionReader::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollectionReader.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid3DCollectionReader",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollectionReader.
                InnerSingleton,StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollectionReader,
               0x110,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceGrid3DCollectionReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3DCollectionReader>,
               local_res8,UNiagaraDataInterfaceGrid3DCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollectionReader.InnerSingleton;
}

// UNiagaraDataInterfaceGrid3DCollectionReader @ 149169fb0

UNiagaraDataInterfaceGrid3DCollectionReader * __thiscall
UNiagaraDataInterfaceGrid3DCollectionReader::UNiagaraDataInterfaceGrid3DCollectionReader
          (UNiagaraDataInterfaceGrid3DCollectionReader *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceGrid3DCollection::UNiagaraDataInterfaceGrid3DCollection
            ((UNiagaraDataInterfaceGrid3DCollection *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3DCollectionReader__6B_;
  (this->EmitterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterName).Data.ArrayNum = 0;
  (this->EmitterName).Data.ArrayMax = 0;
  (this->DIName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DIName).Data.ArrayNum = 0;
  (this->DIName).Data.ArrayMax = 0;
  return this;
}

// UNiagaraDataInterfaceGrid3DCollectionReader @ 14916a000

UNiagaraDataInterfaceGrid3DCollectionReader * __thiscall
UNiagaraDataInterfaceGrid3DCollectionReader::UNiagaraDataInterfaceGrid3DCollectionReader
          (UNiagaraDataInterfaceGrid3DCollectionReader *this,FObjectInitializer *param_1)

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
  
  UNiagaraDataInterfaceGrid3DCollection::UNiagaraDataInterfaceGrid3DCollection
            ((UNiagaraDataInterfaceGrid3DCollection *)this,param_1);
  puVar3 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3DCollectionReader__6B_;
  (this->EmitterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterName).Data.ArrayNum = 0;
  (this->EmitterName).Data.ArrayMax = 0;
  (this->DIName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DIName).Data.ArrayNum = 0;
  (this->DIName).Data.ArrayMax = 0;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxyGrid3DCollectionProxy__6B_;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTextureRenderTarget_NoRegister();
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
  *(int *)&this->_padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceGrid3DCollectionReader @ 14916b4a0

void __thiscall
UNiagaraDataInterfaceGrid3DCollectionReader::~UNiagaraDataInterfaceGrid3DCollectionReader
          (UNiagaraDataInterfaceGrid3DCollectionReader *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3DCollectionReader__6B_;
  pFVar1 = (this->DIName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterfaceGrid3DCollection::~UNiagaraDataInterfaceGrid3DCollection
            ((UNiagaraDataInterfaceGrid3DCollection *)this);
  return;
}

// operator() @ 14916ddb0

void __thiscall
`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulonglong *local_res18;
  
  lVar1 = *(longlong *)this;
  uVar2 = *(ulonglong *)((longlong)this + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar6 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar6 = lVar1 + 0x48;
    }
    iVar5 = *(int *)(lVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x120 + *(longlong *)(lVar1 + 0x10)) == uVar2) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollectionReader.cpp"
                             ,0x81,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x120 + 0x118 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  lVar1 = *(longlong *)this;
  local_res18 = (ulonglong *)((longlong)this + 8);
  TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10),&local_res8,(bool *)&local_res18);
  *(undefined8 *)((longlong)(int)local_res8.Key * 0x120 + 0x110 + *(longlong *)(lVar1 + 0x10)) =
       *(undefined8 *)((longlong)this + 0x10);
  return;
}

// CopyToInternal @ 149173d50

bool __thiscall
UNiagaraDataInterfaceGrid3DCollectionReader::CopyToInternal
          (UNiagaraDataInterfaceGrid3DCollectionReader *this,UNiagaraDataInterface *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterfaceGrid3D::CopyToInternal((UNiagaraDataInterfaceGrid3D *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid3DCollection>(&local_28);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = UNiagaraDataInterfaceGrid3DCollection::StaticClass();
  iVar2 = (int)pUVar4->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar4->_padding_)) {
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid3DCollection>(&local_18);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_28,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  *(int *)&param_1[2]._padding_ = (int)this->_padding_;
  FNiagaraVariable::operator=
            ((FNiagaraVariable *)&param_1[2]._padding_,(FNiagaraVariable *)&this->_padding_);
  *(char *)&param_1[2].Proxy.Ptr = (char)this->_padding_;
  bVar1 = *(byte *)((longlong)&param_1[2].Proxy.Ptr + 1);
  *(byte *)((longlong)&param_1[2].Proxy.Ptr + 1) =
       (bVar1 ^ *(byte *)((longlong)&this->_padding_ + 1)) & 1 ^ bVar1;
  pUVar4 = StaticClass();
  iVar2 = (int)pUVar4->_padding_;
  if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      == &pUVar4->_padding_)) {
    ::FString::operator=((FString *)&param_1[4]._padding_,&this->EmitterName);
    ::FString::operator=((FString *)&param_1[4]._padding_,&this->DIName);
    return true;
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid3DCollectionReader>(&local_28);
  pwVar6 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// DestroyPerInstanceData @ 149177750

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
UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData
          (UNiagaraDataInterfaceGrid3DCollectionReader *this,void *param_1,
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
  undefined1 auStack_c8 [32];
  ulong64 local_a8 [2];
  code *local_98 [2];
  undefined **local_88;
  longlong lStack_80;
  ulong64 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  longlong lStack_50;
  ulong64 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  local_a8[0] = param_2->ID;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
                *)&this->_padding_,(int)(local_a8[0] >> 0x20) * 0x17 + (int)local_a8[0],local_a8);
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
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78 = param_2->ID;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_70 = (undefined ***)0x0;
  lStack_80 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData_::__l2::TSTR_FUpdateData157>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    lStack_50 = lStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollectionReader::DestroyPerInstanceData'::__l2::TSTR_FUpdateData157>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar4);
    uVar6 = (ulonglong)local_38;
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
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar5 = local_40;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar5 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar5 = local_70;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// Equals @ 149178fd0

bool __thiscall
UNiagaraDataInterfaceGrid3DCollectionReader::Equals
          (UNiagaraDataInterfaceGrid3DCollectionReader *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterfaceGrid3D::Equals((UNiagaraDataInterfaceGrid3D *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid3DCollection_const_>(&local_28);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = UNiagaraDataInterfaceGrid3DCollection::StaticClass();
  iVar3 = (int)pUVar4->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar4->_padding_)) {
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid3DCollection_const_>(&local_18);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_28,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  if ((int)param_1[2]._padding_ != (int)this->_padding_) {
    return false;
  }
  if (this->_padding_ != param_1[2]._padding_) {
    return false;
  }
  if ((int)this->_padding_ != (int)param_1[2]._padding_) {
    return false;
  }
  if (*(char *)&param_1[2].Proxy.Ptr != (char)this->_padding_) {
    return false;
  }
  if (((*(byte *)((longlong)&param_1[2].Proxy.Ptr + 1) ^ *(byte *)((longlong)&this->_padding_ + 1))
      & 1) != 0) {
    return false;
  }
  pUVar4 = StaticClass();
  iVar3 = (int)pUVar4->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar4->_padding_)) {
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid3DCollectionReader_const_>(&local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  iVar3 = (int)param_1[4]._padding_;
  iVar1 = (this->EmitterName).Data.ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) goto LAB_1491790dd;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)param_1[4]._padding_,
                       (wchar_t *)(this->EmitterName).Data.AllocatorInstance.Data);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = iVar3 + iVar1 == 1;
  }
  if (!bVar2) {
    return false;
  }
LAB_1491790dd:
  iVar3 = *(int *)&param_1[4].Proxy.Ptr;
  iVar1 = (this->DIName).Data.ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)param_1[4]._padding_,
                       (wchar_t *)(this->DIName).Data.AllocatorInstance.Data);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = iVar3 + iVar1 == 1;
  }
  if (bVar2) {
    return true;
  }
  return false;
}

// GetEmitterDependencies @ 14917e180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGrid3DCollectionReader::GetEmitterDependencies
          (UNiagaraDataInterfaceGrid3DCollectionReader *this,UNiagaraSystem *param_1,
          TArray<FVersionedNiagaraEmitter,TSizedDefaultAllocator<32>_> *param_2)

{
  FNiagaraEmitterHandle *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UNiagaraEmitter *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar9;
  FVersionedNiagaraEmitter *pFVar10;
  FString *pFVar11;
  FVersionedNiagaraEmitter *pFVar12;
  FNiagaraEmitterHandle *this_00;
  bool bVar13;
  undefined1 local_res10 [8];
  FVersionedNiagaraEmitter local_48;
  FVersionedNiagaraEmitter local_30;
  
  if (param_1 == (UNiagaraSystem *)0x0) {
    return;
  }
  pTVar9 = UNiagaraSystem::GetEmitterHandles(param_1);
  iVar8 = pTVar9->ArrayNum;
  this_00 = (FNiagaraEmitterHandle *)(pTVar9->AllocatorInstance).Data;
  pFVar1 = this_00 + iVar8;
  do {
    if (pTVar9->ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_00 == pFVar1) {
      return;
    }
    pFVar10 = FNiagaraEmitterHandle::GetInstance(this_00,&local_48);
    pUVar4 = (pFVar10->Emitter).field0_0x0.DebugPtr;
    if (pUVar4 != (UNiagaraEmitter *)0x0) {
      pFVar11 = UNiagaraEmitterBase::GetUniqueEmitterName((UNiagaraEmitterBase *)pUVar4);
      iVar7 = (this->EmitterName).Data.ArrayNum;
      iVar3 = (pFVar11->Data).ArrayNum;
      if (iVar3 == iVar7) {
        if (iVar3 < 2) {
LAB_14917e23b:
          pFVar12 = FNiagaraEmitterHandle::GetInstance(this_00,&local_30);
          pFVar10 = (FVersionedNiagaraEmitter *)(param_2->AllocatorInstance).Data;
          if (((pFVar10 <= pFVar12) && (pFVar12 < pFVar10 + param_2->ArrayMax)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = param_2->ArrayNum;
          if (iVar8 == param_2->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar8 + 1;
          pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x18;
          pUVar4 = (pFVar12->Emitter).field0_0x0.DebugPtr;
          *(UNiagaraEmitter **)pFVar2 = pUVar4;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar4 != (UNiagaraEmitter *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          uVar6 = *(undefined8 *)&(pFVar12->Version).C;
          *(undefined8 *)(pFVar2 + 8) = *(undefined8 *)&pFVar12->Version;
          *(undefined8 *)(pFVar2 + 0x10) = uVar6;
          return;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar11->Data).AllocatorInstance.Data,
                           (wchar_t *)(this->EmitterName).Data.AllocatorInstance.Data);
        bVar13 = iVar7 == 0;
      }
      else {
        bVar13 = iVar7 + iVar3 == 1;
      }
      if (bVar13) goto LAB_14917e23b;
    }
    this_00 = this_00 + 1;
  } while( true );
}

// GetPrivateStaticClass @ 14917fb90

UClass * __cdecl UNiagaraDataInterfaceGrid3DCollectionReader::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollectionReader.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid3DCollectionReader",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollectionReader.
                InnerSingleton,StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollectionReader,
               0x110,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceGrid3DCollectionReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3DCollectionReader>,
               local_res8,UNiagaraDataInterfaceGrid3DCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollectionReader.InnerSingleton;
}

// InitPerInstanceData @ 149184330

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
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData
          (UNiagaraDataInterfaceGrid3DCollectionReader *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  FNiagaraEmitterHandle *pFVar1;
  code *pcVar2;
  code *pcVar3;
  longlong *plVar4;
  FNiagaraSystemInstance *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FString *pFVar10;
  UClass *pUVar11;
  UNiagaraSystem *this_00;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar12;
  FVersionedNiagaraEmitterData *this_01;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar13;
  ulonglong uVar14;
  FGrid3DCollectionRWInstanceData_GameThread *pFVar15;
  code **ppcVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FNiagaraEmitterHandle *this_04;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  UNiagaraDataInterface *pUVar22;
  undefined1 *puVar23;
  longlong lVar24;
  longlong *plVar25;
  UNiagaraDataInterface *pUVar26;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188;
  undefined1 local_187 [3];
  int local_184;
  FGrid3DCollectionRWInstanceData_GameThread *local_180;
  uint local_178;
  UNiagaraDataInterface *local_170;
  UNiagaraDataInterface *local_168;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> local_160;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_150;
  TPairInitializer<unsigned___int64_&&,FGrid3DCollectionRWInstanceData_GameThread_*_&> local_140;
  longlong local_130;
  longlong *local_128;
  FNiagaraSystemInstance *local_120;
  FString local_118;
  FGrid3DCollectionRWInstanceData_GameThread ***local_108;
  FGrid3DCollectionRWInstanceData_GameThread **local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_120 = param_2;
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollectionReader.cpp"
                         ,0x32,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  memset(param_1,0,0xd0);
  local_180 = FGrid3DCollectionRWInstanceData_GameThread::FGrid3DCollectionRWInstanceData_GameThread
                        (param_1);
  local_140.Value = (FGrid3DCollectionRWInstanceData_GameThread **)param_2->ID;
  local_108 = &local_140.Value;
  local_100 = &local_180;
  TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&&,FGrid3DCollectionRWInstanceData_GameThread_*_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_140,(bool *)&local_108);
  pFVar18 = (param_2->Emitters).AllocatorInstance.Data;
  uVar20 = 0;
  iVar17 = (param_2->Emitters).ArrayNum;
  if ((iVar17 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pFVar21 = pFVar18 + (longlong)iVar17 * 0x10;
  for (; lVar24 = 0, pFVar18 != pFVar21; pFVar18 = pFVar18 + 0x10) {
    if (*(UNiagaraEmitterBase **)(*(longlong *)pFVar18 + 0x28) != (UNiagaraEmitterBase *)0x0) {
      pFVar10 = UNiagaraEmitterBase::GetUniqueEmitterName
                          (*(UNiagaraEmitterBase **)(*(longlong *)pFVar18 + 0x28));
      iVar17 = (this->EmitterName).Data.ArrayNum;
      iVar9 = (pFVar10->Data).ArrayNum;
      if (iVar17 == iVar9) {
        if (1 < iVar17) {
          iVar17 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(this->EmitterName).Data.AllocatorInstance.Data,
                              (wchar_t *)(pFVar10->Data).AllocatorInstance.Data);
          bVar6 = iVar17 == 0;
          goto LAB_14918446c;
        }
      }
      else {
        bVar6 = iVar9 + iVar17 == 1;
LAB_14918446c:
        if (!bVar6) goto LAB_149184473;
      }
      lVar24 = *(longlong *)pFVar18;
      break;
    }
LAB_149184473:
  }
  local_168 = (UNiagaraDataInterface *)0x0;
  local_170 = (UNiagaraDataInterface *)0x0;
  if (lVar24 == 0) {
    if ((byte)LogNiagara._0_1_ < 2) {
      return false;
    }
    ::FName::ToString((FName *)(this->_padding_ + 8),&local_c8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    local_d8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
  }
  else {
    lVar24 = *(longlong *)(lVar24 + 0x18);
    if ((lVar24 != 0) && (lVar19 = *(longlong *)(lVar24 + 0x60), local_130 = lVar19, lVar19 != 0)) {
      pFVar10 = ::FString::FString(&local_f8,"Emitter.");
      ::FString::ConcatFF(&local_118,pFVar10,&this->DIName);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      local_178 = *(uint *)(lVar24 + 0xb8);
      uVar14 = (ulonglong)(int)local_178;
      plVar25 = *(longlong **)(lVar24 + 0xb0);
      local_128 = plVar25 + uVar14;
      while( true ) {
        plVar4 = local_128;
        if (*(int *)(lVar24 + 0xb8) != (int)uVar14) {
          local_188 = 0;
          `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_188);
        }
        pUVar26 = local_170;
        if (plVar25 == plVar4) goto LAB_14918460f;
        pUVar22 = (UNiagaraDataInterface *)*plVar25;
        uVar8 = 0;
        if ((int)uVar20 < *(int *)(lVar19 + 0x228)) {
          uVar8 = ~uVar20 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        pFVar10 = ::FName::GetPlainNameString
                            ((FName *)((longlong)(int)uVar20 * 0x50 + *(longlong *)(lVar19 + 0x220))
                             ,&local_e8);
        iVar17 = (pFVar10->Data).ArrayNum;
        if (iVar17 == local_118.Data.ArrayNum) {
          if (iVar17 < 2) {
            bVar6 = true;
          }
          else {
            iVar17 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                                (wchar_t *)local_118.Data.AllocatorInstance.Data);
            bVar6 = iVar17 == 0;
          }
        }
        else {
          bVar6 = local_118.Data.ArrayNum + iVar17 == 1;
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (bVar6) break;
        uVar20 = uVar20 + 1;
        uVar14 = (ulonglong)local_178;
        plVar25 = plVar25 + 1;
        lVar19 = local_130;
      }
      local_168 = (UNiagaraDataInterface *)(pUVar22->Proxy).Ptr;
      pUVar26 = local_168;
      local_170 = pUVar22;
LAB_14918460f:
      pUVar22 = local_170;
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if ((pUVar22 != (UNiagaraDataInterface *)0x0) && (pUVar26 != (UNiagaraDataInterface *)0x0)) {
        iVar17 = 0;
        local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.ArrayNum = 0;
        local_160.ArrayMax = 0;
        local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_150.ArrayNum = 0;
        local_150.ArrayMax = 0;
        pUVar11 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
        this_00 = (UNiagaraSystem *)
                  UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar11);
        if (this_00 != (UNiagaraSystem *)0x0) {
          local_184 = (int)this->_padding_;
          pTVar12 = UNiagaraSystem::GetEmitterHandles(this_00);
          iVar17 = pTVar12->ArrayNum;
          this_04 = (FNiagaraEmitterHandle *)(pTVar12->AllocatorInstance).Data;
          pFVar1 = this_04 + iVar17;
          while( true ) {
            if (pTVar12->ArrayNum != iVar17) {
              local_187[0] = 0;
              `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_187);
            }
            if (this_04 == pFVar1) break;
            this_01 = FNiagaraEmitterHandle::GetEmitterData(this_04);
            if ((((this_01 != (FVersionedNiagaraEmitterData *)0x0) &&
                 (bVar6 = FNiagaraEmitterHandle::GetIsEnabled(this_04), bVar6)) &&
                (bVar6 = FVersionedNiagaraEmitterData::IsValid(this_01), bVar6)) &&
               (this_01->SimTarget == GPUComputeSim)) {
              UNiagaraDataInterfaceGrid3DCollection::CollectAttributesForScript
                        ((this_01->GPUComputeScript).field0_0x0.DebugPtr,
                         (UNiagaraDataInterface *)this,&local_160,&local_150,&local_184,
                         (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0);
            }
            this_04 = this_04 + 1;
          }
          iVar17 = local_184 - (int)this->_padding_;
          pUVar22 = local_170;
          pUVar26 = local_168;
        }
        pFVar5 = local_120;
        pFVar15 = (FGrid3DCollectionRWInstanceData_GameThread *)0x0;
        if (((local_160.ArrayNum == 1) && (iVar17 < 5)) && (GNiagaraGrid3DUseRGBAGrid != 0)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        uVar14 = local_120->ID;
        if ((int)pUVar22[3]._padding_ != *(int *)((longlong)&pUVar22[3].Proxy.Ptr + 4)) {
          puVar23 = (undefined1 *)pUVar22[4]._padding_;
          if ((undefined1 *)pUVar22[4]._padding_ == (undefined1 *)0x0) {
            puVar23 = &pUVar22[3].field_0x30;
          }
          iVar9 = *(int *)(puVar23 +
                          ((uVar14 >> 0x20) * 0x17 + uVar14 &
                          (ulonglong)((int)pUVar22[4]._padding_ - 1)) * 4);
          if (iVar9 != -1) {
            do {
              lVar24 = *(longlong *)&pUVar22[2].field_0x30 + (longlong)iVar9 * 0x18;
              if (*(ulonglong *)(*(longlong *)&pUVar22[2].field_0x30 + (longlong)iVar9 * 0x18) ==
                  uVar14) {
                if (lVar24 != 0) {
                  pFVar15 = *(FGrid3DCollectionRWInstanceData_GameThread **)(lVar24 + 8);
                }
                break;
              }
              iVar9 = *(int *)(lVar24 + 0x10);
            } while (iVar9 != -1);
          }
        }
        local_180->OtherDI = pUVar22;
        local_180->OtherInstanceData = pFVar15;
        if (((iVar17 < 1) ||
            (local_180->OtherInstanceData == (FGrid3DCollectionRWInstanceData_GameThread *)0x0)) ||
           (bVar6 == local_180->OtherInstanceData->UseRGBATexture)) {
          pcVar3 = (code *)this->_padding_;
          if ((pcVar3 == (code *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypedProxy != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                                 ,0x3a0,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          pcVar2 = (code *)pFVar5->ID;
          local_b8[0] = (code *)0x0;
          local_90 = FMemory::Malloc(0x20,8);
          *local_90 = (code *)&UE::Core::Private::Function::
                               TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::`35'::<lambda_1>,1,1>
                               ::_vftable_;
          local_90[1] = pcVar3;
          local_90[2] = pcVar2;
          local_90[3] = (code *)pUVar26;
          if (local_90 + 1 != (code **)0x0) {
            local_b8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,void,FRHICommandListImmediate_&>
                          ::Call;
          }
          this_02 = FRenderCommandList::GetInstanceTLS();
          if (this_02 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData_::__l35::TSTR_FUpdateData126>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
          }
          else {
            this_03 = FRenderCommandList::GetRenderThread(this_02);
            local_88._0_8_ = local_b8[0];
            local_60 = local_90;
            local_90 = (code **)0x0;
            local_88._16_8_ = local_a8[0];
            local_88._24_8_ = local_a8[1];
            local_88._32_8_ = local_a8[2];
            local_b8[0] = (code *)0x0;
            local_58 = 2;
            pFVar13 = (FRenderCommandTag *)
                      TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollectionReader::InitPerInstanceData'::__l35::TSTR_FUpdateData126>
                      ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_88,pFVar13);
            uVar14 = (ulonglong)local_58;
            if ((2 < uVar14) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar14] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_88._0_8_ != (code *)0x0) {
                ppcVar16 = (code **)(local_88 + 0x10);
                if (local_60 != (code **)0x0) {
                  ppcVar16 = local_60;
                }
                (**(code **)(*ppcVar16 + 0x10))();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar14])(local_88);
            }
          }
          if (local_b8[0] != (code *)0x0) {
            ppcVar16 = local_b8 + 2;
            if (local_90 != (code **)0x0) {
              ppcVar16 = local_90;
            }
            (**(code **)(*ppcVar16 + 0x10))();
          }
          bVar6 = true;
        }
        else {
          if (1 < (byte)LogNiagara._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          }
          bVar6 = false;
        }
        if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.AllocatorInstance.Data);
        }
        if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.AllocatorInstance.Data);
          return bVar6;
        }
        return bVar6;
      }
    }
    if ((byte)LogNiagara._0_1_ < 2) {
      return false;
    }
    ::FName::ToString((FName *)(this->_padding_ + 8),&local_d8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return false;
}

// PerInstanceTickPostSimulate @ 149188130

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
UNiagaraDataInterfaceGrid3DCollectionReader::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceGrid3DCollectionReader *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  longlong lVar1;
  ulong64 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int local_res8 [2];
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> local_38;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  uVar2 = param_2->ID;
  lVar5 = 0;
  iVar9 = (int)(uVar2 >> 0x20);
  lVar7 = lVar5;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar8 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar8 = &this->_padding_;
    }
    iVar4 = *(int *)((longlong)plVar8 +
                    (ulonglong)((int)this->_padding_ - 1U & iVar9 * 0x17 + (int)uVar2) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = this->_padding_ + (longlong)iVar4 * 0x18;
        if (*(ulong64 *)(this->_padding_ + (longlong)iVar4 * 0x18) == uVar2) {
          if (lVar1 != 0) {
            lVar7 = *(longlong *)(lVar1 + 8);
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  if ((*(longlong *)(lVar7 + 200) == 0) && (lVar1 = *(longlong *)(lVar7 + 0xc0), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0xa8) != *(int *)(lVar1 + 0xd4)) {
      lVar6 = *(longlong *)(lVar1 + 0xe0);
      if (*(longlong *)(lVar1 + 0xe0) == 0) {
        lVar6 = lVar1 + 0xd8;
      }
      iVar9 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar1 + 0xe8) - 1U & (int)uVar2 + iVar9 * 0x17)
                               * 4);
      if (iVar9 != -1) {
        do {
          lVar6 = *(longlong *)(lVar1 + 0xa0) + (longlong)iVar9 * 0x18;
          if (*(ulong64 *)(*(longlong *)(lVar1 + 0xa0) + (longlong)iVar9 * 0x18) == uVar2) {
            if (lVar6 != 0) {
              lVar5 = *(longlong *)(lVar6 + 8);
            }
            break;
          }
          iVar9 = *(int *)(lVar6 + 0x10);
        } while (iVar9 != -1);
      }
    }
    *(longlong *)(lVar7 + 200) = lVar5;
    local_res8[0] = 0;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    UNiagaraDataInterfaceGrid3DCollection::FindAttributes
              ((UNiagaraDataInterfaceGrid3DCollection *)this,&local_38,&local_28,local_res8,
               (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0);
    if (((local_38.ArrayNum == 1) && (local_res8[0] < 5)) && (GNiagaraGrid3DUseRGBAGrid != 0)) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = '\0';
    }
    if (*(longlong *)(lVar7 + 200) == 0) {
      if (1 < (byte)LogNiagara._0_1_) {
        ::FName::ToString((FName *)(this->_padding_ + 8),&local_18);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (((0 < local_res8[0]) && (cVar3 != *(char *)(*(longlong *)(lVar7 + 200) + 0x5a))) &&
            (1 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return false;
}

// StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollectionReader @ 14918ef10

void __cdecl
UNiagaraDataInterfaceGrid3DCollectionReader::
StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollectionReader(void)

{
  return;
}

