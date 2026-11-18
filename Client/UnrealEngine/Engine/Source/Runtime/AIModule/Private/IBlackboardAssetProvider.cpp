// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// ~IBlackboardAssetProvider @ 146e81a80

void __thiscall IBlackboardAssetProvider::~IBlackboardAssetProvider(IBlackboardAssetProvider *this)

{
  *this = (IBlackboardAssetProvider)&___7IBlackboardAssetProvider__6B_;
  return;
}

// GetBlackboardAsset @ 146e8d680

UBlackboardData * __thiscall
IBlackboardAssetProvider::GetBlackboardAsset(IBlackboardAssetProvider *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BlackboardAssetProvider.h"
             ,0x20,L"Pure virtual not implemented (%s)");
  return (UBlackboardData *)0x0;
}

// _getUObject @ 146ea61a0

UObject * __thiscall IBlackboardAssetProvider::_getUObject(IBlackboardAssetProvider *this)

{
  return (UObject *)0x0;
}

// execGetBlackboardAsset @ 146f089d0

void __cdecl
IBlackboardAssetProvider::execGetBlackboardAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x10))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

