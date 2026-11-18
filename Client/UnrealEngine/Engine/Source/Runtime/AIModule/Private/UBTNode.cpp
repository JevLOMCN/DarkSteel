// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 97

// GetNodeMemory<unsigned_char> @ 146e7ca20

uchar * __thiscall
UBTNode::GetNodeMemory<unsigned_char>(UBTNode *this,FBehaviorTreeInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  
  pFVar1 = (param_1->InstanceMemory).AllocatorInstance.Data;
  if ((param_1->InstanceMemory).ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar2)();
      return puVar4;
    }
  }
  return (uchar *)(pFVar1 + this->MemoryOffset);
}

// GetNodeMemory<unsigned_char> @ 146e7ca80

uchar * __thiscall
UBTNode::GetNodeMemory<unsigned_char>(UBTNode *this,FBehaviorTreeInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  
  pFVar1 = (param_1->InstanceMemory).AllocatorInstance.Data;
  if ((param_1->InstanceMemory).ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar2)();
      return puVar4;
    }
  }
  return (uchar *)(pFVar1 + this->MemoryOffset);
}

// StaticClass @ 146eaa9f0

UClass * __cdecl UBTNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTNode",&Z_Registration_Info_UClass_UBTNode.InnerSingleton,
               StaticRegisterNativesUBTNode,0x58,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Game",InternalConstructor<UBTNode>,InternalVTableHelperCtorCaller<UBTNode>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTNode.InnerSingleton;
}

// CastInstanceNodeMemory<FBTCompositeMemory> @ 146eb0f00

FBTCompositeMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTCompositeMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTCompositeMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 2) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTCompositeMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTCompositeMemory *)param_1;
}

// CastInstanceNodeMemory<FBTConditionalLoopDecoratorMemory> @ 146eb0fd0

FBTConditionalLoopDecoratorMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTConditionalLoopDecoratorMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTConditionalLoopDecoratorMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 4) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTConditionalLoopDecoratorMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTConditionalLoopDecoratorMemory *)param_1;
}

// CastInstanceNodeMemory<FBTConeCheckDecoratorMemory> @ 146eb10a0

FBTConeCheckDecoratorMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTConeCheckDecoratorMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  FBTConeCheckDecoratorMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  sVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (sVar3 == 0) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTConeCheckDecoratorMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTConeCheckDecoratorMemory *)param_1;
}

// CastInstanceNodeMemory<FBTCooldownDecoratorMemory> @ 146eb1170

FBTCooldownDecoratorMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTCooldownDecoratorMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTCooldownDecoratorMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 0x10) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTCooldownDecoratorMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTCooldownDecoratorMemory *)param_1;
}

// CastInstanceNodeMemory<FBTEQSServiceMemory> @ 146eb1240

FBTEQSServiceMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTEQSServiceMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTEQSServiceMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 4) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTEQSServiceMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTEQSServiceMemory *)param_1;
}

// CastInstanceNodeMemory<FBTEnvQueryTaskMemory> @ 146eb1310

FBTEnvQueryTaskMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTEnvQueryTaskMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTEnvQueryTaskMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 4) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTEnvQueryTaskMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTEnvQueryTaskMemory *)param_1;
}

// CastInstanceNodeMemory<FBTFocusMemory> @ 146eb13e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBTFocusMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTFocusMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTFocusMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 0x28) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTFocusMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTFocusMemory *)param_1;
}

// CastInstanceNodeMemory<FBTGameplayTaskMemory> @ 146eb14b0

FBTGameplayTaskMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTGameplayTaskMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTGameplayTaskMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 0xc) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTGameplayTaskMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTGameplayTaskMemory *)param_1;
}

// CastInstanceNodeMemory<FBTKeepInConeDecoratorMemory> @ 146eb1580

FBTKeepInConeDecoratorMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTKeepInConeDecoratorMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTKeepInConeDecoratorMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 0x18) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTKeepInConeDecoratorMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTKeepInConeDecoratorMemory *)param_1;
}

// CastInstanceNodeMemory<FBTLoopDecoratorMemory> @ 146eb1650

FBTLoopDecoratorMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTLoopDecoratorMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTLoopDecoratorMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 0x10) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTLoopDecoratorMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTLoopDecoratorMemory *)param_1;
}

// CastInstanceNodeMemory<FBTLoopUntilDecoratorMemory> @ 146eb1720

FBTLoopUntilDecoratorMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTLoopUntilDecoratorMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTLoopUntilDecoratorMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 4) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTLoopUntilDecoratorMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTLoopUntilDecoratorMemory *)param_1;
}

// CastInstanceNodeMemory<FBTMoveToTaskMemory> @ 146eb17f0

FBTMoveToTaskMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTMoveToTaskMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTMoveToTaskMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 0x38) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTMoveToTaskMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTMoveToTaskMemory *)param_1;
}

// CastInstanceNodeMemory<FBTParallelMemory> @ 146eb18c0

FBTParallelMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTParallelMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTParallelMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 0xc) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTParallelMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTParallelMemory *)param_1;
}

// CastInstanceNodeMemory<FBTTagCooldownDecoratorMemory> @ 146eb1990

FBTTagCooldownDecoratorMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTTagCooldownDecoratorMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  FBTTagCooldownDecoratorMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  sVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (sVar3 == 0) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTTagCooldownDecoratorMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTTagCooldownDecoratorMemory *)param_1;
}

// CastInstanceNodeMemory<FBTimeLimitMemory> @ 146eb1a60

FBTimeLimitMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTimeLimitMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  FBTimeLimitMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  sVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (sVar3 == 0) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTimeLimitMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTimeLimitMemory *)param_1;
}

// CleanupNodeMemory<FBTCompositeMemory> @ 146eb1b30

void __thiscall
UBTNode::CleanupNodeMemory<FBTCompositeMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTConditionalLoopDecoratorMemory> @ 146eb1b40

