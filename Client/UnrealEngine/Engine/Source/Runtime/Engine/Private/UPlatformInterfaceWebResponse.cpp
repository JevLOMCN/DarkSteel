// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 14731f8a0

UClass * __cdecl UPlatformInterfaceWebResponse::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformInterfaceWebResponse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlatformInterfaceWebResponse",
               &Z_Registration_Info_UClass_UPlatformInterfaceWebResponse.InnerSingleton,
               StaticRegisterNativesUPlatformInterfaceWebResponse,0xb0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlatformInterfaceWebResponse>,
               InternalVTableHelperCtorCaller<UPlatformInterfaceWebResponse>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformInterfaceWebResponse.InnerSingleton;
}

// UPlatformInterfaceWebResponse @ 147324c50

UPlatformInterfaceWebResponse * __thiscall
UPlatformInterfaceWebResponse::UPlatformInterfaceWebResponse
          (UPlatformInterfaceWebResponse *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPlatformInterfaceWebResponse__6B_;
  (this->OriginalURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalURL).Data.ArrayNum = 0;
  (this->OriginalURL).Data.ArrayMax = 0;
  (this->StringResponse).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringResponse).Data.ArrayNum = 0;
  (this->StringResponse).Data.ArrayMax = 0;
  (this->BinaryResponse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BinaryResponse).ArrayNum = 0;
  (this->BinaryResponse).ArrayMax = 0;
  *(undefined8 *)&this->Headers = 0;
  *(undefined8 *)&(this->Headers).field_0x8 = 0;
  *(undefined8 *)&(this->Headers).field_0x20 = 0;
  *(undefined4 *)&(this->Headers).field_0x28 = 0;
  *(undefined4 *)&(this->Headers).field_0x2c = 0x80;
  *(undefined4 *)&(this->Headers).field_0x34 = 0;
  *(undefined4 *)&(this->Headers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Headers).field_0x40 = 0;
  *(undefined4 *)&(this->Headers).field_0x48 = 0;
  return this;
}

// ~UPlatformInterfaceWebResponse @ 147325350

void __thiscall
UPlatformInterfaceWebResponse::~UPlatformInterfaceWebResponse(UPlatformInterfaceWebResponse *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPlatformInterfaceWebResponse__6B_;
  *(undefined4 *)&(this->Headers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Headers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Headers);
  pFVar2 = (this->BinaryResponse).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->StringResponse).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OriginalURL).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473273c0

UClass * __cdecl UPlatformInterfaceWebResponse::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformInterfaceWebResponse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlatformInterfaceWebResponse",
               &Z_Registration_Info_UClass_UPlatformInterfaceWebResponse.InnerSingleton,
               StaticRegisterNativesUPlatformInterfaceWebResponse,0xb0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPlatformInterfaceWebResponse>,
               InternalVTableHelperCtorCaller<UPlatformInterfaceWebResponse>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformInterfaceWebResponse.InnerSingleton;
}

// StaticRegisterNativesUPlatformInterfaceWebResponse @ 147328280

