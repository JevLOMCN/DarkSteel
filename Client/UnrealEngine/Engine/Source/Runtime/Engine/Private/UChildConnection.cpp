// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// StaticClass @ 147268e80

UClass * __cdecl UChildConnection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChildConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ChildConnection",
               &Z_Registration_Info_UClass_UChildConnection.InnerSingleton,
               StaticRegisterNativesUChildConnection,0x1f90,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UChildConnection>,
               InternalVTableHelperCtorCaller<UChildConnection>,local_res8,
               UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChildConnection.InnerSingleton;
}

// UChildConnection @ 14726cb90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChildConnection * __thiscall
UChildConnection::UChildConnection(UChildConnection *this,FVTableHelper *param_1)

{
  UNetConnection::UNetConnection((UNetConnection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  (this->Parent).field0_0x0.DebugPtr = (UNetConnection *)0x0;
  return this;
}

// ~UChildConnection @ 14726d350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildConnection::~UChildConnection(UChildConnection *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  UNetConnection::~UNetConnection((UNetConnection *)this);
  return;
}

// AssertValid @ 14726e8e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildConnection::AssertValid(UChildConnection *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014726e8ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x300))();
  return;
}

// FlushNet @ 14726ec60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildConnection::FlushNet(UChildConnection *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014726ec6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x308))();
  return;
}

// GetPrivateStaticClass @ 14726f2c0

UClass * __cdecl UChildConnection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChildConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ChildConnection",
               &Z_Registration_Info_UClass_UChildConnection.InnerSingleton,
               StaticRegisterNativesUChildConnection,0x1f90,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UChildConnection>,
               InternalVTableHelperCtorCaller<UChildConnection>,local_res8,
               UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChildConnection.InnerSingleton;
}

// GetUChildConnection @ 1472703b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChildConnection * __thiscall UChildConnection::GetUChildConnection(UChildConnection *this)

{
  return this;
}

// InitLocalConnection @ 147270400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UChildConnection::InitLocalConnection
          (UChildConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          EConnectionState param_4,int param_5,int param_6)

{
  return;
}

// InitRemoteConnection @ 147270420

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UChildConnection::InitRemoteConnection
          (UChildConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          FInternetAddr *param_4,EConnectionState param_5,int param_6,int param_7)

{
  return;
}

// InitSendBuffer @ 147270440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildConnection::InitSendBuffer(UChildConnection *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014727044a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
  return;
}

// IsEncryptionEnabled @ 147270460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChildConnection::IsEncryptionEnabled(UChildConnection *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014727046a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x388))();
  return (bool)uVar1;
}

// IsNetReady @ 1472704a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall UChildConnection::IsNetReady(UChildConnection *this,bool param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001472704aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 800))();
  return iVar1;
}

// IsNetReady @ 1472704c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UChildConnection::IsNetReady(UChildConnection *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001472704ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x318))();
  return (bool)uVar1;
}

// LowLevelDescribe @ 147270510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UChildConnection::LowLevelDescribe(UChildConnection *this,FString *__return_storage_ptr__)

{
  (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x2d8))();
  return __return_storage_ptr__;
}

// LowLevelGetRemoteAddress @ 147270540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UChildConnection::LowLevelGetRemoteAddress
          (UChildConnection *this,FString *__return_storage_ptr__,bool param_1)

