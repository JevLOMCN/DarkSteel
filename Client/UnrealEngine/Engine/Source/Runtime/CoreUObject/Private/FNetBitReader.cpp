// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 13

// FNetBitReader @ 141fbde20

FNetBitReader * __thiscall FNetBitReader::FNetBitReader(FNetBitReader *this,FNetBitReader *param_1)

{
  FBitReader::FBitReader((FBitReader *)this,(FBitReader *)param_1);
  this->_padding_ = (longlong)&___7FNetBitReader__6B_;
  this->PackageMap = param_1->PackageMap;
  this->ExtendedError = param_1->ExtendedError;
  param_1->ExtendedError = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
  return this;
}

// FNetBitReader @ 141fbde80

FNetBitReader * __thiscall FNetBitReader::FNetBitReader(FNetBitReader *this,FNetBitReader *param_1)

{
  TPimplPtr<UE::Net::FNetResult,1> TVar1;
  
  FBitReader::FBitReader((FBitReader *)this,(FBitReader *)param_1);
  this->_padding_ = (longlong)&___7FNetBitReader__6B_;
  this->PackageMap = param_1->PackageMap;
  this->ExtendedError = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
  if (param_1->ExtendedError != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    TVar1 = (TPimplPtr<UE::Net::FNetResult,1>)(**(code **)((longlong)param_1->ExtendedError + -8))()
    ;
    this->ExtendedError = TVar1;
  }
  return this;
}

// FNetBitReader @ 141fbdef0

FNetBitReader * __thiscall
FNetBitReader::FNetBitReader(FNetBitReader *this,UPackageMap *param_1,uchar *param_2,long64 param_3)

{
  FBitReader::FBitReader((FBitReader *)this,param_2,param_3);
  this->PackageMap = param_1;
  this->_padding_ = (longlong)&___7FNetBitReader__6B_;
  this->ExtendedError = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
  return this;
}

// ~FNetBitReader @ 141fbfd40

void __thiscall FNetBitReader::~FNetBitReader(FNetBitReader *this)

{
  TPimplPtr<UE::Net::FNetResult,1> TVar1;
  
  this->_padding_ = (longlong)&___7FNetBitReader__6B_;
  TVar1 = this->ExtendedError;
  if (TVar1 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
  }
  FBitReader::~FBitReader((FBitReader *)this);
  return;
}

// operator= @ 141fc0a40

FNetBitReader * __thiscall FNetBitReader::operator=(FNetBitReader *this,FNetBitReader *param_1)

{
  TPimplPtr<UE::Net::FNetResult,1> *pTVar1;
  TPimplPtr<UE::Net::FNetResult,1> TVar2;
  TPimplPtr<UE::Net::FNetResult,1> *pTVar3;
  
  FBitReader::operator=((FBitReader *)this,(FBitReader *)param_1);
  pTVar1 = &this->ExtendedError;
  pTVar3 = &param_1->ExtendedError;
  this->PackageMap = param_1->PackageMap;
  if (pTVar3 != pTVar1) {
    TVar2 = *pTVar1;
    *pTVar1 = *pTVar3;
    *pTVar3 = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    if (TVar2 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)TVar2 + -0x10))((longlong)TVar2 + -0x10);
    }
  }
  return this;
}

// operator= @ 141fc0ab0

FNetBitReader * __thiscall FNetBitReader::operator=(FNetBitReader *this,FNetBitReader *param_1)

{
  TPimplPtr<UE::Net::FNetResult,1> *pTVar1;
  TPimplPtr<UE::Net::FNetResult,1> TVar2;
  
  FBitReader::operator=((FBitReader *)this,(FBitReader *)param_1);
  pTVar1 = &this->ExtendedError;
  this->PackageMap = param_1->PackageMap;
  if (&param_1->ExtendedError != pTVar1) {
    TVar2 = *pTVar1;
    if (TVar2 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      *pTVar1 = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
      (**(code **)((longlong)TVar2 + -0x10))();
    }
    TVar2 = param_1->ExtendedError;
    if (TVar2 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      TVar2 = (TPimplPtr<UE::Net::FNetResult,1>)(**(code **)((longlong)TVar2 + -8))();
      *pTVar1 = TVar2;
    }
  }
  return this;
}

// operator<< @ 141fc1610

FArchive * __thiscall FNetBitReader::operator<<(FNetBitReader *this,UObject **param_1)

{
  UPackageMap *pUVar1;
  code *pcVar2;
  UClass *pUVar3;
  
  pUVar1 = this->PackageMap;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b8);
  pUVar3 = Z_Construct_UClass_UObject_NoRegister();
  (*pcVar2)(pUVar1,this,pUVar3,param_1,0);
  return (FArchive *)this;
}

// operator<< @ 141fc1680