void __cdecl UPlatformInterfaceWebResponse::StaticRegisterNativesUPlatformInterfaceWebResponse(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetHeader @ 147329f60

void __cdecl
UPlatformInterfaceWebResponse::execGetHeader(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void **ppvVar3;
  undefined4 local_res8 [2];
  void *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  ppvVar2 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
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
  ppvVar3 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8[0],ppvVar2,ppvVar3);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetHeaderValue @ 14732a0d0

void __cdecl
UPlatformInterfaceWebResponse::execGetHeaderValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  void *local_28;
  undefined8 local_20;
  void *local_18 [2];
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_18,&local_28);
  if (param_3 != puVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetNumHeaders @ 14732a210

void __cdecl
UPlatformInterfaceWebResponse::execGetNumHeaders(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// UPlatformInterfaceWebResponse @ 14850fe30

UPlatformInterfaceWebResponse * __thiscall
UPlatformInterfaceWebResponse::UPlatformInterfaceWebResponse
          (UPlatformInterfaceWebResponse *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPlatformInterfaceWebResponse__6B_;
  (this->OriginalURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalURL).Data.ArrayNum = 0;
  (this->OriginalURL).Data.ArrayMax = 0;
  (this->StringResponse).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringResponse).Data.ArrayNum = 0;
  (this->StringResponse).Data.ArrayMax = 0;
  (this->BinaryResponse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BinaryResponse).ArrayNum = 0;
  (this->BinaryResponse).ArrayMax = 0;
  *(undefined8 *)&this->Headers = 0;
  *(undefined8 *)&(this->Headers).field_0x8 = 0;
  *(undefined8 *)&(this->Headers).field_0x20 = 0;
  *(undefined4 *)&(this->Headers).field_0x28 = 0;
  *(undefined4 *)&(this->Headers).field_0x2c = 0x80;
  *(undefined4 *)&(this->Headers).field_0x34 = 0;
  *(undefined4 *)&(this->Headers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Headers).field_0x40 = 0;
  *(undefined4 *)&(this->Headers).field_0x48 = 0;
  return this;
}

// GetHeader @ 14852afd0

void __thiscall
UPlatformInterfaceWebResponse::GetHeader
          (UPlatformInterfaceWebResponse *this,int param_1,FString *param_2,FString *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  iVar5 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->Headers);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar4 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->Headers;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      plVar3 = local_68;
      if (*(int *)&(this->Headers).field_0x8 - *(int *)&(this->Headers).field_0x34 <= iVar5) break;
      if (iVar5 == param_1) {
        lVar1 = (longlong)(int)uVar4 * 0x28;
        iVar2 = *(int *)(*local_68 + 8 + lVar1);
        iVar6 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar6 = 0;
        }
        ::FString::AssignRange(param_2,*(wchar_t **)(*local_68 + lVar1),iVar6);
        iVar2 = *(int *)(*plVar3 + 0x18 + lVar1);
        iVar6 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar6 = 0;
        }
        ::FString::AssignRange(param_3,*(wchar_t **)(*plVar3 + 0x10 + lVar1),iVar6);
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      iVar5 = iVar5 + 1;
      uVar4 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar7 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar7 < 4) {
        iVar5 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_38->HashSize < iVar5)) || (iVar5 < local_38->HashSize)) {
        local_38->HashSize = iVar5;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  return;
}

// GetHeaderValue @ 14852b180

FString * __thiscall
UPlatformInterfaceWebResponse::GetHeaderValue
          (UPlatformInterfaceWebResponse *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  FString *pFVar7;
  undefined1 *puVar8;
  bool bVar9;
  
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  if (*(int *)&(this->Headers).field_0x8 != *(int *)&(this->Headers).field_0x34) {
    puVar8 = *(undefined1 **)&(this->Headers).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Headers).field_0x38;
    }
    iVar1 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->Headers).field_0x48 - 1U & uVar3) * 4);
    while (iVar1 != -1) {
      iVar4 = *(int *)(*(longlong *)&this->Headers + 8 + (longlong)iVar1 * 0x28);
      lVar6 = (longlong)iVar1 * 0x28;
      iVar2 = (param_1->Data).ArrayNum;
      if (iVar4 == iVar2) {
        if (1 < iVar4) {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Headers + lVar6),
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar9 = iVar4 == 0;
          goto LAB_14852b23a;
        }
LAB_14852b279:
        if (iVar1 != -1) {
          lVar6 = *(longlong *)&this->Headers + lVar6;
          pFVar7 = (FString *)(lVar6 + 0x10);
          if (lVar6 == 0) {
            pFVar7 = (FString *)0x0;
          }
          if (pFVar7 != (FString *)0x0) {
            ::FString::FString(__return_storage_ptr__,pFVar7);
            return __return_storage_ptr__;
          }
        }
        break;
      }
      bVar9 = iVar4 + iVar2 == 1;
LAB_14852b23a:
      if (bVar9) goto LAB_14852b279;
      iVar1 = *(int *)(*(longlong *)&this->Headers + 0x20 + lVar6);
    }
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetNumHeaders @ 14852bad0

int __thiscall UPlatformInterfaceWebResponse::GetNumHeaders(UPlatformInterfaceWebResponse *this)

{
  return *(int *)&(this->Headers).field_0x8 - *(int *)&(this->Headers).field_0x34;
}

