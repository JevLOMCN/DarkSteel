// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 20

// CastInstanceNodeMemory<FBTDelayedAbortMemory> @ 14701b0e0

FBTDelayedAbortMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTDelayedAbortMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTDelayedAbortMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 8) {
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
      pFVar4 = (FBTDelayedAbortMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTDelayedAbortMemory *)param_1;
}

// CastInstanceNodeMemory<FBTLatentTaskMemory> @ 14701b1b0

FBTLatentTaskMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTLatentTaskMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTLatentTaskMemory *pFVar4;
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
      pFVar4 = (FBTLatentTaskMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTLatentTaskMemory *)param_1;
}

// CastInstanceNodeMemory<FBTLogTaskMemory> @ 14701b280

FBTLogTaskMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTLogTaskMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTLogTaskMemory *pFVar4;
  FName local_res8;
  FString local_18;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 8) {
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
      pFVar4 = (FBTLogTaskMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTLogTaskMemory *)param_1;
}

// CastInstanceNodeMemory<FBTNodeMemoryValidatorDecoratorMemory> @ 14701b350

FBTNodeMemoryValidatorDecoratorMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTNodeMemoryValidatorDecoratorMemory *pFVar4;
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
      pFVar4 = (FBTNodeMemoryValidatorDecoratorMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTNodeMemoryValidatorDecoratorMemory *)param_1;
}

// CastInstanceNodeMemory<FBTSetValueTaskMemory> @ 14701b420

FBTSetValueTaskMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTSetValueTaskMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTSetValueTaskMemory *pFVar4;
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
      pFVar4 = (FBTSetValueTaskMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTSetValueTaskMemory *)param_1;
}

// CastInstanceNodeMemory<FBTTimerBasedLatentTaskMemory> @ 14701b4f0

FBTTimerBasedLatentTaskMemory * __thiscall
UBTNode::CastInstanceNodeMemory<FBTTimerBasedLatentTaskMemory>(UBTNode *this,uchar *param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTTimerBasedLatentTaskMemory *pFVar4;
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
      pFVar4 = (FBTTimerBasedLatentTaskMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTTimerBasedLatentTaskMemory *)param_1;
}

// CleanupNodeMemory<FBTDelayedAbortMemory> @ 14701b5c0

void __thiscall
UBTNode::CleanupNodeMemory<FBTDelayedAbortMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTLatentTaskMemory> @ 14701b5d0

void __thiscall
UBTNode::CleanupNodeMemory<FBTLatentTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTLogTaskMemory> @ 14701b5e0

void __thiscall
UBTNode::CleanupNodeMemory<FBTLogTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTNodeMemoryValidatorDecoratorMemory> @ 14701b5f0

void __thiscall
UBTNode::CleanupNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>
          (UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTSetValueTaskMemory> @ 14701b600

void __thiscall
UBTNode::CleanupNodeMemory<FBTSetValueTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// CleanupNodeMemory<FBTTimerBasedLatentTaskMemory> @ 14701b610

void __thiscall
UBTNode::CleanupNodeMemory<FBTTimerBasedLatentTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  return;
}

// GetNodeMemory<FBTNodeMemoryValidatorDecoratorMemory> @ 14701bf60

FBTNodeMemoryValidatorDecoratorMemory * __thiscall
UBTNode::GetNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>
          (UBTNode *this,FBehaviorTreeInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FBTNodeMemoryValidatorDecoratorMemory *pFVar4;
  
  pFVar1 = (param_1->InstanceMemory).AllocatorInstance.Data;
  if ((param_1->InstanceMemory).ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBTNodeMemoryValidatorDecoratorMemory *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FBTNodeMemoryValidatorDecoratorMemory *)(pFVar1 + this->MemoryOffset);
}

// GetNodeMemory<FBTNodeMemoryValidatorDecoratorMemory> @ 14701bfc0

FBTNodeMemoryValidatorDecoratorMemory * __thiscall
UBTNode::GetNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>
          (UBTNode *this,FBehaviorTreeSearchData *param_1)

{
  ushort uVar1;
  UBehaviorTreeComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FBTNodeMemoryValidatorDecoratorMemory *pFVar7;
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
      pFVar7 = (FBTNodeMemoryValidatorDecoratorMemory *)(*pcVar5)();
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
      pFVar7 = (FBTNodeMemoryValidatorDecoratorMemory *)(*pcVar5)();
      return pFVar7;
    }
  }
  return (FBTNodeMemoryValidatorDecoratorMemory *)((ulonglong)this->MemoryOffset + lVar4);
}

// InitializeNodeMemory<FBTDelayedAbortMemory> @ 14701c080

FBTDelayedAbortMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTDelayedAbortMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FBTDelayedAbortMemory *pFVar4;
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
  }
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 8) {
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
      pFVar4 = (FBTDelayedAbortMemory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBTDelayedAbortMemory *)param_1;
}

// InitializeNodeMemory<FBTLatentTaskMemory> @ 14701c160

FBTLatentTaskMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTLatentTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  FBTLatentTaskMemory *pFVar1;
  
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
  pFVar1 = CastInstanceNodeMemory<FBTLatentTaskMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTLogTaskMemory> @ 14701c180

FBTLogTaskMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTLogTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  FBTLogTaskMemory *pFVar1;
  
  if (param_2 == Initialize) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTLogTaskMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTNodeMemoryValidatorDecoratorMemory> @ 14701c1a0

FBTNodeMemoryValidatorDecoratorMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>
          (UBTNode *this,uchar *param_1,Type param_2)

{
  FBTNodeMemoryValidatorDecoratorMemory *pFVar1;
  
  if (param_2 == Initialize) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTNodeMemoryValidatorDecoratorMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTSetValueTaskMemory> @ 14701c1c0

FBTSetValueTaskMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTSetValueTaskMemory>(UBTNode *this,uchar *param_1,Type param_2)

{
  FBTSetValueTaskMemory *pFVar1;
  
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
  pFVar1 = CastInstanceNodeMemory<FBTSetValueTaskMemory>(this,param_1);
  return pFVar1;
}

// InitializeNodeMemory<FBTTimerBasedLatentTaskMemory> @ 14701c1e0

FBTTimerBasedLatentTaskMemory * __thiscall
UBTNode::InitializeNodeMemory<FBTTimerBasedLatentTaskMemory>
          (UBTNode *this,uchar *param_1,Type param_2)

{
  FBTTimerBasedLatentTaskMemory *pFVar1;
  
  if (param_2 == Initialize) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  pFVar1 = CastInstanceNodeMemory<FBTTimerBasedLatentTaskMemory>(this,param_1);
  return pFVar1;
}