FArchive * __thiscall FNetBitReader::operator<<(FNetBitReader *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FObjectPtr_u_0 FStackX_8;
  
  FStackX_8.Handle = (UObject *)0xfffffefbf1234567;
  if ((this->_padding_ & 1) == 0) {
    FStackX_8 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
  }
  (**(code **)(this->_padding_ + 0x168))(this,&FStackX_8);
  FVar1 = FStackX_8;
  if ((((this->_padding_ & 1) != 0) || ((this->_padding_ & 0x2000000) != 0)) &&
     (FStackX_8.Handle != (UObject *)0xfffffefbf1234567)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FStackX_8.Handle != (UObject *)0x0)
       ) {
      UE::GC::MarkAsReachable(FStackX_8.Handle);
    }
    (param_1->field0_0x0).Handle = (UObject *)FVar1;
  }
  return (FArchive *)this;
}

// operator<< @ 141fc1690

FArchive * __thiscall FNetBitReader::operator<<(FNetBitReader *this,FSoftObjectPath *param_1)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::operator<<((FArchive *)this,&local_28);
  local_18.Size = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(param_1,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

// operator<< @ 141fc1720

FArchive * __thiscall FNetBitReader::operator<<(FNetBitReader *this,FSoftObjectPtr *param_1)

{
  byte bVar1;
  longlong lVar2;
  UPackageMap *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FArchive *pFVar7;
  UClass *pUVar8;
  uint uVar9;
  UObject *local_res8;
  UObject *local_res18 [2];
  code *local_28;
  <lambda> *local_20;
  
  (**(code **)(this->_padding_ + 0x230))(this,&FEngineNetworkCustomVersion::Guid);
  uVar6 = (**(code **)(this->_padding_ + 0x48))(this);
  if (uVar6 < 0x1d) {
    FArchiveUObject::SerializeSoftObjectPtr((FArchive *)this,param_1);
    return (FArchive *)this;
  }
  bVar5 = false;
  if ((this->_padding_ & 0x200) == 0) {
    lVar2 = this->_padding_;
    if (lVar2 < this->_padding_) {
      uVar9 = (uint)(lVar2 >> 3);
      uVar6 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar4)();
          return pFVar7;
        }
      }
      bVar1 = *(byte *)((longlong)(int)uVar9 + this->_padding_);
      this->_padding_ = this->_padding_ + 1;
      bVar5 = (bVar1 & '\x01' << ((byte)lVar2 & 7)) != 0;
    }
    else {
      FBitReader::SetOverflowed((FBitReader *)this,1);
      bVar5 = false;
    }
  }
  local_res8 = (UObject *)0x0;
  if (bVar5) {
    FArchiveUObject::SerializeSoftObjectPtr((FArchive *)this,param_1);
  }
  else {
    pUVar3 = this->PackageMap;
    pcVar4 = *(code **)(pUVar3->_padding_ + 0x2b8);
    pUVar8 = Z_Construct_UClass_UObject_NoRegister();
    (*pcVar4)(pUVar3,this,pUVar8,&local_res8,0);
    local_res18[0] = local_res8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    FSoftObjectPtr::operator=(param_1,(FObjectPtr)local_res18);
  }
  local_20 = &FSoftObjectPath_DefaultPreFixupForPIEFunction;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<FSoftObjectPath_DefaultPreFixupForPIEFunction::<lambda>_const_,void,int,FSoftObjectPath_&>
             ::Call;
  FSoftObjectPath::FixupForPIE
            ((FSoftObjectPath *)&param_1->field_0x8,
             (TFunctionRef<void___cdecl(int,FSoftObjectPath_&)> *)&local_28);
  return (FArchive *)this;
}

// operator<< @ 141fc18d0

FArchive * __thiscall FNetBitReader::operator<<(FNetBitReader *this,FWeakObjectPtr *param_1)

{
  UObject *pUStackX_8;
  UObject *apUStackX_18 [2];
  
  if ((this->_padding_ & 0x3000000) != 0x1000000) {
    pUStackX_8 = FWeakObjectPtr::Get(param_1,true);
    (**(code **)(this->_padding_ + 0x168))(this,&pUStackX_8);
    if (((this->_padding_ & 1) != 0) || ((this->_padding_ & 0x2000000) != 0)) {
      apUStackX_18[0] = pUStackX_8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUStackX_8);
      }
      FWeakObjectPtr::operator=(param_1,(FObjectPtr)apUStackX_18);
    }
  }
  return (FArchive *)this;
}

// operator<< @ 141fc18e0

FArchive * __thiscall FNetBitReader::operator<<(FNetBitReader *this,FName *param_1)

{
  UPackageMap *pUVar1;
  
  pUVar1 = this->PackageMap;
  if (pUVar1 != (UPackageMap *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,this,param_1);
    return (FArchive *)this;
  }
  UPackageMap::StaticSerializeName((FArchive *)this,param_1);
  return (FArchive *)this;
}

// CountMemory @ 141fc9410

void __thiscall FNetBitReader::CountMemory(FNetBitReader *this,FArchive *param_1)

{
  FBitReader::CountMemory((FBitReader *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000141fc9431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x10,0x10);
  return;
}