void __thiscall
UBTNode::CleanupNodeMemory<FBTConditionalLoopDecoratorMemory>
          (UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTConeCheckDecoratorMemory> @ 146eb1b50

void __thiscall
UBTNode::CleanupNodeMemory<FBTConeCheckDecoratorMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTCooldownDecoratorMemory> @ 146eb1b60

void __thiscall
UBTNode::CleanupNodeMemory<FBTCooldownDecoratorMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTEQSServiceMemory> @ 146eb1b70

void __thiscall
UBTNode::CleanupNodeMemory<FBTEQSServiceMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTEnvQueryTaskMemory> @ 146eb1b80

void __thiscall
UBTNode::CleanupNodeMemory<FBTEnvQueryTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTFocusMemory> @ 146eb1b90

void __thiscall
UBTNode::CleanupNodeMemory<FBTFocusMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTGameplayTaskMemory> @ 146eb1ba0

void __thiscall
UBTNode::CleanupNodeMemory<FBTGameplayTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTKeepInConeDecoratorMemory> @ 146eb1bb0

void __thiscall
UBTNode::CleanupNodeMemory<FBTKeepInConeDecoratorMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTLoopDecoratorMemory> @ 146eb1bc0

void __thiscall
UBTNode::CleanupNodeMemory<FBTLoopDecoratorMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTLoopUntilDecoratorMemory> @ 146eb1bd0

void __thiscall
UBTNode::CleanupNodeMemory<FBTLoopUntilDecoratorMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTMoveToTaskMemory> @ 146eb1be0

void __thiscall
UBTNode::CleanupNodeMemory<FBTMoveToTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTParallelMemory> @ 146eb1bf0

void __thiscall
UBTNode::CleanupNodeMemory<FBTParallelMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTTagCooldownDecoratorMemory> @ 146eb1c00

void __thiscall
UBTNode::CleanupNodeMemory<FBTTagCooldownDecoratorMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTimeLimitMemory> @ 146eb1c10

void __thiscall
UBTNode::CleanupNodeMemory<FBTimeLimitMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// GetNodeMemory<unsigned_char> @ 146eb4110

uchar * __thiscall
UBTNode::GetNodeMemory<unsigned_char>(UBTNode *this,FBehaviorTreeSearchData *param_1)

{
  ushort uVar1;
  UBehaviorTreeComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uchar *puVar7;
  longlong lVar8;
  
  pUVar2 = param_1->OwnerComp;
  uVar1 = pUVar2->ActiveInstanceIdx;
  if ((pUVar2->InstanceStack).ArrayNum <= (int)(uint)uVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      puVar7 = (uchar *)(*pcVar5)();
      return puVar7;
    }
  }
  pFVar3 = (pUVar2->InstanceStack).AllocatorInstance.Data;
  lVar8 = (ulonglong)uVar1 * 0x68;
  lVar4 = *(longlong *)(pFVar3 + lVar8 + 0x30);
  if (*(int *)(pFVar3 + lVar8 + 0x38) < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      puVar7 = (uchar *)(*pcVar5)();
      return puVar7;
    }
  }
  return (uchar *)((ulonglong)this->MemoryOffset + lVar4);
}

// GetNodeMemory<FBTCompositeMemory> @ 146eb41d0

FBTCompositeMemory * __thiscall
UBTNode::GetNodeMemory<FBTCompositeMemory>(UBTNode *this,FBehaviorTreeInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FBTCompositeMemory *pFVar4;
  
  pFVar1 = (param_1->InstanceMemory).AllocatorInstance.Data;
  if ((param_1->InstanceMemory).ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBTCompositeMemory *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FBTCompositeMemory *)(pFVar1 + this->MemoryOffset);
}

// GetNodeMemory<FBTCompositeMemory> @ 146eb4230

FBTCompositeMemory * __thiscall
UBTNode::GetNodeMemory<FBTCompositeMemory>(UBTNode *this,FBehaviorTreeSearchData *param_1)

