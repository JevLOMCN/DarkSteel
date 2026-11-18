// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 21

// SerializeMetadata @ 149a0c350

void __thiscall UPCGAssetExporter::SerializeMetadata(UPCGAssetExporter *this,FArchive *param_1)

{
  return;
}

// StaticClass @ 149a0ff00

UClass * __cdecl UPCGAssetExporter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAssetExporter.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAssetExporter",
               &Z_Registration_Info_UClass_UPCGAssetExporter.InnerSingleton,
               StaticRegisterNativesUPCGAssetExporter,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAssetExporter>,
               InternalVTableHelperCtorCaller<UPCGAssetExporter>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAssetExporter.InnerSingleton;
}

// UPCGAssetExporter @ 149eeda30

UPCGAssetExporter * __thiscall
UPCGAssetExporter::UPCGAssetExporter(UPCGAssetExporter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPCGAssetExporter__6B_;
  return this;
}

// UPCGAssetExporter @ 149eeda60

UPCGAssetExporter * __thiscall
UPCGAssetExporter::UPCGAssetExporter(UPCGAssetExporter *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPCGAssetExporter__6B_;
  return this;
}

// ~UPCGAssetExporter @ 149eef9a0

void __thiscall UPCGAssetExporter::~UPCGAssetExporter(UPCGAssetExporter *this)

{
  *(undefined ***)this = &___7UPCGAssetExporter__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BP_ExportToAsset @ 149ef5500

bool __thiscall UPCGAssetExporter::BP_ExportToAsset(UPCGAssetExporter *this,UPCGDataAsset *param_1)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  UPCGDataAsset *local_18;
  char local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGAssetExporter_BP_ExportToAsset);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_10 = '\0';
    local_18 = param_1;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_18);
    return local_10 != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000149ef557e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x2b0))(this,param_1);
  return (bool)uVar1;
}

// BP_ExportToAsset_Implementation @ 149ef5590

bool __thiscall
UPCGAssetExporter::BP_ExportToAsset_Implementation(UPCGAssetExporter *this,UPCGDataAsset *param_1)

{
  return false;
}

// BP_GetAssetType @ 149ef55a0

TSubclassOf<UPCGDataAsset> __thiscall UPCGAssetExporter::BP_GetAssetType(UPCGAssetExporter *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  UObject *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGAssetExporter_BP_GetAssetType);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = (UObject *)0x0;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,local_res18);
    *(UObject **)in_RDX.field0_0x0 = local_res18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
      return (TSubclassOf<UPCGDataAsset>)in_RDX.field0_0x0;
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x2b8))(this);
  }
  return (TSubclassOf<UPCGDataAsset>)in_RDX.field0_0x0.DebugPtr;
}

// BP_GetAssetType_Implementation @ 149ef5650

TSubclassOf<UPCGDataAsset> __thiscall
UPCGAssetExporter::BP_GetAssetType_Implementation(UPCGAssetExporter *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UPCGDataAsset_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGDataAsset>)in_RDX.field0_0x0;
}

// DuplicateAndReOuterData @ 149efbf10

void __thiscall
UPCGAssetExporter::DuplicateAndReOuterData(UPCGAssetExporter *this,UPCGDataAsset *param_1)

{
  int iVar1;
  UPackage *pUVar2;
  UPackage *pUVar3;
  UPCGData *pUVar4;
  FPCGDataPtrWrapper *this_00;
  FPCGDataPtrWrapper *pFVar5;
  UPCGDataAsset *local_res10;
  code *local_38;
  UPCGDataAsset **local_30;
  
  if (param_1 != (UPCGDataAsset *)0x0) {
    this_00 = (FPCGDataPtrWrapper *)(param_1->Data).TaggedData.AllocatorInstance.Data;
    iVar1 = (param_1->Data).TaggedData.ArrayNum;
    pFVar5 = (FPCGDataPtrWrapper *)((longlong)this_00 + (longlong)iVar1 * 0x78);
    while( true ) {
      if ((param_1->Data).TaggedData.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (this_00 == pFVar5) break;
      pUVar4 = (this_00->Data).field0_0x0.DebugPtr;
      if ((pUVar4 != (UPCGData *)0x0) &&
         (pUVar2 = (UPackage *)pUVar4->_padding_, pUVar3 = GetTransientPackage(), pUVar2 == pUVar3))
      {
        pUVar4 = (UPCGData *)(**(code **)(pUVar4->_padding_ + 0x310))(pUVar4,0,1);
        (**(code **)(pUVar4->_padding_ + 0x170))(pUVar4,0,param_1,0);
        local_30 = &local_res10;
        local_38 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UPCGAssetExporter::DuplicateAndReOuterData'::__l12::<lambda_1>,void,UPCGData_const_*>
                   ::Call;
        local_res10 = param_1;
        (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,&local_38);
        FPCGDataPtrWrapper::operator=(this_00,pUVar4);
      }
      this_00 = (FPCGDataPtrWrapper *)&this_00[7].WeakData;
    }
  }
  return;
}

// Export @ 149efcde0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGAssetExporter::Export(UPCGAssetExporter *this,FString *param_1,UPCGDataAsset *param_2)

{
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return false;
}

// ExportAsset @ 149efce10

bool __thiscall
UPCGAssetExporter::ExportAsset(UPCGAssetExporter *this,FString *param_1,UPCGDataAsset *param_2)

{
  bool bVar1;
  
  bVar1 = BP_ExportToAsset(this,param_2);
  return bVar1;
}

// GetAssetType @ 149efee00

TSubclassOf<UPCGDataAsset> __thiscall UPCGAssetExporter::GetAssetType(UPCGAssetExporter *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  UObject *local_res10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGAssetExporter_BP_GetAssetType);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10 = (UObject *)0x0;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_res10);
    *(UObject **)in_RDX.field0_0x0 = local_res10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
      return (TSubclassOf<UPCGDataAsset>)in_RDX.field0_0x0;
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x2b8))(this);
  }
  return (TSubclassOf<UPCGDataAsset>)in_RDX.field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 149f03e10

