// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 12

// StaticClass @ 14eac5ee0

UClass * __cdecl UTcpMessagingSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTcpMessagingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TcpMessaging",L"TcpMessagingSettings",
               &Z_Registration_Info_UClass_UTcpMessagingSettings.InnerSingleton,
               StaticRegisterNativesUTcpMessagingSettings,0x60,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UTcpMessagingSettings>,
               InternalVTableHelperCtorCaller<UTcpMessagingSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTcpMessagingSettings.InnerSingleton;
}

// UTcpMessagingSettings @ 14eac7b10

UTcpMessagingSettings * __thiscall
UTcpMessagingSettings::UTcpMessagingSettings(UTcpMessagingSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bStopServiceWhenAppDeactivates = true;
  this->_padding_ = (longlong)&___7UTcpMessagingSettings__6B_;
  (this->ListenEndpoint).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListenEndpoint).Data.ArrayNum = 0;
  (this->ListenEndpoint).Data.ArrayMax = 0;
  (this->ConnectToEndpoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectToEndpoints).ArrayNum = 0;
  (this->ConnectToEndpoints).ArrayMax = 0;
  return this;
}

// UTcpMessagingSettings @ 14eac7b50

UTcpMessagingSettings * __thiscall
UTcpMessagingSettings::UTcpMessagingSettings
          (UTcpMessagingSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bStopServiceWhenAppDeactivates = true;
  this->_padding_ = (longlong)&___7UTcpMessagingSettings__6B_;
  (this->ListenEndpoint).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListenEndpoint).Data.ArrayNum = 0;
  (this->ListenEndpoint).Data.ArrayMax = 0;
  (this->ConnectToEndpoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectToEndpoints).ArrayNum = 0;
  (this->ConnectToEndpoints).ArrayMax = 0;
  return this;
}

// ~UTcpMessagingSettings @ 14eac8010

void __thiscall UTcpMessagingSettings::~UTcpMessagingSettings(UTcpMessagingSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTcpMessagingSettings__6B_;
  DestructItems<FString,int>
            ((FString *)(this->ConnectToEndpoints).AllocatorInstance.Data,
             (this->ConnectToEndpoints).ArrayNum);
  pFVar1 = (this->ConnectToEndpoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ListenEndpoint).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetConnectToEndpoints @ 14eaca8c0

void __thiscall
UTcpMessagingSettings::GetConnectToEndpoints
          (UTcpMessagingSettings *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FString local_28;
  
  iVar1 = (this->ConnectToEndpoints).ArrayNum;
  pFVar7 = (this->ConnectToEndpoints).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ConnectToEndpoints).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar8) break;
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + (longlong)param_1->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar5;
    }
    param_1->ArrayNum = iVar5 + 1;
    ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10),
                       (FString *)pFVar7);
    pFVar7 = pFVar7 + 0x10;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pwVar6 = FCommandLine::Get();
  bVar4 = FParse::Value(pwVar6,L"TcpMessagingConnect=",&local_28,false,(wchar_t **)0x0);
  if (bVar4) {
    ::FString::ParseIntoArray(&local_28,param_1,L",",true);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetConnectionRetryDelay @ 14eacaa30

int __thiscall UTcpMessagingSettings::GetConnectionRetryDelay(UTcpMessagingSettings *this)

{
  return this->ConnectionRetryDelay;
}

// GetConnectionRetryPeriod @ 14eacaa40

int __thiscall UTcpMessagingSettings::GetConnectionRetryPeriod(UTcpMessagingSettings *this)

{
  return this->ConnectionRetryPeriod;
}

// GetListenEndpoint @ 14eacab10

FString * __thiscall
UTcpMessagingSettings::GetListenEndpoint
          (UTcpMessagingSettings *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  ::FString::FString(__return_storage_ptr__,&this->ListenEndpoint);
  pwVar1 = FCommandLine::Get();
  FParse::Value(pwVar1,L"TcpMessagingListen=",__return_storage_ptr__,true,(wchar_t **)0x0);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14eacac00

UClass * __cdecl UTcpMessagingSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTcpMessagingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TcpMessaging",L"TcpMessagingSettings",
               &Z_Registration_Info_UClass_UTcpMessagingSettings.InnerSingleton,
               StaticRegisterNativesUTcpMessagingSettings,0x60,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UTcpMessagingSettings>,
               InternalVTableHelperCtorCaller<UTcpMessagingSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTcpMessagingSettings.InnerSingleton;
}

// IsTransportEnabled @ 14eacbe60

bool __thiscall UTcpMessagingSettings::IsTransportEnabled(UTcpMessagingSettings *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (this->EnableTransport == false) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"TcpMessagingListen=");
    if (!bVar1) {
      pwVar2 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar2,L"TcpMessagingConnect=");
      return bVar1;
    }
  }
  return true;
}

// ShouldStopServiceWhenAppDeactivates @ 14eace830

bool __thiscall
UTcpMessagingSettings::ShouldStopServiceWhenAppDeactivates(UTcpMessagingSettings *this)

{
  return this->bStopServiceWhenAppDeactivates;
}

// StaticRegisterNativesUTcpMessagingSettings @ 14eaceb60

void __cdecl UTcpMessagingSettings::StaticRegisterNativesUTcpMessagingSettings(void)

{
  return;
}

