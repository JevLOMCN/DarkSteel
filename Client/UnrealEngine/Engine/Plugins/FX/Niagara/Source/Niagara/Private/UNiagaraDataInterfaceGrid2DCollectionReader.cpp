// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 15

// StaticClass @ 14915c290

UClass * __cdecl UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid2DCollectionReader",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.
                InnerSingleton,StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollectionReader,
               0x148,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceGrid2DCollectionReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2DCollectionReader>,
               local_res8,UNiagaraDataInterfaceGrid2DCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.InnerSingleton;
}

// UNiagaraDataInterfaceGrid2DCollectionReader @ 149169c60

UNiagaraDataInterfaceGrid2DCollectionReader * __thiscall
UNiagaraDataInterfaceGrid2DCollectionReader::UNiagaraDataInterfaceGrid2DCollectionReader
          (UNiagaraDataInterfaceGrid2DCollectionReader *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceGrid2DCollection::UNiagaraDataInterfaceGrid2DCollection
            ((UNiagaraDataInterfaceGrid2DCollection *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2DCollectionReader__6B_;
  (this->EmitterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterName).Data.ArrayNum = 0;
  (this->EmitterName).Data.ArrayMax = 0;
  (this->DIName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DIName).Data.ArrayNum = 0;
  (this->DIName).Data.ArrayMax = 0;
  return this;
}

// UNiagaraDataInterfaceGrid2DCollectionReader @ 149169cb0

UNiagaraDataInterfaceGrid2DCollectionReader * __thiscall
UNiagaraDataInterfaceGrid2DCollectionReader::UNiagaraDataInterfaceGrid2DCollectionReader
          (UNiagaraDataInterfaceGrid2DCollectionReader *this,FObjectInitializer *param_1)

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
  
  UNiagaraDataInterfaceGrid2DCollection::UNiagaraDataInterfaceGrid2DCollection
            ((UNiagaraDataInterfaceGrid2DCollection *)this,param_1);
  puVar3 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2DCollectionReader__6B_;
  (this->EmitterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterName).Data.ArrayNum = 0;
  (this->EmitterName).Data.ArrayMax = 0;
  (this->DIName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DIName).Data.ArrayNum = 0;
  (this->DIName).Data.ArrayMax = 0;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxyGrid2DCollectionProxy__6B_;
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
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// ~UNiagaraDataInterfaceGrid2DCollectionReader @ 14916b3e0

void __thiscall
UNiagaraDataInterfaceGrid2DCollectionReader::~UNiagaraDataInterfaceGrid2DCollectionReader
          (UNiagaraDataInterfaceGrid2DCollectionReader *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2DCollectionReader__6B_;
  pFVar1 = (this->DIName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterfaceGrid2DCollection::~UNiagaraDataInterfaceGrid2DCollection
            ((UNiagaraDataInterfaceGrid2DCollection *)this);
  return;
}

// operator() @ 14916dcb0

void __thiscall
`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>::operator()
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
        if (*(ulonglong *)((longlong)iVar5 * 0xd0 + *(longlong *)(lVar1 + 0x10)) == uVar2) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollectionReader.cpp"
                             ,0x7e,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0xd0 + 200 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  lVar1 = *(longlong *)this;
  local_res18 = (ulonglong *)((longlong)this + 8);
  TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar1 + 0x10),&local_res8,(bool *)&local_res18);
  *(undefined8 *)((longlong)(int)local_res8.Key * 0xd0 + 0xc0 + *(longlong *)(lVar1 + 0x10)) =
       *(undefined8 *)((longlong)this + 0x10);
  return;
}

// CopyToInternal @ 149173a80

bool __thiscall
UNiagaraDataInterfaceGrid2DCollectionReader::CopyToInternal
          (UNiagaraDataInterfaceGrid2DCollectionReader *this,UNiagaraDataInterface *param_1)

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
  
  bVar3 = UNiagaraDataInterfaceGrid2D::CopyToInternal((UNiagaraDataInterfaceGrid2D *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid2DCollection>(&local_28);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = UNiagaraDataInterfaceGrid2DCollection::StaticClass();
  iVar2 = (int)pUVar4->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar4->_padding_)) {
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid2DCollection>(&local_18);
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
  FNiagaraVariable::operator=
            ((FNiagaraVariable *)&param_1[1].Proxy,(FNiagaraVariable *)&this->_padding_);
  *(char *)&param_1[2]._padding_ = (char)this->_padding_;
  bVar1 = *(byte *)((longlong)&param_1[2]._padding_ + 1);
  *(byte *)((longlong)&param_1[2]._padding_ + 1) =
       (bVar1 ^ *(byte *)((longlong)&this->_padding_ + 1)) & 1 ^ bVar1;
  pUVar4 = StaticClass();
  iVar2 = (int)pUVar4->_padding_;
  if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      == &pUVar4->_padding_)) {
    ::FString::operator=((FString *)&param_1[5]._padding_,&this->EmitterName);
    ::FString::operator=((FString *)&param_1[5]._padding_,&this->DIName);
    return true;
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid2DCollectionReader>(&local_28);
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

// DestroyPerInstanceData @ 149177360

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
UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData
          (UNiagaraDataInterfaceGrid2DCollectionReader *this,void *param_1,
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
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  local_a8[0] = param_2->ID;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
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
              TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78 = param_2->ID;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_70 = (undefined ***)0x0;
  lStack_80 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData_::__l2::TSTR_FUpdateData146>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollectionReader::DestroyPerInstanceData'::__l2::TSTR_FUpdateData146>
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

// Equals @ 149178ca0

bool __thiscall
UNiagaraDataInterfaceGrid2DCollectionReader::Equals
          (UNiagaraDataInterfaceGrid2DCollectionReader *this,UNiagaraDataInterface *param_1)

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
  
  bVar2 = UNiagaraDataInterfaceGrid2D::Equals((UNiagaraDataInterfaceGrid2D *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid2DCollection_const_>(&local_28);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = UNiagaraDataInterfaceGrid2DCollection::StaticClass();
  iVar3 = (int)pUVar4->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar4->_padding_)) {
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid2DCollection_const_>(&local_18);
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
  if ((FNiagaraDataInterfaceProxy *)this->_padding_ != param_1[1].Proxy.Ptr) {
    return false;
  }
  if ((int)this->_padding_ != *(int *)&param_1[1].field_0x30) {
    return false;
  }
  if ((char)param_1[2]._padding_ != (char)this->_padding_) {
    return false;
  }
  if (((*(byte *)((longlong)&param_1[2]._padding_ + 1) ^ *(byte *)((longlong)&this->_padding_ + 1))
      & 1) != 0) {
    return false;
  }
  pUVar4 = StaticClass();
  iVar3 = (int)pUVar4->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      != &pUVar4->_padding_)) {
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid2DCollectionReader_const_>(&local_28);
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
  iVar3 = (int)param_1[5]._padding_;
  iVar1 = (this->EmitterName).Data.ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) goto LAB_149178d9b;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)param_1[5]._padding_,
                       (wchar_t *)(this->EmitterName).Data.AllocatorInstance.Data);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = iVar3 + iVar1 == 1;
  }
  if (!bVar2) {
    return false;
  }
LAB_149178d9b:
  iVar3 = *(int *)&param_1[5].Proxy.Ptr;
  iVar1 = (this->DIName).Data.ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return true;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)param_1[5]._padding_,
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

// GetEmitterDependencies @ 14917dfd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGrid2DCollectionReader::GetEmitterDependencies
          (UNiagaraDataInterfaceGrid2DCollectionReader *this,UNiagaraSystem *param_1,
          TArray<FVersionedNiagaraEmitter,TSizedDefaultAllocator<32>_> *param_2)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  TObjectPtr<UNiagaraEmitter>_u_0 *pTVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar7;
  FString *pFVar8;
  FNiagaraEmitterHandle *this_00;
  bool bVar9;
  undefined1 local_res10 [8];
  TObjectPtr<UNiagaraEmitter>_u_0 local_38;
  TObjectPtr<UNiagaraEmitter>_u_0 local_30;
  TObjectPtr<UNiagaraEmitter>_u_0 TStack_28;
  
  if (param_1 == (UNiagaraSystem *)0x0) {
    return;
  }
  pTVar7 = UNiagaraSystem::GetEmitterHandles(param_1);
  iVar6 = pTVar7->ArrayNum;
  this_00 = (FNiagaraEmitterHandle *)(pTVar7->AllocatorInstance).Data;
  pFVar1 = this_00 + iVar6;
  do {
    if (pTVar7->ArrayNum != iVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_00 == pFVar1) {
      return;
    }
    FNiagaraEmitterHandle::GetInstance(this_00,(FVersionedNiagaraEmitter *)&local_38.ObjectPtr);
    if (local_38.DebugPtr != (UNiagaraEmitter *)0x0) {
      pFVar8 = UNiagaraEmitterBase::GetUniqueEmitterName((UNiagaraEmitterBase *)local_38.DebugPtr);
      iVar5 = (this->EmitterName).Data.ArrayNum;
      iVar2 = (pFVar8->Data).ArrayNum;
      if (iVar2 == iVar5) {
        if (iVar2 < 2) {
LAB_14917e08a:
          pTVar3 = (TObjectPtr<UNiagaraEmitter>_u_0 *)(param_2->AllocatorInstance).Data;
          if (((pTVar3 <= &local_38) && (&local_38 < pTVar3 + (longlong)param_2->ArrayMax * 3)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = param_2->ArrayNum;
          if (iVar6 == param_2->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar6 + 1;
          pTVar3 = (TObjectPtr<UNiagaraEmitter>_u_0 *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
          pTVar3->DebugPtr = (UNiagaraEmitter *)local_38;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_38.DebugPtr != (UNiagaraEmitter *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
          }
          pTVar3[1] = local_30;
          pTVar3[2] = TStack_28;
          return;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                           (wchar_t *)(this->EmitterName).Data.AllocatorInstance.Data);
        bVar9 = iVar5 == 0;
      }
      else {
        bVar9 = iVar5 + iVar2 == 1;
      }
      if (bVar9) goto LAB_14917e08a;
    }
    this_00 = this_00 + 1;
  } while( true );
}

// GetPrivateStaticClass @ 14917fa10

UClass * __cdecl UNiagaraDataInterfaceGrid2DCollectionReader::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid2DCollectionReader",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.
                InnerSingleton,StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollectionReader,
               0x148,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceGrid2DCollectionReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2DCollectionReader>,
               local_res8,UNiagaraDataInterfaceGrid2DCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollectionReader.InnerSingleton;
}

// InitPerInstanceData @ 149182f20

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
UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData
          (UNiagaraDataInterfaceGrid2DCollectionReader *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  code *pcVar5;
  longlong *plVar6;
  FNiagaraSystemInstance *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FString *pFVar12;
  UClass *pUVar13;
  UNiagaraSystem *this_00;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar14;
  FVersionedNiagaraEmitterData *this_01;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar15;
  ulonglong uVar16;
  FGrid2DCollectionRWInstanceData_GameThread *pFVar17;
  code **ppcVar18;
  longlong *plVar19;
  FScriptContainerElement *pFVar20;
  FNiagaraEmitterHandle *this_04;
  UNiagaraDataInterface *pUVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  UNiagaraDataInterface *pUVar25;
  undefined1 auStackY_198 [32];
  undefined1 local_168;
  undefined1 local_167 [7];
  FGrid2DCollectionRWInstanceData_GameThread *local_160;
  uint local_158;
  int local_154;
  UNiagaraDataInterface *local_150;
  UNiagaraDataInterface *local_148;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_140;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> local_130;
  TPairInitializer<unsigned___int64_&&,FGrid2DCollectionRWInstanceData_GameThread_*_&> local_120;
  longlong *local_110;
  FNiagaraSystemInstance *local_108;
  FString local_100;
  FGrid2DCollectionRWInstanceData_GameThread ***local_f0;
  FGrid2DCollectionRWInstanceData_GameThread **local_e8;
  FString local_e0;
  FString local_d0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_108 = param_2;
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollectionReader.cpp"
                         ,0x33,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  memset(param_1,0,0xb0);
  local_160 = FGrid2DCollectionRWInstanceData_GameThread::FGrid2DCollectionRWInstanceData_GameThread
                        (param_1);
  local_120.Value = (FGrid2DCollectionRWInstanceData_GameThread **)param_2->ID;
  local_f0 = &local_120.Value;
  local_e8 = &local_160;
  TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&&,FGrid2DCollectionRWInstanceData_GameThread_*_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_120,(bool *)&local_f0);
  pFVar20 = (param_2->Emitters).AllocatorInstance.Data;
  lVar24 = 0;
  iVar11 = (param_2->Emitters).ArrayNum;
  if ((iVar11 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pFVar23 = pFVar20 + (longlong)iVar11 * 0x10;
  for (; pFVar20 != pFVar23; pFVar20 = pFVar20 + 0x10) {
    if (*(UNiagaraEmitterBase **)(*(longlong *)pFVar20 + 0x28) != (UNiagaraEmitterBase *)0x0) {
      pFVar12 = UNiagaraEmitterBase::GetUniqueEmitterName
                          (*(UNiagaraEmitterBase **)(*(longlong *)pFVar20 + 0x28));
      iVar11 = (this->EmitterName).Data.ArrayNum;
      iVar2 = (pFVar12->Data).ArrayNum;
      if (iVar11 == iVar2) {
        if (1 < iVar11) {
          iVar11 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(this->EmitterName).Data.AllocatorInstance.Data,
                              (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
          bVar8 = iVar11 == 0;
          goto LAB_149183050;
        }
      }
      else {
        bVar8 = iVar2 + iVar11 == 1;
LAB_149183050:
        if (!bVar8) goto LAB_149183057;
      }
      lVar24 = *(longlong *)pFVar20;
      break;
    }
LAB_149183057:
  }
  uVar22 = 0;
  local_148 = (UNiagaraDataInterface *)0x0;
  local_150 = (UNiagaraDataInterface *)0x0;
  if (((lVar24 != 0) && (lVar24 = *(longlong *)(lVar24 + 0x18), lVar24 != 0)) &&
     (lVar3 = *(longlong *)(lVar24 + 0x60), lVar3 != 0)) {
    pFVar12 = ::FString::FString(&local_e0,"Emitter.");
    ::FString::ConcatFF(&local_100,pFVar12,&this->DIName);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    local_158 = *(uint *)(lVar24 + 0xb8);
    uVar16 = (ulonglong)(int)local_158;
    plVar19 = *(longlong **)(lVar24 + 0xb0);
    local_110 = plVar19 + uVar16;
    while( true ) {
      plVar6 = local_110;
      if (*(int *)(lVar24 + 0xb8) != (int)uVar16) {
        local_168 = 0;
        `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_168);
      }
      pUVar25 = local_150;
      if (plVar19 == plVar6) goto LAB_1491831f0;
      pUVar21 = (UNiagaraDataInterface *)*plVar19;
      uVar10 = 0;
      if ((int)uVar22 < *(int *)(lVar3 + 0x228)) {
        uVar10 = ~uVar22 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pFVar12 = ::FName::GetPlainNameString
                          ((FName *)((longlong)(int)uVar22 * 0x50 + *(longlong *)(lVar3 + 0x220)),
                           &local_d0);
      iVar11 = (pFVar12->Data).ArrayNum;
      if (iVar11 == local_100.Data.ArrayNum) {
        if (iVar11 < 2) {
          bVar8 = true;
        }
        else {
          iVar11 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                              (wchar_t *)local_100.Data.AllocatorInstance.Data);
          bVar8 = iVar11 == 0;
        }
      }
      else {
        bVar8 = local_100.Data.ArrayNum + iVar11 == 1;
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (bVar8) break;
      uVar16 = (ulonglong)local_158;
      uVar22 = uVar22 + 1;
      plVar19 = plVar19 + 1;
    }
    local_148 = (UNiagaraDataInterface *)(pUVar21->Proxy).Ptr;
    pUVar25 = local_148;
    local_150 = pUVar21;
LAB_1491831f0:
    pUVar21 = local_150;
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if ((pUVar21 != (UNiagaraDataInterface *)0x0) && (pUVar25 != (UNiagaraDataInterface *)0x0)) {
      pFVar17 = (FGrid2DCollectionRWInstanceData_GameThread *)0x0;
      local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.ArrayNum = 0;
      local_130.ArrayMax = 0;
      local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.ArrayNum = 0;
      local_140.ArrayMax = 0;
      pUVar13 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      this_00 = (UNiagaraSystem *)
                UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar13);
      if (this_00 != (UNiagaraSystem *)0x0) {
        local_154 = (int)this->_padding_;
        pTVar14 = UNiagaraSystem::GetEmitterHandles(this_00);
        iVar11 = pTVar14->ArrayNum;
        this_04 = (FNiagaraEmitterHandle *)(pTVar14->AllocatorInstance).Data;
        pFVar1 = this_04 + iVar11;
        while( true ) {
          if (pTVar14->ArrayNum != iVar11) {
            local_167[0] = 0;
            `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_167);
          }
          pUVar21 = local_150;
          pUVar25 = local_148;
          if (this_04 == pFVar1) break;
          this_01 = FNiagaraEmitterHandle::GetEmitterData(this_04);
          if ((((this_01 != (FVersionedNiagaraEmitterData *)0x0) &&
               (bVar8 = FNiagaraEmitterHandle::GetIsEnabled(this_04), bVar8)) &&
              (bVar8 = FVersionedNiagaraEmitterData::IsValid(this_01), bVar8)) &&
             (this_01->SimTarget == GPUComputeSim)) {
            UNiagaraDataInterfaceGrid2DCollection::CollectAttributesForScript
                      ((this_01->GPUComputeScript).field0_0x0.DebugPtr,(UNiagaraDataInterface *)this
                       ,&local_130,&local_140,&local_154,
                       (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0);
          }
          this_04 = this_04 + 1;
        }
      }
      pFVar7 = local_108;
      uVar16 = local_108->ID;
      if ((int)pUVar21[2]._padding_ != *(int *)((longlong)&pUVar21[3]._padding_ + 4)) {
        plVar19 = (longlong *)pUVar21[3]._padding_;
        if ((longlong *)pUVar21[3]._padding_ == (longlong *)0x0) {
          plVar19 = &pUVar21[3]._padding_;
        }
        iVar11 = *(int *)((longlong)plVar19 +
                         ((ulonglong)(*(int *)&pUVar21[3].Proxy.Ptr - 1) &
                         (uVar16 >> 0x20) * 0x17 + uVar16) * 4);
        if (iVar11 != -1) {
          do {
            lVar24 = pUVar21[2]._padding_ + (longlong)iVar11 * 0x18;
            if (*(ulonglong *)(pUVar21[2]._padding_ + (longlong)iVar11 * 0x18) == uVar16) {
              if (lVar24 != 0) {
                pFVar17 = *(FGrid2DCollectionRWInstanceData_GameThread **)(lVar24 + 8);
              }
              break;
            }
            iVar11 = *(int *)(lVar24 + 0x10);
          } while (iVar11 != -1);
        }
      }
      local_160->OtherDI = pUVar21;
      local_160->OtherInstanceData = pFVar17;
      if (((local_160->OtherInstanceData == (FGrid2DCollectionRWInstanceData_GameThread *)0x0) ||
          (iVar11 = (int)pUVar21[1]._padding_, iVar11 < 1)) ||
         (iVar11 == local_160->OtherInstanceData->NumAttributes)) {
        pcVar5 = (code *)this->_padding_;
        if ((pcVar5 == (code *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypedProxy != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                               ,0x3a0,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pcVar4 = (code *)pFVar7->ID;
        local_b8[0] = (code *)0x0;
        local_90 = FMemory::Malloc(0x20,8);
        *local_90 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::`35'::<lambda_1>,1,1>
                             ::_vftable_;
        local_90[1] = pcVar5;
        local_90[2] = pcVar4;
        local_90[3] = (code *)pUVar25;
        if (local_90 + 1 != (code **)0x0) {
          local_b8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::__l35::<lambda_1>,void,FRHICommandListImmediate_&>
                        ::Call;
        }
        this_02 = FRenderCommandList::GetInstanceTLS();
        if (this_02 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData_::__l35::TSTR_FUpdateData123>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
          pFVar15 = (FRenderCommandTag *)
                    TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollectionReader::InitPerInstanceData'::__l35::TSTR_FUpdateData123>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_88,pFVar15);
          uVar16 = (ulonglong)local_58;
          if ((2 < uVar16) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar16] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_88._0_8_ != (code *)0x0) {
              ppcVar18 = (code **)(local_88 + 0x10);
              if (local_60 != (code **)0x0) {
                ppcVar18 = local_60;
              }
              (**(code **)(*ppcVar18 + 0x10))();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar16])(local_88);
          }
        }
        if (local_b8[0] != (code *)0x0) {
          ppcVar18 = local_b8 + 2;
          if (local_90 != (code **)0x0) {
            ppcVar18 = local_90;
          }
          (**(code **)(*ppcVar18 + 0x10))();
        }
        bVar8 = true;
      }
      else {
        if (1 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
        bVar8 = false;
      }
      if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.AllocatorInstance.Data);
      }
      if (local_130.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return bVar8;
      }
      FMemory::Free(local_130.AllocatorInstance.Data);
      return bVar8;
    }
  }
  return false;
}