UClass * __cdecl UPCGAssetExporter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAssetExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAssetExporter",
               &Z_Registration_Info_UClass_UPCGAssetExporter.InnerSingleton,
               StaticRegisterNativesUPCGAssetExporter,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAssetExporter>,
               InternalVTableHelperCtorCaller<UPCGAssetExporter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAssetExporter.InnerSingleton;
}

// SerializeMetadataFromAsset @ 149f11ce0

void __thiscall
UPCGAssetExporter::SerializeMetadataFromAsset(UPCGAssetExporter *this,FAssetData *param_1)

{
  return;
}

// SerializeMetadataToAsset @ 149f11cf0

void __thiscall
UPCGAssetExporter::SerializeMetadataToAsset(UPCGAssetExporter *this,FAssetData *param_1)

{
  return;
}

// StaticRegisterNativesUPCGAssetExporter @ 149f13e60

void __cdecl UPCGAssetExporter::StaticRegisterNativesUPCGAssetExporter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGAssetExporter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Update @ 149f14e40

/* WARNING: Enum "Type": Some values do not have unique names */

UPackage * __thiscall UPCGAssetExporter::Update(UPCGAssetExporter *this,FAssetData *param_1)

{
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return (UPackage *)0x0;
}

// UpdateAsset @ 149f15000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UPackage * __thiscall UPCGAssetExporter::UpdateAsset(UPCGAssetExporter *this,FAssetData *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar4;
  UPCGDataAsset *this_00;
  UClass *pUVar5;
  UPackage *pUVar6;
  undefined1 local_b8 [24];
  undefined8 uStack_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ForElementType<FSetElementId> local_80;
  ulonglong local_70;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_68;
  
  local_b8._16_8_ = 0;
  uStack_a0 = 0;
  local_80.InlineData[0] = '\0';
  local_80.InlineData[1] = '\0';
  local_80.InlineData[2] = '\0';
  local_80.InlineData[3] = '\0';
  local_80._padding_ = 0;
  local_90 = ___xmm_00000000ffffffff0000008000000000;
  uStack_88 = _UNK_150631d98;
  local_70 = 0;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (void *)0x0;
  local_80.SecondaryData = (ForElementType<FSetElementId>)0x0;
  pTVar4 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
           TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                     (&local_68,
                      (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_b8);
  this_00 = (UPCGDataAsset *)FAssetData::FastGetAsset(param_1,true,pTVar4);
  local_70 = local_70 & 0xffffffff00000000;
  if (local_80.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_80.SecondaryData);
  }
  iVar1 = SUB84(local_b8._8_8_,4);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
  }
  uVar2 = local_90._4_4_;
  uStack_88 = 0xffffffff;
  local_90 = (ulonglong)local_90._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_90 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  if (this_00 != (UPCGDataAsset *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGDataAsset_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar5->_padding_)) && (bVar3 = BP_ExportToAsset(this,this_00), bVar3)) {
      pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
      return pUVar6;
    }
  }
  return (UPackage *)0x0;
}

// execBP_ExportToAsset @ 149f175a0

void __cdecl UPCGAssetExporter::execBP_ExportToAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execBP_GetAssetType @ 149f17650

void __cdecl UPCGAssetExporter::execBP_GetAssetType(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    *(undefined8 *)param_3 = *puVar1;
    return;
  }
  if ((UObject *)*puVar1 != (UObject *)0x0) {
    UE::GC::MarkAsReachable((UObject *)*puVar1);
    *(undefined8 *)param_3 = *puVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

