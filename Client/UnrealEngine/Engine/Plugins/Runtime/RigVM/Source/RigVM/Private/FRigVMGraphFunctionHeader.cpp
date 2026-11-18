// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 12

// FRigVMGraphFunctionHeader @ 14a079df0

FRigVMGraphFunctionHeader * __thiscall
FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader
          (FRigVMGraphFunctionHeader *this,FRigVMGraphFunctionHeader *param_1)

{
  TArray<FRigVMTag,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRigVMTag,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  undefined1 *puVar4;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *this_00;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_01;
  TArray<FRigVMGraphFunctionArgument,TSizedDefaultAllocator<32>_> *pTVar5;
  TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
  *this_02;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *pTVar6;
  FRigVMNodeLayout *pFVar7;
  int iVar8;
  int iVar9;
  FRigVMTag *pFVar10;
  ITextData *pIVar11;
  FRigVMGraphFunctionArgument *pFVar12;
  FScriptContainerElement *_Src;
  FRigVMPinCategory *pFVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)this,(FSoftObjectPath *)param_1);
  ::FString::FString(&(this->LibraryPointer).LibraryNodePath,
                     &(param_1->LibraryPointer).LibraryNodePath);
  FSoftObjectPath::FSoftObjectPath
            (&(this->LibraryPointer).HostObject,&(param_1->LibraryPointer).HostObject);
  pTVar1 = &(this->Variant).Tags;
  (this->Variant).Tags.ArrayMax = 0;
  piVar3 = &(this->Variant).Tags.ArrayMax;
  (this->Variant).Guid.A = 0;
  (this->Variant).Guid.B = 0;
  pTVar2 = &(param_1->Variant).Tags;
  (this->Variant).Guid.C = 0;
  (this->Variant).Guid.D = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Variant).Tags.ArrayNum = 0;
  uVar17 = (param_1->Variant).Guid.B;
  uVar18 = (param_1->Variant).Guid.C;
  uVar19 = (param_1->Variant).Guid.D;
  (this->Variant).Guid.A = (param_1->Variant).Guid.A;
  (this->Variant).Guid.B = uVar17;
  (this->Variant).Guid.C = uVar18;
  (this->Variant).Guid.D = uVar19;
  if (pTVar1 != pTVar2) {
    DestructItems<FRigVMTag,int>
              ((FRigVMTag *)(pTVar1->AllocatorInstance).Data,(this->Variant).Tags.ArrayNum);
    iVar8 = (param_1->Variant).Tags.ArrayNum;
    pFVar10 = (FRigVMTag *)(pTVar2->AllocatorInstance).Data;
    iVar9 = *piVar3;
    (this->Variant).Tags.ArrayNum = iVar8;
    if ((iVar8 == 0) && (iVar9 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar8,iVar9,&pTVar1->AllocatorInstance,iVar8,piVar3);
      ConstructItems<FRigVMTag,FRigVMTag,int>((pTVar1->AllocatorInstance).Data,pFVar10,iVar8);
    }
  }
  this->Name = param_1->Name;
  ::FString::FString(&this->NodeTitle,&param_1->NodeTitle);
  fVar14 = (param_1->NodeColor).field0_0x0._s_0.G;
  fVar15 = (param_1->NodeColor).field0_0x0._s_0.B;
  fVar16 = (param_1->NodeColor).field0_0x0._s_0.A;
  (this->NodeColor).field0_0x0._s_0.R = (param_1->NodeColor).field0_0x0._s_0.R;
  (this->NodeColor).field0_0x0._s_0.G = fVar14;
  (this->NodeColor).field0_0x0._s_0.B = fVar15;
  (this->NodeColor).field0_0x0._s_0.A = fVar16;
  (this->Tooltip_DEPRECATED).TextData.Reference = (ITextData *)0x0;
  pIVar11 = (param_1->Tooltip_DEPRECATED).TextData.Reference;
  (this->Tooltip_DEPRECATED).TextData.Reference = pIVar11;
  if (pIVar11 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar11 + 8))(pIVar11,local_res8);
  }
  (this->Tooltip_DEPRECATED).Flags = (param_1->Tooltip_DEPRECATED).Flags;
  ::FString::FString(&this->Description,&param_1->Description);
  ::FString::FString(&this->Category,&param_1->Category);
  ::FString::FString(&this->Keywords,&param_1->Keywords);
  pTVar5 = &this->Arguments;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->Arguments).ArrayMax;
  iVar8 = (param_1->Arguments).ArrayNum;
  pFVar12 = (FRigVMGraphFunctionArgument *)(param_1->Arguments).AllocatorInstance.Data;
  (this->Arguments).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,8,iVar8,0,&pTVar5->AllocatorInstance,iVar8,piVar3);
    ConstructItems<FRigVMGraphFunctionArgument,FRigVMGraphFunctionArgument,int>
              ((pTVar5->AllocatorInstance).Data,pFVar12,iVar8);
  }
  this_02 = &this->Dependencies;
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)&(this->Dependencies).field_0x8 = 0;
  *(undefined8 *)&(this->Dependencies).field_0x20 = 0;
  puVar4 = &(this->Dependencies).field_0x48;
  *(undefined4 *)&(this->Dependencies).field_0x28 = 0;
  *(undefined4 *)&(this->Dependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->Dependencies).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Dependencies).field_0x34 = 0;
  *(undefined8 *)&(this->Dependencies).field_0x40 = 0;
  *(undefined4 *)puVar4 = 0;
  if (this_02 != &param_1->Dependencies) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->Dependencies).field_0x38,(int *)puVar4,
               (ForElementType<FSetElementId> *)&(param_1->Dependencies).field_0x38,
               *(int *)&(param_1->Dependencies).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_02,
                (TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->Dependencies);
  }
  pTVar6 = &this->ExternalVariables;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->ExternalVariables).ArrayMax;
  iVar8 = (param_1->ExternalVariables).ArrayNum;
  _Src = (param_1->ExternalVariables).AllocatorInstance.Data;
  (this->ExternalVariables).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar8,0,&pTVar6->AllocatorInstance,iVar8,piVar3);
    memcpy((pTVar6->AllocatorInstance).Data,_Src,(longlong)iVar8 * 0x30);
  }
  pFVar7 = &this->Layout;
  (pFVar7->Categories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->Layout).Categories.ArrayMax;
  iVar8 = (param_1->Layout).Categories.ArrayNum;
  pFVar13 = (FRigVMPinCategory *)(param_1->Layout).Categories.AllocatorInstance.Data;
  (this->Layout).Categories.ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar8,0,(ForAnyElementType *)pFVar7,iVar8,piVar3);
    ConstructItems<FRigVMPinCategory,FRigVMPinCategory,int>
              ((pFVar7->Categories).AllocatorInstance.Data,pFVar13,iVar8);
  }
  this_00 = &(this->Layout).PinIndexInCategory;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->Layout).PinIndexInCategory.field_0x8 = 0;
  *(undefined8 *)&(this->Layout).PinIndexInCategory.field_0x20 = 0;
  *(undefined4 *)&(this->Layout).PinIndexInCategory.field_0x28 = 0;
  *(undefined4 *)&(this->Layout).PinIndexInCategory.field_0x2c = 0x80;
  *(undefined4 *)&(this->Layout).PinIndexInCategory.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Layout).PinIndexInCategory.field_0x34 = 0;
  *(undefined8 *)&(this->Layout).PinIndexInCategory.field_0x40 = 0;
  *(undefined4 *)&(this->Layout).PinIndexInCategory.field_0x48 = 0;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             *)this_00,
            (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             *)&(param_1->Layout).PinIndexInCategory);
  this_01 = &(this->Layout).DisplayNames;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->Layout).DisplayNames.field_0x8 = 0;
  *(undefined8 *)&(this->Layout).DisplayNames.field_0x20 = 0;
  *(undefined4 *)&(this->Layout).DisplayNames.field_0x28 = 0;
  *(undefined4 *)&(this->Layout).DisplayNames.field_0x2c = 0x80;
  *(undefined4 *)&(this->Layout).DisplayNames.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Layout).DisplayNames.field_0x34 = 0;
  *(undefined8 *)&(this->Layout).DisplayNames.field_0x40 = 0;
  *(undefined4 *)&(this->Layout).DisplayNames.field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)this_01,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&(param_1->Layout).DisplayNames);
  return this;
}