{
  ushort uVar1;
  UBehaviorTreeComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FBTCompositeMemory *pFVar7;
  longlong lVar8;
  
  pUVar2 = param_1->OwnerComp;
  uVar1 = pUVar2->ActiveInstanceIdx;
  if ((pUVar2->InstanceStack).ArrayNum <= (int)(uint)uVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTCompositeMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar3 = (pUVar2->InstanceStack).AllocatorInstance.Data;
  lVar8 = (ulonglong)uVar1 * 0x68;
  lVar4 = *(longlong *)(pFVar3 + lVar8 + 0x30);
  if (*(int *)(pFVar3 + lVar8 + 0x38) < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTCompositeMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  return (FBTCompositeMemory *)((ulonglong)this->MemoryOffset + lVar4);
}

// GetNodeMemory<FBTConditionalLoopDecoratorMemory> @ 146eb42f0

FBTConditionalLoopDecoratorMemory * __thiscall
UBTNode::GetNodeMemory<FBTConditionalLoopDecoratorMemory>
          (UBTNode *this,FBehaviorTreeInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FBTConditionalLoopDecoratorMemory *pFVar4;
  
  pFVar1 = (param_1->InstanceMemory).AllocatorInstance.Data;
  if ((param_1->InstanceMemory).ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBTConditionalLoopDecoratorMemory *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FBTConditionalLoopDecoratorMemory *)(pFVar1 + this->MemoryOffset);
}

// GetNodeMemory<FBTConditionalLoopDecoratorMemory> @ 146eb4350

FBTConditionalLoopDecoratorMemory * __thiscall
UBTNode::GetNodeMemory<FBTConditionalLoopDecoratorMemory>
          (UBTNode *this,FBehaviorTreeSearchData *param_1)

{
  ushort uVar1;
  UBehaviorTreeComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FBTConditionalLoopDecoratorMemory *pFVar7;
  longlong lVar8;
  
  pUVar2 = param_1->OwnerComp;
  uVar1 = pUVar2->ActiveInstanceIdx;
  if ((pUVar2->InstanceStack).ArrayNum <= (int)(uint)uVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTConditionalLoopDecoratorMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar3 = (pUVar2->InstanceStack).AllocatorInstance.Data;
  lVar8 = (ulonglong)uVar1 * 0x68;
  lVar4 = *(longlong *)(pFVar3 + lVar8 + 0x30);
  if (*(int *)(pFVar3 + lVar8 + 0x38) < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTConditionalLoopDecoratorMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  return (FBTConditionalLoopDecoratorMemory *)((ulonglong)this->MemoryOffset + lVar4);
}

// GetNodeMemory<FBTCooldownDecoratorMemory> @ 146eb4410

FBTCooldownDecoratorMemory * __thiscall
UBTNode::GetNodeMemory<FBTCooldownDecoratorMemory>(UBTNode *this,FBehaviorTreeInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FBTCooldownDecoratorMemory *pFVar4;
  
  pFVar1 = (param_1->InstanceMemory).AllocatorInstance.Data;
  if ((param_1->InstanceMemory).ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBTCooldownDecoratorMemory *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FBTCooldownDecoratorMemory *)(pFVar1 + this->MemoryOffset);
}

// GetNodeMemory<FBTCooldownDecoratorMemory> @ 146eb4470

FBTCooldownDecoratorMemory * __thiscall
UBTNode::GetNodeMemory<FBTCooldownDecoratorMemory>(UBTNode *this,FBehaviorTreeSearchData *param_1)

{
  ushort uVar1;
  UBehaviorTreeComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FBTCooldownDecoratorMemory *pFVar7;
  longlong lVar8;
  
  pUVar2 = param_1->OwnerComp;
  uVar1 = pUVar2->ActiveInstanceIdx;
  if ((pUVar2->InstanceStack).ArrayNum <= (int)(uint)uVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTCooldownDecoratorMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar3 = (pUVar2->InstanceStack).AllocatorInstance.Data;
  lVar8 = (ulonglong)uVar1 * 0x68;
  lVar4 = *(longlong *)(pFVar3 + lVar8 + 0x30);
  if (*(int *)(pFVar3 + lVar8 + 0x38) < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTCooldownDecoratorMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  return (FBTCooldownDecoratorMemory *)((ulonglong)this->MemoryOffset + lVar4);
}

// GetNodeMemory<FBTLoopDecoratorMemory> @ 146eb4530

FBTLoopDecoratorMemory * __thiscall
UBTNode::GetNodeMemory<FBTLoopDecoratorMemory>(UBTNode *this,FBehaviorTreeInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FBTLoopDecoratorMemory *pFVar4;
  
  pFVar1 = (param_1->InstanceMemory).AllocatorInstance.Data;
  if ((param_1->InstanceMemory).ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBTLoopDecoratorMemory *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FBTLoopDecoratorMemory *)(pFVar1 + this->MemoryOffset);
}

// GetNodeMemory<FBTLoopDecoratorMemory> @ 146eb4590

FBTLoopDecoratorMemory * __thiscall
UBTNode::GetNodeMemory<FBTLoopDecoratorMemory>(UBTNode *this,FBehaviorTreeSearchData *param_1)

{
  ushort uVar1;
  UBehaviorTreeComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FBTLoopDecoratorMemory *pFVar7;
  longlong lVar8;
  
  pUVar2 = param_1->OwnerComp;
  uVar1 = pUVar2->ActiveInstanceIdx;
  if ((pUVar2->InstanceStack).ArrayNum <= (int)(uint)uVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTLoopDecoratorMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar3 = (pUVar2->InstanceStack).AllocatorInstance.Data;
  lVar8 = (ulonglong)uVar1 * 0x68;
  lVar4 = *(longlong *)(pFVar3 + lVar8 + 0x30);
  if (*(int *)(pFVar3 + lVar8 + 0x38) < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTLoopDecoratorMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  return (FBTLoopDecoratorMemory *)((ulonglong)this->MemoryOffset + lVar4);
}

// GetNodeMemory<FBTLoopUntilDecoratorMemory> @ 146eb4650

FBTLoopUntilDecoratorMemory * __thiscall
UBTNode::GetNodeMemory<FBTLoopUntilDecoratorMemory>(UBTNode *this,FBehaviorTreeInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FBTLoopUntilDecoratorMemory *pFVar4;
  
  pFVar1 = (param_1->InstanceMemory).AllocatorInstance.Data;
  if ((param_1->InstanceMemory).ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBTLoopUntilDecoratorMemory *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FBTLoopUntilDecoratorMemory *)(pFVar1 + this->MemoryOffset);
}

// GetNodeMemory<FBTLoopUntilDecoratorMemory> @ 146eb46b0

FBTLoopUntilDecoratorMemory * __thiscall
UBTNode::GetNodeMemory<FBTLoopUntilDecoratorMemory>(UBTNode *this,FBehaviorTreeSearchData *param_1)

{
  ushort uVar1;
  UBehaviorTreeComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FBTLoopUntilDecoratorMemory *pFVar7;
  longlong lVar8;
  
  pUVar2 = param_1->OwnerComp;
  uVar1 = pUVar2->ActiveInstanceIdx;
  if ((pUVar2->InstanceStack).ArrayNum <= (int)(uint)uVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTLoopUntilDecoratorMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar3 = (pUVar2->InstanceStack).AllocatorInstance.Data;
  lVar8 = (ulonglong)uVar1 * 0x68;
  lVar4 = *(longlong *)(pFVar3 + lVar8 + 0x30);
  if (*(int *)(pFVar3 + lVar8 + 0x38) < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTLoopUntilDecoratorMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  return (FBTLoopUntilDecoratorMemory *)((ulonglong)this->MemoryOffset + lVar4);
}

// GetNodeMemory<FBTParallelMemory> @ 146eb4770

FBTParallelMemory * __thiscall
UBTNode::GetNodeMemory<FBTParallelMemory>(UBTNode *this,FBehaviorTreeInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FBTParallelMemory *pFVar4;
  
  pFVar1 = (param_1->InstanceMemory).AllocatorInstance.Data;
  if ((param_1->InstanceMemory).ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBTParallelMemory *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FBTParallelMemory *)(pFVar1 + this->MemoryOffset);
}

// GetNodeMemory<FBTParallelMemory> @ 146eb47d0

FBTParallelMemory * __thiscall
UBTNode::GetNodeMemory<FBTParallelMemory>(UBTNode *this,FBehaviorTreeSearchData *param_1)

{
  ushort uVar1;
  UBehaviorTreeComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FBTParallelMemory *pFVar7;
  longlong lVar8;
  
  pUVar2 = param_1->OwnerComp;
  uVar1 = pUVar2->ActiveInstanceIdx;
  if ((pUVar2->InstanceStack).ArrayNum <= (int)(uint)uVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTParallelMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar3 = (pUVar2->InstanceStack).AllocatorInstance.Data;
  lVar8 = (ulonglong)uVar1 * 0x68;
  lVar4 = *(longlong *)(pFVar3 + lVar8 + 0x30);
  if (*(int *)(pFVar3 + lVar8 + 0x38) < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTParallelMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  return (FBTParallelMemory *)((ulonglong)this->MemoryOffset + lVar4);
}

// GetNodeMemory<FBTTagCooldownDecoratorMemory> @ 146eb4890

FBTTagCooldownDecoratorMemory * __thiscall
UBTNode::GetNodeMemory<FBTTagCooldownDecoratorMemory>(UBTNode *this,FBehaviorTreeInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FBTTagCooldownDecoratorMemory *pFVar4;
  
  pFVar1 = (param_1->InstanceMemory).AllocatorInstance.Data;
  if ((param_1->InstanceMemory).ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBTTagCooldownDecoratorMemory *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FBTTagCooldownDecoratorMemory *)(pFVar1 + this->MemoryOffset);
}

// GetNodeMemory<FBTTagCooldownDecoratorMemory> @ 146eb48f0

FBTTagCooldownDecoratorMemory * __thiscall
UBTNode::GetNodeMemory<FBTTagCooldownDecoratorMemory>
          (UBTNode *this,FBehaviorTreeSearchData *param_1)

{
  ushort uVar1;
  UBehaviorTreeComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FBTTagCooldownDecoratorMemory *pFVar7;
  longlong lVar8;
  
  pUVar2 = param_1->OwnerComp;
  uVar1 = pUVar2->ActiveInstanceIdx;
  if ((pUVar2->InstanceStack).ArrayNum <= (int)(uint)uVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTTagCooldownDecoratorMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar3 = (pUVar2->InstanceStack).AllocatorInstance.Data;
  lVar8 = (ulonglong)uVar1 * 0x68;
  lVar4 = *(longlong *)(pFVar3 + lVar8 + 0x30);
  if (*(int *)(pFVar3 + lVar8 + 0x38) < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FBTTagCooldownDecoratorMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  return (FBTTagCooldownDecoratorMemory *)((ulonglong)this->MemoryOffset + lVar4);
}

// GetSpecialNodeMemory<FBTAuxiliaryMemory> @ 146eb49b0

FBTAuxiliaryMemory * __thiscall
UBTNode::GetSpecialNodeMemory<FBTAuxiliaryMemory>(UBTNode *this,uchar *param_1)

{
  ushort uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x2e8))();
  if (uVar1 != 0) {
    return (FBTAuxiliaryMemory *)(param_1 + -((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc));
  }
  return (FBTAuxiliaryMemory *)0x0;
}

// GetSpecialNodeMemory<FBTInstancedNodeMemory> @ 146eb49f0

FBTInstancedNodeMemory * __thiscall
UBTNode::GetSpecialNodeMemory<FBTInstancedNodeMemory>(UBTNode *this,uchar *param_1)

{
  ushort uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x2e8))();
  if (uVar1 != 0) {
    return (FBTInstancedNodeMemory *)(param_1 + -((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc));
  }
  return (FBTInstancedNodeMemory *)0x0;
}

// GetSpecialNodeMemory<FBTTaskMemory> @ 146eb4a30

FBTTaskMemory * __thiscall
UBTNode::GetSpecialNodeMemory<FBTTaskMemory>(UBTNode *this,uchar *param_1)

{
  ushort uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x2e8))();
  if (uVar1 != 0) {
    return (FBTTaskMemory *)(param_1 + -((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc));
  }
  return (FBTTaskMemory *)0x0;
}

// InitializeNodeMemory<FBTCompositeMemory> @ 146eb68a0

FBTCompositeMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTCompositeMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTCompositeMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  if (param_2 == Initialize) {
    param_1[0] = '\0';
    param_1[1] = '\0';
  }
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 2) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTCompositeMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTCompositeMemory *)param_1;
}

// InitializeNodeMemory<FBTConditionalLoopDecoratorMemory> @ 146eb6980

FBTConditionalLoopDecoratorMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTConditionalLoopDecoratorMemory>
          (UBTNode *this,uchar *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTConditionalLoopDecoratorMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  if (param_2 == Initialize) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
  }
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 4) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTConditionalLoopDecoratorMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTConditionalLoopDecoratorMemory *)param_1;
}

// InitializeNodeMemory<FBTConeCheckDecoratorMemory> @ 146eb6a60

FBTConeCheckDecoratorMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTConeCheckDecoratorMemory>
          (UBTNode *this,uchar *param_1,Type param_2)

{
  FBTConeCheckDecoratorMemory *pFVar1;
  
  if (param_2 == Initialize) {
    *param_1 = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTConeCheckDecoratorMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTCooldownDecoratorMemory> @ 146eb6a80

FBTCooldownDecoratorMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTCooldownDecoratorMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  FBTCooldownDecoratorMemory *pFVar1;
  
  if (param_2 == Initialize) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTCooldownDecoratorMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTEQSServiceMemory> @ 146eb6aa0

FBTEQSServiceMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTEQSServiceMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  FBTEQSServiceMemory *pFVar1;
  
  if (param_2 == Initialize) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTEQSServiceMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTEnvQueryTaskMemory> @ 146eb6ac0

FBTEnvQueryTaskMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTEnvQueryTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  FBTEnvQueryTaskMemory *pFVar1;
  
  if (param_2 == Initialize) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTEnvQueryTaskMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTFocusMemory> @ 146eb6ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBTFocusMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTFocusMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  FBTFocusMemory *pFVar1;
  
  if (param_2 == Initialize) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTFocusMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTGameplayTaskMemory> @ 146eb6b00

FBTGameplayTaskMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTGameplayTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  FBTGameplayTaskMemory *pFVar1;
  
  if (param_2 == Initialize) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTGameplayTaskMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTKeepInConeDecoratorMemory> @ 146eb6b20

FBTKeepInConeDecoratorMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTKeepInConeDecoratorMemory>
          (UBTNode *this,uchar *param_1,Type param_2)

{
  FBTKeepInConeDecoratorMemory *pFVar1;
  
  if (param_2 == Initialize) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTKeepInConeDecoratorMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTLoopDecoratorMemory> @ 146eb6b40

FBTLoopDecoratorMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTLoopDecoratorMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTLoopDecoratorMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  if (param_2 == Initialize) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 0x10) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTLoopDecoratorMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTLoopDecoratorMemory *)param_1;
}

// InitializeNodeMemory<FBTLoopUntilDecoratorMemory> @ 146eb6c20

FBTLoopUntilDecoratorMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTLoopUntilDecoratorMemory>
          (UBTNode *this,uchar *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTLoopUntilDecoratorMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  if (param_2 == Initialize) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
  }
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 4) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTLoopUntilDecoratorMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTLoopUntilDecoratorMemory *)param_1;
}

// InitializeNodeMemory<FBTMoveToTaskMemory> @ 146eb6d00

FBTMoveToTaskMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTMoveToTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  FBTMoveToTaskMemory *pFVar1;
  
  if (param_2 == Initialize) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    param_1[0] = 0xff;
    param_1[1] = 0xff;
    param_1[2] = 0xff;
    param_1[3] = 0xff;
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTMoveToTaskMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTParallelMemory> @ 146eb6d40

FBTParallelMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTParallelMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTParallelMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  if (param_2 == Initialize) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
  }
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 0xc) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBTParallelMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTParallelMemory *)param_1;
}

