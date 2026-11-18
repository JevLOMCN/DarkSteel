// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// StaticStruct @ 1422c7c30

UScriptStruct * __cdecl FTestPropertyPathFunctionsStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestPropertyPathFunctionsStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FTestPropertyPathFunctionsStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestPropertyPathFunctionsStruct,
                         (UObject *)pUVar1,L"TestPropertyPathFunctionsStruct");
  }
  return Z_Registration_Info_UScriptStruct_FTestPropertyPathFunctionsStruct.OuterSingleton;
}

// FTestPropertyPathFunctionsStruct @ 1422ce280

FTestPropertyPathFunctionsStruct * __thiscall
FTestPropertyPathFunctionsStruct::FTestPropertyPathFunctionsStruct
          (FTestPropertyPathFunctionsStruct *this,FTestPropertyPathFunctionsStruct *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  undefined8 uVar5;
  
  pTVar1 = &this->Int32Array;
  this->Unused = param_1->Unused;
  this->Int32 = param_1->Int32;
  uVar5 = *(undefined8 *)(param_1->Int32StaticArray + 2);
  piVar2 = &(this->Int32Array).ArrayMax;
  *(undefined8 *)this->Int32StaticArray = *(undefined8 *)param_1->Int32StaticArray;
  *(undefined8 *)(this->Int32StaticArray + 2) = uVar5;
  uVar5 = *(undefined8 *)(param_1->Int32StaticArray + 6);
  *(undefined8 *)(this->Int32StaticArray + 4) = *(undefined8 *)(param_1->Int32StaticArray + 4);
  *(undefined8 *)(this->Int32StaticArray + 6) = uVar5;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->Int32Array).ArrayNum;
  _Src = (param_1->Int32Array).AllocatorInstance.Data;
  (this->Int32Array).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
  }
  *(undefined8 *)&(this->Int32Set).Elements = 0;
  *(undefined8 *)&(this->Int32Set).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Int32Set).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Int32Set).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Int32Set).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Int32Set).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Int32Set).Elements.field_0x34 = 0;
  (this->Int32Set).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Int32Set).HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->Int32Set,&param_1->Int32Set);
  *(undefined8 *)&(this->Int32Map).field_0x0 = 0;
  *(undefined8 *)&(this->Int32Map).field_0x8 = 0;
  *(undefined8 *)&(this->Int32Map).field_0x20 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x28 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Int32Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Int32Map).field_0x34 = 0;
  *(undefined8 *)&(this->Int32Map).field_0x40 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x48 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->Int32Map,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &param_1->Int32Map);
  (this->Int32Optional).bIsSet = false;
  bVar3 = (param_1->Int32Optional).bIsSet;
  (this->Int32Optional).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->Int32Optional).TypedValue = (param_1->Int32Optional).TypedValue;
  }
  return this;
}

// FTestPropertyPathFunctionsStruct @ 1422ce3d0

FTestPropertyPathFunctionsStruct * __thiscall
FTestPropertyPathFunctionsStruct::FTestPropertyPathFunctionsStruct
          (FTestPropertyPathFunctionsStruct *this)

{
  this->Unused = -1;
  this->Int32 = 0;
  this->Int32StaticArray[0] = 0;
  this->Int32StaticArray[1] = 0;
  this->Int32StaticArray[2] = 0;
  this->Int32StaticArray[3] = 0;
  this->Int32StaticArray[4] = 0;
  this->Int32StaticArray[5] = 0;
  this->Int32StaticArray[6] = 0;
  this->Int32StaticArray[7] = 0;
  (this->Int32Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Int32Array).ArrayNum = 0;
  (this->Int32Array).ArrayMax = 0;
  *(undefined8 *)&(this->Int32Set).Elements = 0;
  *(undefined8 *)&(this->Int32Set).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Int32Set).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Int32Set).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Int32Set).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Int32Set).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Int32Set).Elements.field_0x30 = 0xffffffff;
  (this->Int32Set).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Int32Set).HashSize = 0;
  *(undefined8 *)&this->Int32Map = 0;
  *(undefined8 *)&(this->Int32Map).field_0x8 = 0;
  *(undefined8 *)&(this->Int32Map).field_0x20 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x28 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->Int32Map).field_0x34 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Int32Map).field_0x40 = 0;
  *(undefined4 *)&(this->Int32Map).field_0x48 = 0;
  (this->Int32Optional).bIsSet = false;
  return this;
}

// ~FTestPropertyPathFunctionsStruct @ 1422d1330

void __thiscall
FTestPropertyPathFunctionsStruct::~FTestPropertyPathFunctionsStruct
          (FTestPropertyPathFunctionsStruct *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined4 *)&(this->Int32Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Int32Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Int32Map);
  (this->Int32Set).HashSize = 0;
  FVar2 = (this->Int32Set).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Int32Set).Elements);
  pFVar3 = (this->Int32Array).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