// FRigVMGraphFunctionHeader @ 14a07a150

FRigVMGraphFunctionHeader * __thiscall
FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader(FRigVMGraphFunctionHeader *this)

{
  FUtf8String *pFVar1;
  int *piVar2;
  ForAnyElementType _Src;
  size_t _Size;
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,(UObject *)0x0);
  _Src.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
  _Size = (size_t)local_28.SubPathString.Data.ArrayNum;
  pFVar1 = &(this->LibraryPointer).HostObject.SubPathString;
  piVar2 = &(this->LibraryPointer).HostObject.SubPathString.Data.ArrayMax;
  (this->LibraryPointer).LibraryNode_DEPRECATED.AssetPath.PackageName.ComparisonIndex = 0;
  (this->LibraryPointer).LibraryNode_DEPRECATED.AssetPath.PackageName.Number = 0;
  (this->LibraryPointer).LibraryNode_DEPRECATED.AssetPath.AssetName.ComparisonIndex = 0;
  (this->LibraryPointer).LibraryNode_DEPRECATED.AssetPath.AssetName.Number = 0;
  (this->LibraryPointer).LibraryNode_DEPRECATED.SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LibraryPointer).LibraryNode_DEPRECATED.SubPathString.Data.ArrayNum = 0;
  (this->LibraryPointer).LibraryNode_DEPRECATED.SubPathString.Data.ArrayMax = 0;
  (this->LibraryPointer).LibraryNodePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LibraryPointer).LibraryNodePath.Data.ArrayNum = 0;
  (this->LibraryPointer).LibraryNodePath.Data.ArrayMax = 0;
  (this->LibraryPointer).HostObject.AssetPath.PackageName = local_28.AssetPath.PackageName;
  (this->LibraryPointer).HostObject.AssetPath.AssetName = local_28.AssetPath.AssetName;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LibraryPointer).HostObject.SubPathString.Data.ArrayNum =
       local_28.SubPathString.Data.ArrayNum;
  if (local_28.SubPathString.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_28.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,
               local_28.SubPathString.Data.ArrayNum,piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,_Src.Data,_Size);
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  (this->Variant).Guid.A = 0;
  (this->Variant).Guid.B = 0;
  (this->Variant).Guid.C = 0;
  (this->Variant).Guid.D = 0;
  (this->Variant).Tags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Variant).Tags.ArrayNum = 0;
  (this->Variant).Tags.ArrayMax = 0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->NodeTitle).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeTitle).Data.ArrayNum = 0;
  (this->NodeTitle).Data.ArrayMax = 0;
  (this->NodeColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FText::FText(&this->Tooltip_DEPRECATED);
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  (this->Category).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Category).Data.ArrayNum = 0;
  (this->Category).Data.ArrayMax = 0;
  (this->Keywords).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keywords).Data.ArrayNum = 0;
  (this->Keywords).Data.ArrayMax = 0;
  (this->Arguments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Arguments).ArrayNum = 0;
  (this->Arguments).ArrayMax = 0;
  *(undefined8 *)&this->Dependencies = 0;
  *(undefined8 *)&(this->Dependencies).field_0x8 = 0;
  *(undefined8 *)&(this->Dependencies).field_0x20 = 0;
  *(undefined4 *)&(this->Dependencies).field_0x28 = 0;
  *(undefined4 *)&(this->Dependencies).field_0x2c = 0x80;
  *(undefined4 *)&(this->Dependencies).field_0x34 = 0;
  *(undefined4 *)&(this->Dependencies).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Dependencies).field_0x40 = 0;
  *(undefined4 *)&(this->Dependencies).field_0x48 = 0;
  (this->ExternalVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalVariables).ArrayNum = 0;
  (this->ExternalVariables).ArrayMax = 0;
  (this->Layout).Categories.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Layout).Categories.ArrayNum = 0;
  (this->Layout).Categories.ArrayMax = 0;
  *(undefined8 *)&(this->Layout).PinIndexInCategory = 0;
  *(undefined8 *)&(this->Layout).PinIndexInCategory.field_0x8 = 0;
  *(undefined8 *)&(this->Layout).PinIndexInCategory.field_0x20 = 0;
  *(undefined4 *)&(this->Layout).PinIndexInCategory.field_0x28 = 0;
  *(undefined4 *)&(this->Layout).PinIndexInCategory.field_0x2c = 0x80;
  *(undefined4 *)&(this->Layout).PinIndexInCategory.field_0x34 = 0;
  *(undefined4 *)&(this->Layout).PinIndexInCategory.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Layout).PinIndexInCategory.field_0x40 = 0;
  *(undefined4 *)&(this->Layout).PinIndexInCategory.field_0x48 = 0;
  *(undefined8 *)&(this->Layout).DisplayNames.field_0x10 = 0;
  *(undefined8 *)&(this->Layout).DisplayNames.field_0x18 = 0;
  *(undefined8 *)&(this->Layout).DisplayNames.field_0x38 = 0;
  *(undefined8 *)&(this->Layout).DisplayNames.field_0x48 = 0;
  *(undefined8 *)&(this->Layout).DisplayNames = 0;
  *(undefined8 *)&(this->Layout).DisplayNames.field_0x8 = 0;
  *(undefined8 *)&(this->Layout).DisplayNames.field_0x20 = 0;
  *(undefined4 *)&(this->Layout).DisplayNames.field_0x28 = 0;
  *(undefined4 *)&(this->Layout).DisplayNames.field_0x2c = 0x80;
  *(undefined4 *)&(this->Layout).DisplayNames.field_0x34 = 0;
  *(undefined4 *)&(this->Layout).DisplayNames.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Layout).DisplayNames.field_0x40 = 0;
  return this;
}