// InitializeNodeMemory<FBTTagCooldownDecoratorMemory> @ 146eb6e20

FBTTagCooldownDecoratorMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTTagCooldownDecoratorMemory>
          (UBTNode *this,uchar *param_1,Type param_2)

{
  FBTTagCooldownDecoratorMemory *pFVar1;
  
  if (param_2 == Initialize) {
    *param_1 = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTTagCooldownDecoratorMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTimeLimitMemory> @ 146eb6e40

FBTimeLimitMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTimeLimitMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  FBTimeLimitMemory *pFVar1;
  
  if (param_2 == Initialize) {
    *param_1 = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTimeLimitMemory>(this,param_1);
  return pFVar1;
}

// UBTNode @ 146ec7c50

UBTNode * __thiscall UBTNode::UBTNode(UBTNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NodeName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeName).Data.ArrayNum = 0;
  (this->NodeName).Data.ArrayMax = 0;
  (this->TreeAsset).field0_0x0.DebugPtr = (UBehaviorTree *)0x0;
  (this->ParentNode).field0_0x0.DebugPtr = (UBTCompositeNode *)0x0;
  return this;
}

// UBTNode @ 146ec7ca0

UBTNode * __thiscall UBTNode::UBTNode(UBTNode *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->bIsInstanced = '\0';
  this->bCreateNodeInstance = '\0';
  this->bIsInjected = '\0';
  (this->NodeName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeName).Data.ArrayNum = 0;
  (this->NodeName).Data.ArrayMax = 0;
  (this->ParentNode).field0_0x0.DebugPtr = (UBTCompositeNode *)0x0;
  (this->TreeAsset).field0_0x0.DebugPtr = (UBehaviorTree *)0x0;
  this->ExecutionIndex = 0;
  this->MemoryOffset = 0;
  this->TreeDepth = '\0';
  return this;
}

// ~UBTNode @ 146ecd1c0

void __thiscall UBTNode::~UBTNode(UBTNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->NodeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CleanupInSubtree @ 146ed5e30

void __thiscall
UBTNode::CleanupInSubtree(UBTNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  if (this->bCreateNodeInstance != '\0') {
    this = GetNodeInstance(this,param_1,param_2);
  }
  if (this != (UBTNode *)0x0) {
    (**(code **)(this->_padding_ + 0x2c0))(this,param_1,param_2,param_3);
  }
  return;
}

// CleanupMemory @ 146ed5f30

void __thiscall
UBTNode::CleanupMemory(UBTNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// DescribeRuntimeValues @ 146edc4d0

void __thiscall
UBTNode::DescribeRuntimeValues
          (UBTNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// GetBTComponentForTask @ 146ee3a10

UBehaviorTreeComponent * __thiscall
UBTNode::GetBTComponentForTask(UBTNode *this,UGameplayTask *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if (param_1 != (UGameplayTask *)0x0) {
    pUVar4 = Z_Construct_UClass_UAITask_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) && (lVar2 = param_1[1]._padding_, lVar2 != 0)) &&
       (*(longlong *)(lVar2 + 0x3b8) != 0)) {
      pUVar4 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x3b8),pUVar4);
      if (bVar3) {
        return *(UBehaviorTreeComponent **)(lVar2 + 0x3b8);
      }
    }
  }
  return (UBehaviorTreeComponent *)0x0;
}