{
  (**(code **)(((this->Parent).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
  return __return_storage_ptr__;
}

// LowLevelSend @ 147270570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UChildConnection::LowLevelSend
          (UChildConnection *this,void *param_1,int param_2,FOutPacketTraits *param_3)

{
  return;
}

// StaticRegisterNativesUChildConnection @ 1472709e0

void __cdecl UChildConnection::StaticRegisterNativesUChildConnection(void)

{
  return;
}

// Tick @ 147270b40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildConnection::Tick(UChildConnection *this,float param_1)

{
  EConnectionState EVar1;
  
  EVar1 = UNetConnection::GetConnectionState((this->Parent).field0_0x0.DebugPtr);
  UNetConnection::SetConnectionState((UNetConnection *)this,EVar1);
  return;
}

// UChildConnection @ 147fa5bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChildConnection * __thiscall
UChildConnection::UChildConnection(UChildConnection *this,FObjectInitializer *param_1)

{
  UNetConnection::UNetConnection((UNetConnection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  (this->Parent).field0_0x0.DebugPtr = (UNetConnection *)0x0;
  return this;
}

// AssignConnectionHandle @ 147fb3f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildConnection::AssignConnectionHandle(UChildConnection *this)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  UNetConnection *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_67 [3];
  uint local_64;
  int iStack_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  pUVar5 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar5 != (UNetConnection *)0x0) {
    iVar3 = (pUVar5->Children).ArrayNum;
    local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_58.NumBits = 0;
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(&local_58,iVar3 + 2,false);
    if ((local_58.NumBits < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_58;
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_58.AllocatorInstance.SecondaryData;
    }
    *(uint *)FVar10 = *(uint *)FVar10 | 1;
    pFVar13 = (pUVar5->Children).AllocatorInstance.Data;
    iVar4 = (pUVar5->Children).ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar4 * 8;
    while( true ) {
      if ((pUVar5->Children).ArrayNum != iVar4) {
        local_68 = 0;
        `TCheckedPointerIterator<TObjectPtr<UChildConnection>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_68);
      }
      if (pFVar13 == pFVar1) break;
      uVar11 = 0;
      if ((int)*(undefined8 *)(*(longlong *)pFVar13 + 0x1eb4) != 0) {
        uVar11 = (uint)((ulonglong)*(undefined8 *)(*(longlong *)pFVar13 + 0x1eb4) >> 0x20);
      }
      if (uVar11 <= iVar3 + 1U) {
        if ((((int)uVar11 < 0) || (local_58.NumBits <= (int)uVar11)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar10 = (ForElementType<unsigned_int>)&local_58;
        if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar10 = local_58.AllocatorInstance.SecondaryData;
        }
        uVar8 = uVar11;
        if ((int)uVar11 < 0) {
          uVar8 = uVar11 + 0x1f;
        }
        puVar2 = (uint *)((longlong)FVar10 + (longlong)((int)uVar8 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar11 & 0x1f);
      }
      pFVar13 = pFVar13 + 8;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_58;
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_58.AllocatorInstance.SecondaryData;
    }
    uVar12 = 0;
    FVar9 = FVar10;
    if (local_58.NumBits + 0x1fU >> 5 != 0) {
LAB_147fb40c0:
      if (*(uint *)FVar9 == 0xffffffff) goto code_r0x000147fb40c5;
      uVar11 = ~*(uint *)((longlong)FVar10 + uVar12 * 4);
      iVar3 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
        }
      }
      iStack_60 = 0x20;
      if (uVar11 != 0) {
        iStack_60 = iVar3;
      }
      iStack_60 = iStack_60 + (int)uVar12 * 0x20;
      if ((local_58.NumBits <= iStack_60) || (iStack_60 == -1)) goto LAB_147fb40f5;
      goto LAB_147fb4107;
    }
LAB_147fb40f5:
    `UChildConnection::AssignConnectionHandle'::__l15::<lambda_1>::operator()(local_67);
    iStack_60 = 0;
LAB_147fb4107:
    local_64 = (pUVar5->ConnectionHandle).ParentConnectionId;
    *(ulonglong *)&this->field_0x1eb4 = CONCAT44(iStack_60,local_64);
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
    }
  }
  return;
code_r0x000147fb40c5:
  uVar11 = (int)uVar12 + 1;
  uVar12 = (ulonglong)uVar11;
  FVar9 = (ForElementType<unsigned_int>)((longlong)FVar9 + 4);
  if ((int)(local_58.NumBits + 0x1fU >> 5) <= (int)uVar11) goto LAB_147fb40f5;
  goto LAB_147fb40c0;
}

// CleanUp @ 147fb8a70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UChildConnection::CleanUp(UChildConnection *this)

{
  if ((GIsRunning) && (*(longlong *)&this->field_0x98 != 0)) {
    if ((*(uint *)(*(longlong *)&this->field_0x98 + 8) & 0x18000) == 0) {
      (**(code **)(**(longlong **)&this->field_0x98 + 0x4a0))(*(longlong **)&this->field_0x98,this);
    }
    *(undefined8 *)&this->field_0x98 = 0;
    *(undefined8 *)&this->field_0x30 = 0;
    *(undefined8 *)&this->field_0x68 = 0;
    *(undefined8 *)&this->field_0x58 = 0;
    return;
  }
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  return;
}

// CloseAndRemoveChild @ 147fbad10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UChildConnection::CloseAndRemoveChild(UChildConnection *this,ECloseChildFlags param_1)

{
  UNetConnection *pUVar1;
  UGameInstance *this_00;
  FScriptContainerElement *pFVar2;
  ULocalPlayer *pUVar3;
  longlong lVar4;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FName local_res8;
  uint local_res10 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (4 < (byte)LogNet._0_1_) {
    local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res8.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res8,&local_48);
    pUVar1 = (this->Parent).field0_0x0.DebugPtr;
    if (pUVar1 == (UNetConnection *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,&local_58);
    }
    if (*(longlong *)&this->field_0x58 == 0) {
      ::FString::FString(&local_68,L"None");
    }
    else {
      local_res8 = *(FName *)(*(longlong *)&this->field_0x58 + 0x18);
      ::FName::ToString(&local_res8,&local_68);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1 & SendCloseMessage) != None) {
    if (*(longlong *)&this->field_0x30 == 0) {
      if ((byte)LogNet._0_1_ < 3) goto LAB_147fbafc3;
      pUVar1 = (this->Parent).field0_0x0.DebugPtr;
      if (pUVar1 == (UNetConnection *)0x0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        local_res8 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res8,&local_68);
      }
      if (*(longlong *)&this->field_0x58 == 0) {
        ::FString::FString(&local_58,L"None");
      }
      else {
        local_res8 = *(FName *)(*(longlong *)&this->field_0x58 + 0x18);
        ::FName::ToString(&local_res8,&local_58);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    else {
      local_res10[0] = (uint)*(byte *)(*(longlong *)&this->field_0x30 + 0x4fc);
      UE::Net::TNetControlMessageImpl<34,int>::Send
                ((this->Parent).field0_0x0.DebugPtr,(int *)local_res10);
      if ((byte)LogNet._0_1_ < 5) goto LAB_147fbafc3;
      pUVar1 = (this->Parent).field0_0x0.DebugPtr;
      if (pUVar1 == (UNetConnection *)0x0) {
        ::FString::FString(&local_68,L"None");
      }
      else {
        local_res8 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_res8,&local_68);
      }
      if (*(longlong *)&this->field_0x58 == 0) {
        ::FString::FString(&local_58,L"None");
      }
      else {
        local_res8 = *(FName *)(*(longlong *)&this->field_0x58 + 0x18);
        ::FName::ToString(&local_res8,&local_58);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
LAB_147fbafc3:
  if ((((*(APlayerController **)&this->field_0x30 != (APlayerController *)0x0) &&
       (pUVar3 = APlayerController::GetLocalPlayer(*(APlayerController **)&this->field_0x30),
       pUVar3 != (ULocalPlayer *)0x0)) &&
      (lVar4 = (**(code **)(*(longlong *)this + 0x180))(this), lVar4 != 0)) &&
     (this_00 = *(UGameInstance **)(lVar4 + 0x230), this_00 != (UGameInstance *)0x0)) {
    pTVar5 = UGameInstance::GetLocalPlayers(this_00);
    pFVar2 = (pTVar5->AllocatorInstance).Data;
    for (pFVar6 = pFVar2; pFVar6 != pFVar2 + (longlong)pTVar5->ArrayNum * 8; pFVar6 = pFVar6 + 8) {
      if (*(ULocalPlayer **)pFVar6 == pUVar3) {
        if ((int)((longlong)pFVar6 - (longlong)pFVar2 >> 3) != -1) {
          if (4 < (byte)LogNet._0_1_) {
            local_res8 = (FName)pUVar3->_padding_;
            ::FName::ToString(&local_res8,&local_48);
            pUVar1 = (this->Parent).field0_0x0.DebugPtr;
            if (pUVar1 == (UNetConnection *)0x0) {
              ::FString::FString(&local_68,L"None");
            }
            else {
              local_res8 = (FName)pUVar1->_padding_;
              ::FName::ToString(&local_res8,&local_68);
            }
            if (*(longlong *)&this->field_0x58 == 0) {
              ::FString::FString(&local_58,L"None");
            }
            else {
              local_res8 = *(FName *)(*(longlong *)&this->field_0x58 + 0x18);
              ::FName::ToString(&local_res8,&local_58);
            }
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          (**(code **)(this_00->_padding_ + 0x338))(this_00,pUVar3);
        }
        break;
      }
    }
  }
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if ((pUVar1 != (UNetConnection *)0x0) &&
     (UNetConnection::RemoveChild(pUVar1,this), (param_1 & DestroyActors) != None)) {
    (**(code **)(*(longlong *)this + 0x348))(this);
  }
  return;
}

// GracefulClose @ 147fdc370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UChildConnection::GracefulClose(UChildConnection *this,TNetResult<ENetCloseResult> *param_1)

{
  UNetConnection *pUVar1;
  
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar1 != (UNetConnection *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147fdc37f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x340))();
    return;
  }
  return;
}

// HandleClientPlayer @ 147fdc580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UChildConnection::HandleClientPlayer
          (UChildConnection *this,APlayerController *param_1,UNetConnection *param_2)

{
  undefined8 *puVar1;
  TObjectPtr<UNetConnection>_u_0 TVar2;
  UNetConnection *this_00;
  code *pcVar3;
  ForAnyElementType *pFVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  UWorld *pUVar10;
  UClass *pUVar11;
  AActor *pAVar12;
  APlayerController *pAVar13;
  UEnum *pUVar14;
  wchar_t *pwVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar19;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar20;
  bool bVar21;
  undefined1 auStackY_1f8 [32];
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_1c8;
  int local_1b8 [2];
  FNetResult local_1b0;
  APlayerController *local_180;
  UNetConnection *local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  UClass *local_158;
  UEnum *local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  TActorIteratorBase<TActorIterator<APlayerController>_> local_118;
  FString local_b8;
  code *local_a8;
  longlong local_98 [3];
  longlong *local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_78 = *(longlong *)&param_2->PlayerConnectionFunction;
  local_50 = (longlong *)0x0;
  bVar21 = *(longlong *)&param_2->PlayerConnectionFunction == 0;
  if (!bVar21) {
    puVar1 = *(undefined8 **)&(param_2->PlayerConnectionFunction).field_0x28;
    puVar16 = (undefined8 *)&(param_2->PlayerConnectionFunction).field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar16 = puVar1;
    }
    (**(code **)*puVar16)(puVar16,local_68);
    bVar21 = local_78 == 0;
  }
  if (local_78 != 0) {
    plVar17 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar17 = local_50;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (bVar21) {
    UEngine::GetLocalPlayerIterator
              (GEngine,&local_1c8,*(UWorld **)(*(longlong *)&this->field_0x58 + 0x1b8));
    pTVar19 = local_1c8.Container;
    for (; lVar9 = (longlong)local_1c8.Index, -1 < local_1c8.Index;
        local_1c8.Index = local_1c8.Index + 1) {
      pTVar20 = pTVar19;
      if (pTVar19->ArrayNum <= local_1c8.Index) goto LAB_147fdc770;
      if ((local_1c8.Index < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         pTVar20 = local_1c8.Container, bVar21)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((pTVar19->AllocatorInstance).Data + lVar9 * 8) != 0) goto LAB_147fdc770;
      pTVar19 = pTVar20;
    }
  }
  else {
    local_a8 = *(code **)&param_2->PlayerConnectionFunction;
    local_80 = (longlong *)0x0;
    if (local_a8 != (code *)0x0) {
      puVar1 = *(undefined8 **)&(param_2->PlayerConnectionFunction).field_0x28;
      puVar16 = (undefined8 *)&(param_2->PlayerConnectionFunction).field_0x10;
      if (puVar1 != (undefined8 *)0x0) {
        puVar16 = puVar1;
      }
      (**(code **)*puVar16)(puVar16,local_98);
    }
    local_180 = param_1;
    local_178 = param_2;
    UE::Core::Private::Function::CheckCallable(local_a8);
    pcVar3 = local_a8;
    plVar17 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar17 = local_80;
    }
    uVar8 = (**(code **)(*plVar17 + 8))();
    lVar9 = (*pcVar3)(uVar8);
    if (local_a8 != (code *)0x0) {
      plVar17 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar17 = local_80;
      }
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
LAB_147fdc8bd:
    if (lVar9 != 0) {
      pAVar12 = *(AActor **)(lVar9 + 0x30);
      if (pAVar12 != (AActor *)0x0) {
        if ((pAVar12->Role).Value == '\x03') {
          pUVar10 = AActor::GetWorld(pAVar12);
          UWorld::DestroyActor(pUVar10,*(AActor **)(lVar9 + 0x30),false,true);
        }
        else {
          TVar2 = (this->Parent).field0_0x0;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          plVar17 = *(longlong **)((longlong)TVar2 + 0x48);
          for (plVar18 = plVar17; plVar18 != plVar17 + ((TVar2.DebugPtr)->Children).ArrayNum;
              plVar18 = plVar18 + 1) {
            if ((UChildConnection *)*plVar18 == this) {
              local_1b8[0] = (int)((longlong)plVar18 - (longlong)plVar17 >> 3);
              goto LAB_147fdc939;
            }
          }
          local_1b8[0] = -1;
LAB_147fdc939:
          UE::Net::TNetControlMessageImpl<15,int>::Send
                    ((this->Parent).field0_0x0.DebugPtr,local_1b8);
        }
        *(undefined8 *)(*(longlong *)(lVar9 + 0x30) + 0x378) = 0;
        *(undefined8 *)(*(longlong *)(lVar9 + 0x30) + 0x560) = 0;
        *(undefined8 *)(lVar9 + 0x30) = 0;
      }
      *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)&this->field_0x38;
      AActor::SetRole((AActor *)param_1,ROLE_AutonomousProxy);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      (param_1->NetConnection).field0_0x0.DebugPtr = param_2;
      (**(code **)(param_1->_padding_ + 0xdf0))(param_1,lVar9);
      if (5 < (byte)LogNet._0_1_) {
        local_170 = *(FName *)(lVar9 + 0x18);
        ::FName::ToString(&local_170,&local_138);
        local_168 = (FName)param_1->_padding_;
        ::FName::ToString(&local_168,&local_148);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      *(APlayerController **)&this->field_0x30 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      *(APlayerController **)&this->field_0x98 = param_1;
      uVar7 = APlayerController::GetClientHandshakeId(param_1);
      *(uint *)&this->field_0x190 = uVar7;
      TMulticastDelegate<void___cdecl(UNetConnection_*,APlayerController_*,UNetConnection_*),FDefaultDelegateUserPolicy>
      ::Broadcast(&param_2->OnConnectionOpened,(UNetConnection *)this,param_1,param_2);
      UNetConnection::NotifyConnectionUpdated((UNetConnection *)this);
      return;
    }
  }
LAB_147fdcaa7:
  bVar21 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<5435733364554339510>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                      ,0x14b6,"NewPlayer != 0");
  if (bVar21) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (1 < (byte)LogNet._0_1_) {
    local_160 = (FName)param_1->_padding_;
    ::FName::ToString(&local_160,&local_128);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pUVar10 = AActor::GetWorld((AActor *)param_1);
  if ((pUVar10 == (UWorld *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("PC->GetWorld()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                          ,0x14bb,L""), bVar21)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar11 = Z_Construct_UClass_APlayerController_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  pUVar10 = AActor::GetWorld((AActor *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  local_118.Flags = OnlyActiveLevels|SkipPendingKill;
  local_118.State.bIsSet = false;
  local_158 = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  FActorIteratorState::FActorIteratorState
            (&local_118.State.TypedValue,pUVar10,(TSubclassOf<AActor>)&local_158);
  local_118.State.bIsSet = true;
  while( true ) {
    TActorIteratorBase<TActorIterator<APlayerController>_>::operator++(&local_118);
    if ((local_118.State.bIsSet == false) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar21)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_118.State.TypedValue.ReachedEnd != false) {
      if (local_118.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_118.State.TypedValue.CurrentWorld,
                   local_118.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_118.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_118.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      this_00 = (this->Parent).field0_0x0.DebugPtr;
      if (this_00 == (UNetConnection *)0x0) {
        bVar21 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5435733364554339524>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                            ,0x14c4,"Parent != nullptr");
        if (bVar21) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        pUVar14 = StaticEnum<enum_ENetCloseResult>();
        local_1b0.Result = 0x2e;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar14);
        }
        local_1b0.ResultEnumObj.WeakPtr.ObjectIndex = 0;
        local_1b0.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
        local_150 = pUVar14;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar14);
        }
        FWeakObjectPtr::operator=(&local_1b0.ResultEnumObj.WeakPtr,(FObjectPtr)&local_150);
        local_1b0.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.ErrorContext.Data.ArrayNum = 0;
        local_1b0.ErrorContext.Data.ArrayMax = 0;
        local_1b0.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
        local_1b0.RawResultEnumObj = pUVar14;
        pwVar15 = ::LexToString(BadChildConnectionIndex);
        ::FString::operator=(&local_1b0.ErrorContext,pwVar15);
        UNetConnection::Close(this_00,&local_1b0);
        if (local_1b0.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
          (**(code **)((longlong)local_1b0.NextResult + -0x10))
                    ((longlong)local_1b0.NextResult + -0x10);
        }
        if (local_1b0.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.ErrorContext.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
    if ((local_118.State.bIsSet == false) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar21)) break;
    pAVar12 = FActorIteratorState::GetActorChecked(&local_118.State.TypedValue);
    pAVar13 = CastChecked<APlayerController,AActor>(pAVar12);
    if (((byte)pAVar13->_padding_ < 3) && (4 < (byte)LogNet._0_1_)) {
      if ((local_118.State.bIsSet == false) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar21)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pAVar12 = FActorIteratorState::GetActorChecked(&local_118.State.TypedValue);
      pAVar13 = CastChecked<APlayerController,AActor>(pAVar12);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar13,&local_b8,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
LAB_147fdc770:
  iVar5 = local_1c8.Index;
  if ((local_1c8.Index < 0) || (pTVar20->ArrayNum <= local_1c8.Index)) goto LAB_147fdcaa7;
  if ((local_1c8.Index < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = ULocalPlayer::GetConnectionIdentifier
                    (*(ULocalPlayer **)((pTVar20->AllocatorInstance).Data + (longlong)iVar5 * 8));
  iVar6 = APlayerController::GetLocalPlayerConnectionIdentifier(param_1);
  pTVar19 = local_1c8.Container;
  if (iVar6 == iVar5) {
    lVar9 = (longlong)local_1c8.Index;
    uVar7 = 0;
    if (local_1c8.Index < (local_1c8.Container)->ArrayNum) {
      uVar7 = (uint)~local_1c8.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar9 = *(longlong *)(((local_1c8.Container)->AllocatorInstance).Data + lVar9 * 8);
    goto LAB_147fdc8bd;
  }
  do {
    uVar7 = local_1c8.Index + 1;
    pTVar20 = pTVar19;
    local_1c8.Index = uVar7;
    if (((int)uVar7 < 0) || (pTVar19->ArrayNum <= (int)uVar7)) break;
    if (((int)uVar7 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       pTVar20 = local_1c8.Container, bVar21)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar4 = &pTVar19->AllocatorInstance;
    pTVar19 = pTVar20;
  } while (*(longlong *)(pFVar4->Data + (longlong)(int)uVar7 * 8) == 0);
  goto LAB_147fdc770;
}

// InitChildConnection @ 147fdefc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UChildConnection::InitChildConnection
          (UChildConnection *this,UNetDriver *param_1,UNetConnection *param_2)

{
  EConnectionState EVar1;
  int iVar2;
  UPackageMap *pUVar3;
  FURL *pFVar4;
  int iVar5;
  FURL local_78;
  
  *(UNetDriver **)&this->field_0x58 = param_1;
  pFVar4 = FURL::FURL(&local_78,(wchar_t *)0x0);
  FURL::operator=((FURL *)&this->field_0x100,pFVar4);
  if (local_78.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Portal.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_78.Op.AllocatorInstance.Data,local_78.Op.ArrayNum);
  if (local_78.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Op.AllocatorInstance.Data);
  }
  if (local_78.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.RedirectURL.Data.AllocatorInstance.Data);
  }
  if (local_78.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Map.Data.AllocatorInstance.Data);
  }
  if (local_78.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Host.Data.AllocatorInstance.Data);
  }
  if (local_78.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Protocol.Data.AllocatorInstance.Data);
  }
  EVar1 = param_2->State;
  *(EConnectionState *)&this->field_0x18c = EVar1;
  FNetTrace::TraceConnectionStateUpdated
            (*(uint *)&this->field_0x1ed0,*(uint *)&this->field_0x1eb4,(uchar)EVar1);
  iVar2 = (param_2->URL).Host.Data.ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange
            ((FString *)&this->field_0x110,
             (wchar_t *)(param_2->URL).Host.Data.AllocatorInstance.Data,iVar5);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->Parent).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_2->PackageMap).field0_0x0.DebugPtr, pUVar3 != (UPackageMap *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  *(TObjectPtr<UPackageMap>_u_0 *)&this->field_0x68 = (param_2->PackageMap).field0_0x0;
  *(int *)&this->field_0x38 = (int)param_2->_padding_;
  UNetConnection::InitChannelData((UNetConnection *)this);
  AssignConnectionHandle(this);
  return;
}

// operator() @ 15051efc0

bool __thiscall
`UChildConnection::AssignConnectionHandle'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5435733364554335815>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5435733364554335815>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