// ~FRigVMGraphFunctionHeader @ 14a07bdb0

void __thiscall
FRigVMGraphFunctionHeader::~FRigVMGraphFunctionHeader(FRigVMGraphFunctionHeader *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  FRigVMNodeLayout::~FRigVMNodeLayout(&this->Layout);
  pFVar1 = (this->ExternalVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Dependencies).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Dependencies).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Dependencies);
  DestructItems<FRigVMGraphFunctionArgument,int>
            ((FRigVMGraphFunctionArgument *)(this->Arguments).AllocatorInstance.Data,
             (this->Arguments).ArrayNum);
  pFVar1 = (this->Arguments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Keywords).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Category).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->Tooltip_DEPRECATED).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pFVar1 = (this->NodeTitle).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMTag,int>
            ((FRigVMTag *)(this->Variant).Tags.AllocatorInstance.Data,(this->Variant).Tags.ArrayNum)
  ;
  pFVar1 = (this->Variant).Tags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LibraryPointer).HostObject.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LibraryPointer).LibraryNodePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LibraryPointer).LibraryNode_DEPRECATED.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// StaticStruct @ 14a0adcf0

UScriptStruct * __cdecl FRigVMGraphFunctionHeader::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionHeader.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionHeader.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader,(UObject *)pUVar1,
                         L"RigVMGraphFunctionHeader");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionHeader.OuterSingleton;
}