// GetBlackboardAsset @ 146ee3a90

UBlackboardData * __thiscall UBTNode::GetBlackboardAsset(UBTNode *this)

{
  UBehaviorTree *pUVar1;
  UBlackboardData *pUVar2;
  
  pUVar1 = (this->TreeAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UBehaviorTree *)0x0) {
    pUVar2 = (pUVar1->BlackboardAsset).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UBlackboardData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    return pUVar2;
  }
  return (UBlackboardData *)0x0;
}

// GetGameplayTaskAvatar @ 146ee5580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UBTNode::GetGameplayTaskAvatar(UBTNode *this,UGameplayTask *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  UObject *pUVar6;
  longlong lVar7;
  TObjectPtr<UBTCompositeNode>_u_0 local_res10 [3];
  FString local_18;
  
  if (param_1 != (UGameplayTask *)0x0) {
    pUVar4 = Z_Construct_UClass_UAITask_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pUVar6 = FWeakObjectPtr::Get(&(param_1->TasksComponent).WeakPtr);
      if (pUVar6 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ee56c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pAVar5 = (AActor *)
                 (**(code **)(*(longlong *)&pUVar6[4].field_0x20 + 0x20))
                           (&pUVar6[4].field_0x20,param_1);
        return pAVar5;
      }
    }
    else if (param_1[1]._padding_ != 0) {
      pAVar5 = *(AActor **)(param_1[1]._padding_ + 0x310);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        return pAVar5;
      }
      if (pAVar5 == (AActor *)0x0) {
        return (AActor *)0x0;
      }
      UE::GC::MarkAsReachable((UObject *)pAVar5);
      return pAVar5;
    }
    return (AActor *)0x0;
  }
  if ((this->_padding_ & 0x10000000000) == 0) {
    if (2 < (byte)LogBehaviorTree._0_1_) {
      local_res10[0] = this[-1].ParentNode.field0_0x0;
      ::FName::ToString((FName *)&local_res10[0].ObjectPtr,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return (AActor *)0x0;
  }
  lVar7 = *(longlong *)&this[-1].ExecutionIndex;
  if (lVar7 != 0) {
    pUVar4 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_146ee55ec;
  }
  lVar7 = 0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("BTComponent",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTNode.cpp"
                     ,0x133,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pAVar5 = (AActor *)(*pcVar2)();
    return pAVar5;
  }
LAB_146ee55ec:
  return *(AActor **)(lVar7 + 0xd0);
}

// GetGameplayTaskDefaultPriority @ 146ee56e0

uchar __thiscall UBTNode::GetGameplayTaskDefaultPriority(UBTNode *this)

{
  return '\x7f';
}

// GetGameplayTaskOwner @ 146ee56f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UBTNode::GetGameplayTaskOwner(UBTNode *this,UGameplayTask *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  UObject *pUVar6;
  longlong lVar7;
  TObjectPtr<UBTCompositeNode>_u_0 local_res10 [3];
  FString local_18;
  
  if (param_1 != (UGameplayTask *)0x0) {
    pUVar4 = Z_Construct_UClass_UAITask_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return (AActor *)param_1[1]._padding_;
    }
    pUVar6 = FWeakObjectPtr::Get(&(param_1->TasksComponent).WeakPtr);
    if (pUVar6 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ee5813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pAVar5 = (AActor *)
               (**(code **)(*(longlong *)&pUVar6[4].field_0x20 + 0x18))
                         (&pUVar6[4].field_0x20,param_1);
      return pAVar5;
    }
    return (AActor *)0x0;
  }
  if ((this->_padding_ & 0x10000000000) == 0) {
    if (2 < (byte)LogBehaviorTree._0_1_) {
      local_res10[0] = this[-1].ParentNode.field0_0x0;
      ::FName::ToString((FName *)&local_res10[0].ObjectPtr,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return (AActor *)0x0;
  }
  lVar7 = *(longlong *)&this[-1].ExecutionIndex;
  if (lVar7 != 0) {
    pUVar4 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_146ee575c;
  }
  lVar7 = 0;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("BTComponent",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTNode.cpp"
                     ,0x117,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pAVar5 = (AActor *)(*pcVar2)();
    return pAVar5;
  }
LAB_146ee575c:
  return *(AActor **)(lVar7 + 0xd0);
}

// GetGameplayTasksComponent @ 146ee5830

UGameplayTasksComponent * __thiscall
UBTNode::GetGameplayTasksComponent(UBTNode *this,UGameplayTask *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UGameplayTasksComponent *pUVar3;
  longlong *plVar4;
  
  if (param_1 != (UGameplayTask *)0x0) {
    pUVar2 = Z_Construct_UClass_UAITask_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) && (param_1[1]._padding_ != 0)) {
      plVar4 = (longlong *)(param_1[1]._padding_ + 0x378);
                    /* WARNING: Could not recover jumptable at 0x000146ee587c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar3 = (UGameplayTasksComponent *)(**(code **)(*plVar4 + 0x10))(plVar4,param_1);
      return pUVar3;
    }
  }
  pUVar3 = (UGameplayTasksComponent *)FWeakObjectPtr::Get(&(param_1->TasksComponent).WeakPtr);
  return pUVar3;
}

// GetInstanceMemorySize @ 146ee5a90

ushort __thiscall UBTNode::GetInstanceMemorySize(UBTNode *this)

{
  return 0;
}

// GetNodeInstance @ 146ee6890

UBTNode * __thiscall UBTNode::GetNodeInstance(UBTNode *this,FBehaviorTreeSearchData *param_1)

{
  uchar *puVar1;
  UBTNode *pUVar2;
  
  puVar1 = GetNodeMemory<unsigned_char>(this,param_1);
  pUVar2 = GetNodeInstance(this,param_1->OwnerComp,puVar1);
  return pUVar2;
}

// GetNodeInstance @ 146ee68d0

UBTNode * __thiscall
UBTNode::GetNodeInstance(UBTNode *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  UBTNode *pUVar5;
  uint uVar6;
  
  uVar4 = (**(code **)(this->_padding_ + 0x2e8))();
  if ((uVar4 != 0) &&
     ((uint *)(param_2 + -((ulonglong)(uVar4 + 3) & 0xfffffffffffffffc)) != (uint *)0x0)) {
    uVar1 = *(uint *)(param_2 + -((ulonglong)(uVar4 + 3) & 0xfffffffffffffffc));
    if ((-1 < (int)uVar1) && ((int)uVar1 < (param_1->NodeInstances).ArrayNum)) {
      uVar6 = 0;
      if ((int)uVar1 < (param_1->NodeInstances).ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UBTNode *)(*pcVar2)();
          return pUVar5;
        }
      }
      pUVar5 = *(UBTNode **)
                ((param_1->NodeInstances).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UBTNode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      return pUVar5;
    }
  }
  return (UBTNode *)0x0;
}

// GetNodeName @ 146ee69b0

FString * __thiscall UBTNode::GetNodeName(UBTNode *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  iVar1 = (this->NodeName).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    pFVar3 = UBehaviorTreeTypes::GetShortTypeName(&local_18,(UObject *)this);
    ::FString::FString(__return_storage_ptr__,pFVar3);
  }
  else {
    _Src = (this->NodeName).Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_28,iVar1,&local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146ee80b0

UClass * __cdecl UBTNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTNode",&Z_Registration_Info_UClass_UBTNode.InnerSingleton,
               StaticRegisterNativesUBTNode,0x58,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Game",InternalConstructor<UBTNode>,InternalVTableHelperCtorCaller<UBTNode>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTNode.InnerSingleton;
}

// GetRuntimeDescription @ 146eeab60

FString * __thiscall
UBTNode::GetRuntimeDescription
          (UBTNode *this,FString *__return_storage_ptr__,UBehaviorTreeComponent *param_1,
          uchar *param_2,Type param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  FString *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  FString *local_58;
  undefined8 local_50;
  FString local_48;
  void *local_38 [2];
  void *local_28 [2];
  
  uVar7 = 0;
  iVar1 = (this->NodeName).Data.ArrayNum;
  pcVar2 = *(code **)(this->_padding_ + 0x2f0);
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  bVar9 = iVar3 == 0;
  if (bVar9) {
    pFVar5 = (FString *)(*pcVar2)(this,local_38);
  }
  else {
    (*pcVar2)(this,local_28);
    ::FString::PrintfImpl(&local_48,L"%d. %s [%s]");
    pFVar5 = &local_48;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if ((bVar9) && (local_38[0] != (void *)0x0)) {
    FMemory::Free(local_38[0]);
  }
  if ((!bVar9) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((!bVar9) && (local_28[0] != (void *)0x0)) {
    FMemory::Free(local_28[0]);
  }
  local_58 = (FString *)0x0;
  local_50 = 0;
  if ((this->bCreateNodeInstance == '\0') ||
     (this = GetNodeInstance(this,param_1,param_2), this != (UBTNode *)0x0)) {
    (**(code **)(this->_padding_ + 0x2c8))(this,param_1,param_2,param_3,&local_58);
  }
  uVar8 = uVar7;
  if (0 < (int)local_50) {
    do {
      ::FString::AppendChars(__return_storage_ptr__,L", ",2);
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < (int)local_50) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      iVar1 = *(int *)((longlong)&(local_58->Data).ArrayNum + uVar8);
      uVar4 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,
                 *(wchar_t **)((longlong)&(local_58->Data).AllocatorInstance.Data + uVar8),uVar4);
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 0x10;
    } while ((int)(uVar6 + 1) < (int)local_50);
  }
  DestructItems<FString,int>(local_58,(int)local_50);
  if (local_58 != (FString *)0x0) {
    FMemory::Free(local_58);
  }
  return __return_storage_ptr__;
}

// GetSpecialMemorySize @ 146eeaef0

ushort __thiscall UBTNode::GetSpecialMemorySize(UBTNode *this)

{
  return (ushort)(this->field_0x55 & 4);
}

// GetStaticDescription @ 146eec430

FString * __thiscall UBTNode::GetStaticDescription(UBTNode *this,FString *__return_storage_ptr__)

{
  UBehaviorTreeTypes::GetShortTypeName(__return_storage_ptr__,(UObject *)this);
  return __return_storage_ptr__;
}

// GetWorld @ 146ef0230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UBTNode::GetWorld(UBTNode *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
    return (UWorld *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UPackage_NoRegister();
  lVar2 = *(longlong *)(lVar2 + 0x10);
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    pUVar4 = *(UWorld **)(this->_padding_ + 0x20);
    if (pUVar4 != (UWorld *)0x0) {
      pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar4;
      }
    }
    return (UWorld *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000146ef02c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar4 = (UWorld *)(**(code **)(*(longlong *)this->_padding_ + 0x180))();
  return pUVar4;
}

// InitializeFromAsset @ 146ef2150

void __thiscall UBTNode::InitializeFromAsset(UBTNode *this,UBehaviorTree *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->TreeAsset).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->TreeAsset).field0_0x0.DebugPtr = param_1;
  return;
}

// InitializeInSubtree @ 146ef25c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UBTNode::InitializeInSubtree
          (UBTNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,int *param_3,Type param_4)

{
  int *piVar1;
  uchar uVar2;
  ushort uVar3;
  UBTCompositeNode *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  UClass *pUVar10;
  UBTNode *pUVar11;
  TArray<TObjectPtr<UBTNode>,TSizedDefaultAllocator<32>_> *pTVar12;
  int *piVar13;
  UBTNode *local_48;
  undefined8 local_40;
  
  uVar8 = (**(code **)(this->_padding_ + 0x2e8))();
  piVar13 = (int *)0x0;
  if ((uVar8 != 0) &&
     (piVar13 = (int *)(param_2 + -((ulonglong)(uVar8 + 3) & 0xfffffffffffffffc)),
     piVar13 != (int *)0x0)) {
    *piVar13 = -1;
  }
  if (this->bCreateNodeInstance == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000146ef2920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2b8))(this,param_1,param_2,param_4);
    return;
  }
  pUVar10 = UBTCompositeNode::StaticClass();
  iVar9 = (int)pUVar10->_padding_;
  if (((iVar9 <= *(int *)(this->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
       &pUVar10->_padding_)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsA(UBTCompositeNode::StaticClass()) == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTNode.cpp"
                         ,0x5d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = *param_3;
  if ((-1 < iVar9) && (iVar9 < (param_1->NodeInstances).ArrayNum)) {
    if (((param_1->NodeInstances).ArrayNum <= iVar9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar11 = *(UBTNode **)((param_1->NodeInstances).AllocatorInstance.Data + (longlong)iVar9 * 8);
    if (pUVar11 != (UBTNode *)0x0) goto LAB_146ef282b;
  }
  pTVar12 = &param_1->NodeInstances;
  local_40 = 0;
  pUVar11 = (UBTNode *)
            StaticDuplicateObject
                      ((UObject *)this,(UObject *)param_1,(FName)0x0,
                       RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                       RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                       RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                       RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                       RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                       RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                       RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                       RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                       RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                       RF_Public,(UClass *)0x0,Normal,
                       PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                       ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                       AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                       ReachabilityFlag0);
  uVar8 = this->ExecutionIndex;
  uVar2 = this->TreeDepth;
  uVar3 = this->MemoryOffset;
  pUVar4 = (this->ParentNode).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UBTCompositeNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (pUVar11->ParentNode).field0_0x0.DebugPtr = pUVar4;
  pUVar11->bIsInstanced = '\x01';
  pUVar11->ExecutionIndex = uVar8;
  pUVar11->MemoryOffset = uVar3;
  pUVar11->TreeDepth = uVar2;
  local_48 = pUVar11;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  pFVar5 = (pTVar12->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar5 + (longlong)(param_1->NodeInstances).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_1->NodeInstances).ArrayNum;
  piVar1 = &(param_1->NodeInstances).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar12->AllocatorInstance,piVar1);
    (param_1->NodeInstances).ArrayNum = iVar9;
  }
  (param_1->NodeInstances).ArrayNum = iVar9 + 1;
  *(UBTNode **)((pTVar12->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UBTNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48);
  }
LAB_146ef282b:
  if ((piVar13 == (int *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SpecialMemory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTNode.cpp"
                         ,0x6a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *piVar13 = *param_3;
  (**(code **)(pUVar11->_padding_ + 0x2f8))(pUVar11,param_1->_padding_);
  (**(code **)(pUVar11->_padding_ + 0x2b8))(pUVar11,param_1,param_2,param_4);
  if (((this->TreeAsset).field0_0x0.DebugPtr == (UBehaviorTree *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TreeAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTNode.cpp"
                         ,0x70,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UBehaviorTreeTypes::SetBTLoggingContext(pUVar11);
  (**(code **)(pUVar11->_padding_ + 0x2b0))(pUVar11,(this->TreeAsset).field0_0x0.DebugPtr);
  (**(code **)(pUVar11->_padding_ + 0x2d8))(pUVar11,param_1);
  *param_3 = *param_3 + 1;
  UBehaviorTreeTypes::SetBTLoggingContext((UBTNode *)0x0);
  return;
}

// InitializeMemory @ 146ef2f10

void __thiscall
UBTNode::InitializeMemory(UBTNode *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// InitializeNode @ 146ef3210

void __thiscall
UBTNode::InitializeNode
          (UBTNode *this,UBTCompositeNode *param_1,ushort param_2,ushort param_3,uchar param_4)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBTCompositeNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ParentNode).field0_0x0.DebugPtr = param_1;
  this->ExecutionIndex = param_2;
  this->MemoryOffset = param_3;
  this->TreeDepth = param_4;
  return;
}

// OnGameplayTaskInitialized @ 146ef7d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBTNode::OnGameplayTaskInitialized(UBTNode *this,UGameplayTask *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FName local_res10 [3];
  FString local_18;
  
  if (param_1 != (UGameplayTask *)0x0) {
    pUVar2 = Z_Construct_UClass_UAITask_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) && (param_1[1]._padding_ == 0)) && (1 < (byte)LogBehaviorTree._0_1_))
    {
      local_res10[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res10,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnInstanceCreated @ 146ef7dc0

void __thiscall UBTNode::OnInstanceCreated(UBTNode *this,UBehaviorTreeComponent *param_1)

{
  return;
}

// OnInstanceDestroyed @ 146ef7f10

void __thiscall UBTNode::OnInstanceDestroyed(UBTNode *this,UBehaviorTreeComponent *param_1)

{
  return;
}

// SetOwner @ 146effb70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBTNode::SetOwner(UBTNode *this,AActor *param_1)

{
  return;
}

// StaticRegisterNativesUBTNode @ 146f00cc0

void __cdecl UBTNode::StaticRegisterNativesUBTNode(void)

{
  return;
}

// _getUObject @ 146f08340

UObject * __thiscall UBTNode::_getUObject(UBTNode *this)

{
  return (UObject *)&this[-1].NodeName;
}

