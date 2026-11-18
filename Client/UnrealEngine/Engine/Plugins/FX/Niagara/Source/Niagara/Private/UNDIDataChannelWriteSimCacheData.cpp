// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 148e41df0

UClass * __cdecl UNDIDataChannelWriteSimCacheData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDIDataChannelWriteSimCacheData",
               &Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.InnerSingleton,
               StaticRegisterNativesUNDIDataChannelWriteSimCacheData,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNDIDataChannelWriteSimCacheData>,
               InternalVTableHelperCtorCaller<UNDIDataChannelWriteSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.InnerSingleton;
}

// UNDIDataChannelWriteSimCacheData @ 148e54a20

UNDIDataChannelWriteSimCacheData * __thiscall
UNDIDataChannelWriteSimCacheData::UNDIDataChannelWriteSimCacheData
          (UNDIDataChannelWriteSimCacheData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNDIDataChannelWriteSimCacheData__6B_;
  (this->FrameData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameData).ArrayNum = 0;
  (this->FrameData).ArrayMax = 0;
  (this->DataChannelReference).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DataChannelReference).AssetPath.PackageName.Number = 0;
  (this->DataChannelReference).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DataChannelReference).AssetPath.AssetName.Number = 0;
  (this->DataChannelReference).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DataChannelReference).SubPathString.Data.ArrayNum = 0;
  (this->DataChannelReference).SubPathString.Data.ArrayMax = 0;
  (this->DataInterface).field0_0x0.DebugPtr = (UNiagaraDataInterfaceDataChannelWrite *)0x0;
  return this;
}

// UNDIDataChannelWriteSimCacheData @ 148e54a70

UNDIDataChannelWriteSimCacheData * __thiscall
UNDIDataChannelWriteSimCacheData::UNDIDataChannelWriteSimCacheData
          (UNDIDataChannelWriteSimCacheData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNDIDataChannelWriteSimCacheData__6B_;
  (this->FrameData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameData).ArrayNum = 0;
  (this->FrameData).ArrayMax = 0;
  (this->DataChannelReference).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DataChannelReference).AssetPath.PackageName.Number = 0;
  (this->DataChannelReference).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DataChannelReference).AssetPath.AssetName.Number = 0;
  (this->DataChannelReference).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DataChannelReference).SubPathString.Data.ArrayNum = 0;
  (this->DataChannelReference).SubPathString.Data.ArrayMax = 0;
  (this->DataInterface).field0_0x0.DebugPtr = (UNiagaraDataInterfaceDataChannelWrite *)0x0;
  return this;
}

// ~UNDIDataChannelWriteSimCacheData @ 148e566c0

void __thiscall
UNDIDataChannelWriteSimCacheData::~UNDIDataChannelWriteSimCacheData
          (UNDIDataChannelWriteSimCacheData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNDIDataChannelWriteSimCacheData__6B_;
  pFVar1 = (this->DataChannelReference).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNDIDataChannelWriteSimCacheFrame,int>
            ((FNDIDataChannelWriteSimCacheFrame *)(this->FrameData).AllocatorInstance.Data,
             (this->FrameData).ArrayNum);
  pFVar1 = (this->FrameData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148e6de50

UClass * __cdecl UNDIDataChannelWriteSimCacheData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDIDataChannelWriteSimCacheData",
               &Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.InnerSingleton,
               StaticRegisterNativesUNDIDataChannelWriteSimCacheData,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNDIDataChannelWriteSimCacheData>,
               InternalVTableHelperCtorCaller<UNDIDataChannelWriteSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDIDataChannelWriteSimCacheData.InnerSingleton;
}

// StaticRegisterNativesUNDIDataChannelWriteSimCacheData @ 148e81570

void __cdecl
UNDIDataChannelWriteSimCacheData::StaticRegisterNativesUNDIDataChannelWriteSimCacheData(void)

{
  return;
}