// operator= @ 14a0c4fc0

FRigVMGraphFunctionHeader * __thiscall
FRigVMGraphFunctionHeader::operator=
          (FRigVMGraphFunctionHeader *this,FRigVMGraphFunctionHeader *param_1)

{
  int *piVar1;
  TArray<FRigVMGraphFunctionArgument,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  FRigVMGraphFunctionArgument *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 local_res8 [8];
  
  FSoftObjectPath::operator=((FSoftObjectPath *)this,(FSoftObjectPath *)param_1);
  iVar3 = (param_1->LibraryPointer).LibraryNodePath.Data.ArrayNum;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
  }
  ::FString::AssignRange
            (&(this->LibraryPointer).LibraryNodePath,
             (wchar_t *)(param_1->LibraryPointer).LibraryNodePath.Data.AllocatorInstance.Data,iVar13
            );
  FSoftObjectPath::operator=
            (&(this->LibraryPointer).HostObject,&(param_1->LibraryPointer).HostObject);
  uVar10 = (param_1->Variant).Guid.B;
  uVar11 = (param_1->Variant).Guid.C;
  uVar12 = (param_1->Variant).Guid.D;
  (this->Variant).Guid.A = (param_1->Variant).Guid.A;
  (this->Variant).Guid.B = uVar10;
  (this->Variant).Guid.C = uVar11;
  (this->Variant).Guid.D = uVar12;
  TArray<FRigVMTag,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Variant).Tags,&(param_1->Variant).Tags);
  this->Name = param_1->Name;
  ::FString::operator=(&this->NodeTitle,&param_1->NodeTitle);
  fVar7 = (param_1->NodeColor).field0_0x0._s_0.G;
  fVar8 = (param_1->NodeColor).field0_0x0._s_0.B;
  fVar9 = (param_1->NodeColor).field0_0x0._s_0.A;
  (this->NodeColor).field0_0x0._s_0.R = (param_1->NodeColor).field0_0x0._s_0.R;
  (this->NodeColor).field0_0x0._s_0.G = fVar7;
  (this->NodeColor).field0_0x0._s_0.B = fVar8;
  (this->NodeColor).field0_0x0._s_0.A = fVar9;
  pIVar4 = (param_1->Tooltip_DEPRECATED).TextData.Reference;
  pIVar5 = (this->Tooltip_DEPRECATED).TextData.Reference;
  if (pIVar5 != pIVar4) {
    (this->Tooltip_DEPRECATED).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (this->Tooltip_DEPRECATED).Flags = (param_1->Tooltip_DEPRECATED).Flags;
  ::FString::operator=(&this->Description,&param_1->Description);
  ::FString::operator=(&this->Category,&param_1->Category);
  ::FString::operator=(&this->Keywords,&param_1->Keywords);
  pTVar2 = &this->Arguments;
  if (pTVar2 != &param_1->Arguments) {
    DestructItems<FRigVMGraphFunctionArgument,int>
              ((FRigVMGraphFunctionArgument *)(pTVar2->AllocatorInstance).Data,
               (this->Arguments).ArrayNum);
    iVar13 = (param_1->Arguments).ArrayNum;
    piVar1 = &(this->Arguments).ArrayMax;
    pFVar6 = (FRigVMGraphFunctionArgument *)(param_1->Arguments).AllocatorInstance.Data;
    (this->Arguments).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,iVar13,*piVar1,&pTVar2->AllocatorInstance,iVar13,piVar1);
      ConstructItems<FRigVMGraphFunctionArgument,FRigVMGraphFunctionArgument,int>
                ((pTVar2->AllocatorInstance).Data,pFVar6,iVar13);
    }
  }
  if (&this->Dependencies != &param_1->Dependencies) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->Dependencies).field_0x38,
               (int *)&(this->Dependencies).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->Dependencies).field_0x38,
               *(int *)&(param_1->Dependencies).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->Dependencies,
                (TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->Dependencies);
  }
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_>::operator=
            (&this->ExternalVariables,&param_1->ExternalVariables);
  FRigVMNodeLayout::operator=(&this->Layout,&param_1->Layout);
  return this;
}

