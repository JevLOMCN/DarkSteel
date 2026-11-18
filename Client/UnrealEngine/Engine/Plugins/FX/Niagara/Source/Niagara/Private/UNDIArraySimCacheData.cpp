// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 149077930

UClass * __cdecl UNDIArraySimCacheData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDIArraySimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDIArraySimCacheData",
               &Z_Registration_Info_UClass_UNDIArraySimCacheData.InnerSingleton,
               StaticRegisterNativesUNDIArraySimCacheData,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNDIArraySimCacheData>,
               InternalVTableHelperCtorCaller<UNDIArraySimCacheData>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDIArraySimCacheData.InnerSingleton;
}

// UNDIArraySimCacheData @ 1490b2230

UNDIArraySimCacheData * __thiscall
UNDIArraySimCacheData::UNDIArraySimCacheData(UNDIArraySimCacheData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNDIArraySimCacheData__6B_;
  (this->CpuFrameData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CpuFrameData).ArrayNum = 0;
  (this->CpuFrameData).ArrayMax = 0;
  (this->GpuFrameData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GpuFrameData).ArrayNum = 0;
  (this->GpuFrameData).ArrayMax = 0;
  (this->BufferData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferData).ArrayNum = 0;
  (this->BufferData).ArrayMax = 0;
  (this->FindOrAddGuard).State = (atomic<unsigned_char>)0x0;
  return this;
}

// UNDIArraySimCacheData @ 1490b2280

UNDIArraySimCacheData * __thiscall
UNDIArraySimCacheData::UNDIArraySimCacheData
          (UNDIArraySimCacheData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNDIArraySimCacheData__6B_;
  (this->CpuFrameData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CpuFrameData).ArrayNum = 0;
  (this->CpuFrameData).ArrayMax = 0;
  (this->GpuFrameData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GpuFrameData).ArrayNum = 0;
  (this->GpuFrameData).ArrayMax = 0;
  (this->BufferData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferData).ArrayNum = 0;
  (this->BufferData).ArrayMax = 0;
  (this->FindOrAddGuard).State = (atomic<unsigned_char>)0x0;
  return this;
}

// ~UNDIArraySimCacheData @ 1490b8440

void __thiscall UNDIArraySimCacheData::~UNDIArraySimCacheData(UNDIArraySimCacheData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNDIArraySimCacheData__6B_;
  pFVar1 = (this->BufferData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GpuFrameData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CpuFrameData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// FindOrAddData @ 1490f95f0

int __thiscall
UNDIArraySimCacheData::FindOrAddData
          (UNDIArraySimCacheData *this,TArrayView<unsigned_char_const_,int> *param_1)

{
  FMutex *this_00;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  uchar *_Buf2;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  this_00 = &this->FindOrAddGuard;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(this_00);
  }
  iVar7 = param_1->ArrayNum;
  pTVar1 = &this->BufferData;
  iVar3 = (this->BufferData).ArrayNum;
  iVar9 = 0;
  if (-1 < iVar3 - iVar7) {
    _Buf2 = param_1->DataPtr;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    do {
      iVar8 = memcmp(pFVar4 + iVar9,_Buf2,(longlong)iVar7);
      if (iVar8 == 0) goto LAB_1490f96f2;
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar3 - iVar7);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_1->ArrayNum,&pTVar1->AllocatorInstance,&(this->BufferData).ArrayNum,
             &(this->BufferData).ArrayMax);
  memcpy((pTVar1->AllocatorInstance).Data + iVar3,param_1->DataPtr,(longlong)iVar7);
  iVar9 = iVar3;
LAB_1490f96f2:
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return iVar9;
}

// GetPrivateStaticClass @ 149107ec0

UClass * __cdecl UNDIArraySimCacheData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDIArraySimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDIArraySimCacheData",
               &Z_Registration_Info_UClass_UNDIArraySimCacheData.InnerSingleton,
               StaticRegisterNativesUNDIArraySimCacheData,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNDIArraySimCacheData>,
               InternalVTableHelperCtorCaller<UNDIArraySimCacheData>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDIArraySimCacheData.InnerSingleton;
}

// StaticRegisterNativesUNDIArraySimCacheData @ 149139c60

void __cdecl UNDIArraySimCacheData::StaticRegisterNativesUNDIArraySimCacheData(void)

{
  return;
}

