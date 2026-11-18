// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// StaticStruct @ 1442ee1b0

UScriptStruct * __cdecl FInstancedStructNetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInstancedStructNetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FInstancedStructNetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStructNetSerializerConfig,
                         (UObject *)pUVar1,L"InstancedStructNetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FInstancedStructNetSerializerConfig.OuterSingleton;
}

// FInstancedStructNetSerializerConfig @ 1442f60f0

FInstancedStructNetSerializerConfig * __thiscall
FInstancedStructNetSerializerConfig::FInstancedStructNetSerializerConfig
          (FInstancedStructNetSerializerConfig *this)

{
  *(undefined4 *)&this->_padding_ = 0;
  (this->SupportedTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedTypes).ArrayNum = 0;
  (this->SupportedTypes).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FInstancedStructNetSerializerConfig__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DescriptorCache,4000);
  *(undefined8 *)&(this->DescriptorCache).DescriptorLruCache.LookupSet.Elements = 0;
  *(undefined8 *)&(this->DescriptorCache).DescriptorLruCache.LookupSet.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DescriptorCache).DescriptorLruCache.LookupSet.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DescriptorCache).DescriptorLruCache.LookupSet.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DescriptorCache).DescriptorLruCache.LookupSet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DescriptorCache).DescriptorLruCache.LookupSet.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DescriptorCache).DescriptorLruCache.LookupSet.Elements.field_0x30 =
       0xffffffff;
  (this->DescriptorCache).DescriptorLruCache.LookupSet.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->DescriptorCache).DescriptorLruCache.LookupSet.HashSize = 0;
  (this->DescriptorCache).DescriptorLruCache.LeastRecent = (FCacheEntry *)0x0;
  (this->DescriptorCache).DescriptorLruCache.MostRecent = (FCacheEntry *)0x0;
  (this->DescriptorCache).DescriptorLruCache.MaxNumElements = 0;
  *(undefined8 *)&(this->DescriptorCache).DescriptorMap = 0;
  *(undefined8 *)&(this->DescriptorCache).DescriptorMap.field_0x8 = 0;
  *(undefined8 *)&(this->DescriptorCache).DescriptorMap.field_0x20 = 0;
  *(undefined4 *)&(this->DescriptorCache).DescriptorMap.field_0x28 = 0;
  *(undefined4 *)&(this->DescriptorCache).DescriptorMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DescriptorCache).DescriptorMap.field_0x34 = 0;
  *(undefined4 *)&(this->DescriptorCache).DescriptorMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DescriptorCache).DescriptorMap.field_0x40 = 0;
  *(undefined4 *)&(this->DescriptorCache).DescriptorMap.field_0x48 = 0;
  *(undefined8 *)&(this->DescriptorCache).SupportedTypes.Elements = 0;
  *(undefined8 *)&(this->DescriptorCache).SupportedTypes.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DescriptorCache).SupportedTypes.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DescriptorCache).SupportedTypes.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DescriptorCache).SupportedTypes.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DescriptorCache).SupportedTypes.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DescriptorCache).SupportedTypes.Elements.field_0x30 = 0xffffffff;
  (this->DescriptorCache).SupportedTypes.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DescriptorCache).SupportedTypes.HashSize = 0;
  (this->DescriptorCache).DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DescriptorCache).DebugName.Data.ArrayNum = 0;
  (this->DescriptorCache).DebugName.Data.ArrayMax = 0;
  (this->DescriptorCache).MaxCachedDescriptorCount = 0;
  *(undefined4 *)&this->_padding_ = 1;
  return this;
}

// ~FInstancedStructNetSerializerConfig @ 1442f8070

void __thiscall
FInstancedStructNetSerializerConfig::~FInstancedStructNetSerializerConfig
          (FInstancedStructNetSerializerConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FInstancedStructNetSerializerConfig__6B_;
  UE::Net::Private::FInstancedStructDescriptorCache::~FInstancedStructDescriptorCache
            (&this->DescriptorCache);
  DestructItems<TSoftObjectPtr<UScriptStruct>,int>
            ((TSoftObjectPtr<UScriptStruct> *)(this->SupportedTypes).AllocatorInstance.Data,
             (this->SupportedTypes).ArrayNum);
  pFVar1 = (this->SupportedTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNetSerializerConfig::~FNetSerializerConfig((FNetSerializerConfig *)this);
  return;
}