// FindGraphFunctionHeader @ 14a0da1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMGraphFunctionHeader * __cdecl
FRigVMGraphFunctionHeader::FindGraphFunctionHeader
          (FRigVMGraphFunctionHeader *__return_storage_ptr__,FRigVMGraphFunctionIdentifier *param_1,
          bool *param_2,FString *param_3)

{
  int iVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  FName *pFVar4;
  FString *pFVar5;
  undefined8 uVar6;
  FRigVMGraphFunctionData *pFVar7;
  longlong *plVar8;
  undefined1 auStack_2b8 [32];
  TStringView<wchar_t> *local_298;
  TStringView<wchar_t> local_288;
  FSoftObjectPath local_278;
  FString local_258;
  FRigVMGraphFunctionHeader local_248;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  if ((FindFunctionHeaderFromPathFunc._0_8_ != 0) &&
     (pUVar3 = FSoftObjectPath::ResolveObject(&param_1->HostObject), pUVar3 == (UObject *)0x0)) {
    local_288.DataPtr = (wchar_t *)0x0;
    pFVar4 = (FName *)FRigVMGraphFunctionIdentifier::GetLibraryNodePath(param_1);
    GetFunctionNameFromObjectPath(&local_258,pFVar4);
    pFVar5 = FRigVMGraphFunctionIdentifier::GetLibraryNodePath(param_1);
    local_278.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_278.AssetPath.PackageName.Number = 0;
    local_278.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_278.AssetPath.AssetName.Number = 0;
    local_278.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.SubPathString.Data.ArrayNum = 0;
    local_278.SubPathString.Data.ArrayMax = 0;
    local_288.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    iVar1 = (pFVar5->Data).ArrayNum;
    local_288.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_288.Size = 0;
    }
    FSoftObjectPath::SetPath(&local_278,&local_288);
    local_288.DataPtr = (wchar_t *)param_2;
    UE::Core::Private::Function::CheckCallable((void *)FindFunctionHeaderFromPathFunc._0_8_);
    uVar2 = FindFunctionHeaderFromPathFunc._0_8_;
    plVar8 = (longlong *)&FindFunctionHeaderFromPathFunc.field_0x10;
    if (FindFunctionHeaderFromPathFunc._40_8_ != 0) {
      plVar8 = (longlong *)FindFunctionHeaderFromPathFunc._40_8_;
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    local_298 = &local_288;
    (*(code *)uVar2)(&local_248,uVar6,&local_278,&local_258);
    if (local_278.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.SubPathString.Data.AllocatorInstance.Data);
    }
    if ((local_248.LibraryPointer.HostObject.AssetPath.PackageName != (FName)0x0) &&
       (pFVar5 = FRigVMGraphFunctionIdentifier::GetLibraryNodePath(&local_248.LibraryPointer),
       1 < (pFVar5->Data).ArrayNum)) {
      FRigVMGraphFunctionHeader(__return_storage_ptr__,&local_248);
      ~FRigVMGraphFunctionHeader(&local_248);
      return __return_storage_ptr__;
    }
    ~FRigVMGraphFunctionHeader(&local_248);
  }
  pFVar7 = FRigVMGraphFunctionData::FindFunctionData(param_1,param_2,param_3);
  if (pFVar7 == (FRigVMGraphFunctionData *)0x0) {
    FRigVMGraphFunctionHeader(__return_storage_ptr__);
  }
  else {
    FRigVMGraphFunctionHeader(__return_storage_ptr__,&pFVar7->Header);
  }
  return __return_storage_ptr__;
}

