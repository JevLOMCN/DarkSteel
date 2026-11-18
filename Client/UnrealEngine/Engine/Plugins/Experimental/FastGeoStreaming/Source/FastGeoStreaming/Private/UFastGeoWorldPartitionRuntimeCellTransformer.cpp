// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 8

// StaticClass @ 14da06b00

UClass * __cdecl UFastGeoWorldPartitionRuntimeCellTransformer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoWorldPartitionRuntimeCellTransformer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoWorldPartitionRuntimeCellTransformer",
               &Z_Registration_Info_UClass_UFastGeoWorldPartitionRuntimeCellTransformer.
                InnerSingleton,StaticRegisterNativesUFastGeoWorldPartitionRuntimeCellTransformer,
               0x30,8,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"FastGeoStreaming",InternalConstructor<UFastGeoWorldPartitionRuntimeCellTransformer>
               ,InternalVTableHelperCtorCaller<UFastGeoWorldPartitionRuntimeCellTransformer>,
               local_res8,UWorldPartitionRuntimeCellTransformer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoWorldPartitionRuntimeCellTransformer.InnerSingleton;
}

// UFastGeoWorldPartitionRuntimeCellTransformer @ 14da1a9e0

UFastGeoWorldPartitionRuntimeCellTransformer * __thiscall
UFastGeoWorldPartitionRuntimeCellTransformer::UFastGeoWorldPartitionRuntimeCellTransformer
          (UFastGeoWorldPartitionRuntimeCellTransformer *this,FVTableHelper *param_1)

{
  UWorldPartitionRuntimeCellTransformer::UWorldPartitionRuntimeCellTransformer
            ((UWorldPartitionRuntimeCellTransformer *)this,param_1);
  *(undefined ***)this = &___7UFastGeoWorldPartitionRuntimeCellTransformer__6B_;
  return this;
}

// UFastGeoWorldPartitionRuntimeCellTransformer @ 14da1aa10

UFastGeoWorldPartitionRuntimeCellTransformer * __thiscall
UFastGeoWorldPartitionRuntimeCellTransformer::UFastGeoWorldPartitionRuntimeCellTransformer
          (UFastGeoWorldPartitionRuntimeCellTransformer *this,FObjectInitializer *param_1)

{
  UWorldPartitionRuntimeCellTransformer::UWorldPartitionRuntimeCellTransformer
            ((UWorldPartitionRuntimeCellTransformer *)this,param_1);
  *(undefined ***)this = &___7UFastGeoWorldPartitionRuntimeCellTransformer__6B_;
  return this;
}

// ~UFastGeoWorldPartitionRuntimeCellTransformer @ 14da1bbb0

void __thiscall
UFastGeoWorldPartitionRuntimeCellTransformer::~UFastGeoWorldPartitionRuntimeCellTransformer
          (UFastGeoWorldPartitionRuntimeCellTransformer *this)

{
  *(undefined ***)this = &___7UFastGeoWorldPartitionRuntimeCellTransformer__6B_;
  UWorldPartitionRuntimeCellTransformer::~UWorldPartitionRuntimeCellTransformer
            ((UWorldPartitionRuntimeCellTransformer *)this);
  return;
}

// GetPrivateStaticClass @ 14da2b540

UClass * __cdecl UFastGeoWorldPartitionRuntimeCellTransformer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoWorldPartitionRuntimeCellTransformer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoWorldPartitionRuntimeCellTransformer",
               &Z_Registration_Info_UClass_UFastGeoWorldPartitionRuntimeCellTransformer.
                InnerSingleton,StaticRegisterNativesUFastGeoWorldPartitionRuntimeCellTransformer,
               0x30,8,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"FastGeoStreaming",InternalConstructor<UFastGeoWorldPartitionRuntimeCellTransformer>
               ,InternalVTableHelperCtorCaller<UFastGeoWorldPartitionRuntimeCellTransformer>,
               local_res8,UWorldPartitionRuntimeCellTransformer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoWorldPartitionRuntimeCellTransformer.InnerSingleton;
}

// Serialize @ 14da37d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UFastGeoWorldPartitionRuntimeCellTransformer::Serialize
          (UFastGeoWorldPartitionRuntimeCellTransformer *this,FArchive *param_1)

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

// Serialize @ 14da37d30

void __thiscall
UFastGeoWorldPartitionRuntimeCellTransformer::Serialize
          (UFastGeoWorldPartitionRuntimeCellTransformer *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUFastGeoWorldPartitionRuntimeCellTransformer @ 14da38320

void __cdecl
UFastGeoWorldPartitionRuntimeCellTransformer::
StaticRegisterNativesUFastGeoWorldPartitionRuntimeCellTransformer(void)

{
  return;
}