// PerInstanceTickPostSimulate @ 149187a50

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
UNiagaraDataInterfaceGrid2DCollectionReader::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceGrid2DCollectionReader *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  longlong lVar1;
  ulong64 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  uVar2 = param_2->ID;
  lVar5 = 0;
  iVar7 = (int)(uVar2 >> 0x20) * 0x17;
  lVar8 = lVar5;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar3 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar3 = &this->_padding_;
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)uVar2 + iVar7 & (int)this->_padding_ - 1U) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = this->_padding_ + (longlong)iVar6 * 0x18;
        if (*(ulong64 *)(this->_padding_ + (longlong)iVar6 * 0x18) == uVar2) {
          if ((iVar6 != -1) && (lVar1 != 0)) {
            lVar8 = *(longlong *)(lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  if ((*(longlong *)(lVar8 + 0xa8) == 0) && (lVar1 = *(longlong *)(lVar8 + 0xa0), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x90) != *(int *)(lVar1 + 0xbc)) {
      lVar4 = *(longlong *)(lVar1 + 200);
      if (*(longlong *)(lVar1 + 200) == 0) {
        lVar4 = lVar1 + 0xc0;
      }
      iVar7 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar1 + 0xd0) - 1U & iVar7 + (int)uVar2) * 4);
      if (iVar7 != -1) {
        while (lVar4 = *(longlong *)(lVar1 + 0x88) + (longlong)iVar7 * 0x18,
              *(ulong64 *)(*(longlong *)(lVar1 + 0x88) + (longlong)iVar7 * 0x18) != uVar2) {
          iVar7 = *(int *)(lVar4 + 0x10);
          if (iVar7 == -1) {
            *(undefined8 *)(lVar8 + 0xa8) = 0;
            return false;
          }
        }
        if (lVar4 != 0) {
          lVar5 = *(longlong *)(lVar4 + 8);
        }
      }
    }
    *(longlong *)(lVar8 + 0xa8) = lVar5;
  }
  return false;
}

// Serialize @ 14918c410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraDataInterfaceGrid2DCollectionReader::Serialize
          (UNiagaraDataInterfaceGrid2DCollectionReader *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 14918c420

void __thiscall
UNiagaraDataInterfaceGrid2DCollectionReader::Serialize
          (UNiagaraDataInterfaceGrid2DCollectionReader *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollectionReader @ 14918eec0

void __cdecl
UNiagaraDataInterfaceGrid2DCollectionReader::
StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollectionReader(void)

{
  return;
}