// FindGraphFunctionHeader @ 14a0da370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMGraphFunctionHeader * __cdecl
FRigVMGraphFunctionHeader::FindGraphFunctionHeader
          (FRigVMGraphFunctionHeader *__return_storage_ptr__,FSoftObjectPath *param_1,FName *param_2
          ,bool *param_3,FString *param_4)

{
  undefined8 uVar1;
  FName *pFVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  FString *pFVar5;
  FRigVMGraphFunctionData *pFVar6;
  longlong *plVar7;
  undefined1 auStack_288 [32];
  FString *local_268;
  undefined1 local_258 [8];
  FString local_250;
  FRigVMGraphFunctionHeader local_238;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar2 = (FName *)FSoftObjectPath::ToString(param_1,&local_250);
  GetFunctionNameFromObjectPath((FString *)local_258,pFVar2);
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  if ((FName)local_258 != (FName)0x0) {
    if ((FindFunctionHeaderFromPathFunc._0_8_ != 0) &&
       (pUVar3 = FSoftObjectPath::ResolveObject(param_1), pUVar3 == (UObject *)0x0)) {
      local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_3;
      UE::Core::Private::Function::CheckCallable((void *)FindFunctionHeaderFromPathFunc._0_8_);
      uVar1 = FindFunctionHeaderFromPathFunc._0_8_;
      plVar7 = (longlong *)&FindFunctionHeaderFromPathFunc.field_0x10;
      if (FindFunctionHeaderFromPathFunc._40_8_ != 0) {
        plVar7 = (longlong *)FindFunctionHeaderFromPathFunc._40_8_;
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      local_268 = &local_250;
      (*(code *)uVar1)(&local_238,uVar4,param_1,local_258);
      if ((local_238.LibraryPointer.HostObject.AssetPath.PackageName != (FName)0x0) &&
         (pFVar5 = FRigVMGraphFunctionIdentifier::GetLibraryNodePath(&local_238.LibraryPointer),
         1 < (pFVar5->Data).ArrayNum)) {
        FRigVMGraphFunctionHeader(__return_storage_ptr__,&local_238);
        ~FRigVMGraphFunctionHeader(&local_238);
        return __return_storage_ptr__;
      }
      ~FRigVMGraphFunctionHeader(&local_238);
    }
    pFVar6 = FRigVMGraphFunctionData::FindFunctionData(param_1,(FName *)local_258,param_3,param_4);
    if (pFVar6 != (FRigVMGraphFunctionData *)0x0) {
      FRigVMGraphFunctionHeader(__return_storage_ptr__,&pFVar6->Header);
      return __return_storage_ptr__;
    }
  }
  FRigVMGraphFunctionHeader(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindGraphFunctionHeader @ 14a0da4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMGraphFunctionHeader * __cdecl
FRigVMGraphFunctionHeader::FindGraphFunctionHeader
          (FRigVMGraphFunctionHeader *__return_storage_ptr__,FSoftObjectPath *param_1,bool *param_2,
          FString *param_3)

{
  undefined8 uVar1;
  FName *pFVar2;
  UObject *pUVar3;
  undefined8 uVar4;
  FString *pFVar5;
  FRigVMGraphFunctionData *pFVar6;
  longlong *plVar7;
  undefined1 auStack_288 [32];
  bool **local_268;
  bool *local_258;
  undefined1 local_250 [8];
  FString local_248;
  FRigVMGraphFunctionHeader local_238;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  local_258 = (bool *)0x0;
  pFVar2 = (FName *)FSoftObjectPath::ToString(param_1,&local_248);
  GetFunctionNameFromObjectPath((FString *)local_250,pFVar2);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  if ((FName)local_250 != (FName)0x0) {
    if ((FindFunctionHeaderFromPathFunc._0_8_ != 0) &&
       (pUVar3 = FSoftObjectPath::ResolveObject(param_1), pUVar3 == (UObject *)0x0)) {
      local_258 = param_2;
      UE::Core::Private::Function::CheckCallable((void *)FindFunctionHeaderFromPathFunc._0_8_);
      uVar1 = FindFunctionHeaderFromPathFunc._0_8_;
      plVar7 = (longlong *)&FindFunctionHeaderFromPathFunc.field_0x10;
      if (FindFunctionHeaderFromPathFunc._40_8_ != 0) {
        plVar7 = (longlong *)FindFunctionHeaderFromPathFunc._40_8_;
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      local_268 = &local_258;
      (*(code *)uVar1)(&local_238,uVar4,param_1,local_250);
      if ((local_238.LibraryPointer.HostObject.AssetPath.PackageName != (FName)0x0) &&
         (pFVar5 = FRigVMGraphFunctionIdentifier::GetLibraryNodePath(&local_238.LibraryPointer),
         1 < (pFVar5->Data).ArrayNum)) {
        FRigVMGraphFunctionHeader(__return_storage_ptr__,&local_238);
        ~FRigVMGraphFunctionHeader(&local_238);
        return __return_storage_ptr__;
      }
      ~FRigVMGraphFunctionHeader(&local_238);
    }
    pFVar6 = FRigVMGraphFunctionData::FindFunctionData(param_1,(FName *)local_250,param_2,param_3);
    if (pFVar6 != (FRigVMGraphFunctionData *)0x0) {
      FRigVMGraphFunctionHeader(__return_storage_ptr__,&pFVar6->Header);
      return __return_storage_ptr__;
    }
  }
  FRigVMGraphFunctionHeader(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFunctionData @ 14a0e6070

FRigVMGraphFunctionData * __thiscall
FRigVMGraphFunctionHeader::GetFunctionData(FRigVMGraphFunctionHeader *this,bool param_1)

{
  UObject *this_00;
  UClass *pUVar1;
  longlong *plVar2;
  FRigVMGraphFunctionStore *this_01;
  FRigVMGraphFunctionData *pFVar3;
  
  this_00 = FSoftObjectPath::ResolveObject(&(this->LibraryPointer).HostObject);
  if ((this_00 != (UObject *)0x0) ||
     ((param_1 &&
      (this_00 = FSoftObjectPath::TryLoad
                           (&(this->LibraryPointer).HostObject,(FUObjectSerializeContext *)0x0),
      this_00 != (UObject *)0x0)))) {
    pUVar1 = URigVMGraphFunctionHost::StaticClass();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      this_01 = (FRigVMGraphFunctionStore *)(**(code **)(*plVar2 + 0x18))(plVar2);
      pFVar3 = FRigVMGraphFunctionStore::FindFunctionImpl(this_01,&this->LibraryPointer,(bool *)0x0)
      ;
      return pFVar3;
    }
  }
  return (FRigVMGraphFunctionData *)0x0;
}

// GetFunctionHost @ 14a0e6110

IRigVMGraphFunctionHost * __thiscall
FRigVMGraphFunctionHeader::GetFunctionHost(FRigVMGraphFunctionHeader *this,bool param_1)

{
  FSoftObjectPath *this_00;
  UObject *this_01;
  UClass *pUVar1;
  IRigVMGraphFunctionHost *pIVar2;
  
  this_00 = &(this->LibraryPointer).HostObject;
  this_01 = FSoftObjectPath::ResolveObject(this_00);
  if (this_01 == (UObject *)0x0) {
    if (param_1) {
      this_01 = FSoftObjectPath::TryLoad(this_00,(FUObjectSerializeContext *)0x0);
      if (this_01 != (UObject *)0x0) goto LAB_14a0e615f;
    }
    return (IRigVMGraphFunctionHost *)0x0;
  }
LAB_14a0e615f:
  pUVar1 = URigVMGraphFunctionHost::StaticClass();
  pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar1);
  return pIVar2;
}

// GetFunctionNameFromObjectPath @ 14a0e6350

FName __cdecl
FRigVMGraphFunctionHeader::GetFunctionNameFromObjectPath(FString *param_1,FName *param_2)

{
  bool bVar1;
  FName FVar2;
  FName *in_R8;
  FName local_res18;
  FString local_28;
  FString local_18;
  
  FVar2 = *in_R8;
  if (*in_R8 == (FName)0x0) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::FString(&local_18,L".");
    bVar1 = ::FString::Split((FString *)param_2,&local_18,(FString *)0x0,&local_28,IgnoreCase,
                             FromEnd);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (!bVar1) {
      ::FString::FString(&local_18,L"/");
      ::FString::Split((FString *)param_2,&local_18,(FString *)0x0,&local_28,IgnoreCase,FromEnd);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_28.Data.ArrayNum < 2) {
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return (FName)param_1;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return (FName)param_1;
    }
    ::FName::FName(&local_res18,(wchar_t *)local_28.Data.AllocatorInstance.Data);
    FVar2 = local_res18;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
  return (FName)param_1;
}

// IsMutable @ 14a0f9950

bool __thiscall FRigVMGraphFunctionHeader::IsMutable(FRigVMGraphFunctionHeader *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UScriptStruct *pUVar7;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Arguments).AllocatorInstance.Data;
  iVar1 = (this->Arguments).ArrayNum;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar3 + 0x18);
  do {
    if ((this->Arguments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRigVMGraphFunctionArgument_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (&this_00[-1].ObjectID.AssetPath.AssetName == (FName *)(pFVar3 + (longlong)iVar1 * 0xb0)) {
      return false;
    }
    pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (((pUVar5 == (UObject *)0x0) &&
        (pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00), pUVar5 == (UObject *)0x0)) &&
       ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0)) {
      FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
      TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    }
    pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if ((pUVar5 != (UObject *)0x0) &&
       (pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00), pUVar5 != (UObject *)0x0)) {
      pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
         (((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar6->_padding_ &&
          (pUVar7 = FRigVMExecutePin::StaticStruct(), pUVar7 != (UScriptStruct *)0x0)))) {
        iVar2 = (int)pUVar7->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          return true;
        }
      }
    }
    this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_00[4].ObjectID.AssetPath.AssetName;
  } while( true );
}

