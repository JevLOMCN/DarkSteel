// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// GetRangeImpl @ 149818c80

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TQuat<double>,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_>
::GetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TQuat<double>,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_>
               *this,TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong *plVar11;
  uint uVar12;
  char local_res10 [16];
  int local_res20 [2];
  undefined4 local_168 [2];
  void *local_160;
  undefined8 local_158;
  longlong local_150;
  TQuat<double> *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar1 = param_1->ArrayNum;
  pcVar10 = local_res10;
  local_160 = (void *)0x0;
  local_158 = 0;
  local_res10[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_160,pcVar10);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res10[0] == '\0') {
      uVar12 = 0;
      if (0 < iVar1) {
        local_150 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar12 < iVar1) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            pcVar10 = (char *)(longlong)(int)uVar12;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          local_148 = param_1->DataPtr;
          uVar8 = 0;
          if ((int)uVar12 < (int)local_158) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (pcVar10 = (char *)(longlong)(int)uVar12,
             bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          lVar4 = local_150;
          local_b8 = *(undefined8 *)&this->ValueRanges;
          uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_a8 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_98 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_168[0] = *(undefined4 *)(local_150 + (longlong)local_160);
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_68 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_58 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar11 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar11 = plVar2;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar3)(uVar9,local_168,local_148 + (int)uVar12,&local_b8,pcVar10);
          local_150 = lVar4 + 4;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar1);
      }
    }
    else {
      uVar12 = 0;
      if (0 < iVar1) {
        do {
          uVar8 = 0;
          if ((int)uVar12 < iVar1) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            pcVar10 = (char *)(longlong)(int)uVar12;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          local_138 = *(undefined8 *)&this->ValueRanges;
          uStack_130 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_res20[0] = uVar12 + param_2;
          local_128 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_120 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_118 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_110 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_108 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_100 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_f8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_f0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_c8 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar11 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar11 = plVar2;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar3)(uVar9,local_res20,param_1->DataPtr + (int)uVar12,&local_138,pcVar10);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar1);
      }
    }
    bVar6 = true;
  }
  if (local_160 != (void *)0x0) {
    FMemory::Free(local_160);
  }
  return bVar6;
}

// GetRangeImpl @ 149819000

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TQuat<double>,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_>
::GetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TQuat<double>,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_>
               *this,TArrayView<UE::Math::TQuat<double>,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong *plVar11;
  uint uVar12;
  char local_res10 [16];
  int local_res20 [2];
  undefined4 local_168 [2];
  void *local_160;
  undefined8 local_158;
  longlong local_150;
  TQuat<double> *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar1 = param_1->ArrayNum;
  pcVar10 = local_res10;
  local_160 = (void *)0x0;
  local_158 = 0;
  local_res10[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_160,pcVar10);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res10[0] == '\0') {
      uVar12 = 0;
      if (0 < iVar1) {
        local_150 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar12 < iVar1) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            pcVar10 = (char *)(longlong)(int)uVar12;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          local_148 = param_1->DataPtr;
          uVar8 = 0;
          if ((int)uVar12 < (int)local_158) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (pcVar10 = (char *)(longlong)(int)uVar12,
             bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          lVar4 = local_150;
          local_b8 = *(undefined8 *)&this->ValueRanges;
          uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_a8 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_98 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_168[0] = *(undefined4 *)(local_150 + (longlong)local_160);
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_68 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_58 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar11 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar11 = plVar2;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar3)(uVar9,local_168,local_148 + (int)uVar12,&local_b8,pcVar10);
          local_150 = lVar4 + 4;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar1);
      }
    }
    else {
      uVar12 = 0;
      if (0 < iVar1) {
        do {
          uVar8 = 0;
          if ((int)uVar12 < iVar1) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            pcVar10 = (char *)(longlong)(int)uVar12;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          local_138 = *(undefined8 *)&this->ValueRanges;
          uStack_130 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_res20[0] = uVar12 + param_2;
          local_128 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_120 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_118 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_110 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_108 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_100 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_f8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_f0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_c8 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar11 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar11 = plVar2;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar3)(uVar9,local_res20,param_1->DataPtr + (int)uVar12,&local_138,pcVar10);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar1);
      }
    }
    bVar6 = true;
  }
  if (local_160 != (void *)0x0) {
    FMemory::Free(local_160);
  }
  return bVar6;
}

// GetRangeImpl @ 149819380

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_>
::GetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_>
               *this,TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong *plVar11;
  uint uVar12;
  char local_res10 [16];
  int local_res20 [2];
  undefined4 local_168 [2];
  void *local_160;
  undefined8 local_158;
  longlong local_150;
  TVector<double> *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar1 = param_1->ArrayNum;
  pcVar10 = local_res10;
  local_160 = (void *)0x0;
  local_158 = 0;
  local_res10[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_160,pcVar10);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res10[0] == '\0') {
      uVar12 = 0;
      if (0 < iVar1) {
        local_150 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar12 < iVar1) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            pcVar10 = (char *)(longlong)(int)uVar12;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          local_148 = param_1->DataPtr;
          uVar8 = 0;
          if ((int)uVar12 < (int)local_158) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (pcVar10 = (char *)(longlong)(int)uVar12,
             bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          lVar4 = local_150;
          local_b8 = *(undefined8 *)&this->ValueRanges;
          uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_a8 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_98 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_168[0] = *(undefined4 *)(local_150 + (longlong)local_160);
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_68 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_58 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar11 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar11 = plVar2;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar3)(uVar9,local_168,local_148 + (int)uVar12,&local_b8,pcVar10);
          local_150 = lVar4 + 4;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar1);
      }
    }
    else {
      uVar12 = 0;
      if (0 < iVar1) {
        do {
          uVar8 = 0;
          if ((int)uVar12 < iVar1) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            pcVar10 = (char *)(longlong)(int)uVar12;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          local_138 = *(undefined8 *)&this->ValueRanges;
          uStack_130 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_res20[0] = uVar12 + param_2;
          local_128 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_120 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_118 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_110 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_108 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_100 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_f8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_f0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_c8 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar11 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar11 = plVar2;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar3)(uVar9,local_res20,param_1->DataPtr + (int)uVar12,&local_138,pcVar10);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar1);
      }
    }
    bVar6 = true;
  }
  if (local_160 != (void *)0x0) {
    FMemory::Free(local_160);
  }
  return bVar6;
}

// GetRangeImpl @ 149819710

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_>
::GetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_>
               *this,TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  char local_res10 [16];
  int local_res20 [2];
  undefined4 local_228 [2];
  void *local_220;
  undefined8 local_218;
  longlong local_210;
  TVector<double> *local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar1 = param_1->ArrayNum;
  local_220 = (void *)0x0;
  local_218 = 0;
  local_res10[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_220,local_res10);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res10[0] == '\0') {
      uVar11 = 0;
      if (0 < iVar1) {
        local_210 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar11 < iVar1) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_208 = param_1->DataPtr;
          uVar8 = 0;
          if ((int)uVar11 < (int)local_218) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          lVar4 = local_210;
          local_198 = *(undefined8 *)&(this->ValueRanges).field_0xb0;
          uStack_190 = *(undefined8 *)&(this->ValueRanges).field_0xb8;
          local_188 = *(undefined8 *)&(this->ValueRanges).field_0xc0;
          uStack_180 = *(undefined8 *)&(this->ValueRanges).field_0xc8;
          local_178 = *(undefined8 *)&(this->ValueRanges).field_0xd0;
          uStack_170 = *(undefined8 *)&(this->ValueRanges).field_0xd8;
          local_228[0] = *(undefined4 *)(local_210 + (longlong)local_220);
          local_168 = *(undefined8 *)&(this->ValueRanges).field_0x80;
          uStack_160 = *(undefined8 *)&(this->ValueRanges).field_0x88;
          local_158 = *(undefined8 *)&(this->ValueRanges).field_0x90;
          uStack_150 = *(undefined8 *)&(this->ValueRanges).field_0x98;
          local_148 = *(undefined8 *)&(this->ValueRanges).field_0xa0;
          uStack_140 = *(undefined8 *)&(this->ValueRanges).field_0xa8;
          local_b8 = *(undefined8 *)&this->ValueRanges;
          uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_a8 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_98 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_68 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_58 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar10 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar10 = plVar2;
          }
          uVar9 = (**(code **)(*plVar10 + 8))();
          (*pcVar3)(uVar9,local_228,local_208 + (int)uVar11,&local_b8,&local_168,&local_198);
          local_210 = lVar4 + 4;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar1);
      }
    }
    else {
      uVar11 = 0;
      if (0 < iVar1) {
        do {
          uVar8 = 0;
          if ((int)uVar11 < iVar1) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_1f8 = *(undefined8 *)&(this->ValueRanges).field_0xb0;
          uStack_1f0 = *(undefined8 *)&(this->ValueRanges).field_0xb8;
          local_res20[0] = uVar11 + param_2;
          local_1e8 = *(undefined8 *)&(this->ValueRanges).field_0xc0;
          uStack_1e0 = *(undefined8 *)&(this->ValueRanges).field_0xc8;
          local_1d8 = *(undefined8 *)&(this->ValueRanges).field_0xd0;
          uStack_1d0 = *(undefined8 *)&(this->ValueRanges).field_0xd8;
          local_1c8 = *(undefined8 *)&(this->ValueRanges).field_0x80;
          uStack_1c0 = *(undefined8 *)&(this->ValueRanges).field_0x88;
          local_1b8 = *(undefined8 *)&(this->ValueRanges).field_0x90;
          uStack_1b0 = *(undefined8 *)&(this->ValueRanges).field_0x98;
          local_1a8 = *(undefined8 *)&(this->ValueRanges).field_0xa0;
          uStack_1a0 = *(undefined8 *)&(this->ValueRanges).field_0xa8;
          local_138 = *(undefined8 *)&this->ValueRanges;
          uStack_130 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_128 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_120 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_118 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_110 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_108 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_100 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_f8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_f0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_c8 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar10 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar10 = plVar2;
          }
          uVar9 = (**(code **)(*plVar10 + 8))();
          (*pcVar3)(uVar9,local_res20,param_1->DataPtr + (int)uVar11,&local_138,&local_1c8,
                    &local_1f8);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar1);
      }
    }
    bVar6 = true;
  }
  if (local_220 != (void *)0x0) {
    FMemory::Free(local_220);
  }
  return bVar6;
}

// GetRangeImpl @ 149819b60

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_>
::GetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_>
               *this,TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  char local_res10 [16];
  int local_res20 [2];
  undefined4 local_128 [2];
  void *local_120;
  undefined8 local_118;
  longlong local_110;
  TVector<double> *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar1 = param_1->ArrayNum;
  local_120 = (void *)0x0;
  local_118 = 0;
  local_res10[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_120,local_res10);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res10[0] == '\0') {
      uVar11 = 0;
      if (0 < iVar1) {
        local_110 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar11 < iVar1) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_108 = param_1->DataPtr;
          uVar8 = 0;
          if ((int)uVar11 < (int)local_118) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          lVar4 = local_110;
          local_98 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_128[0] = *(undefined4 *)(local_110 + (longlong)local_120);
          local_68 = *(undefined8 *)&this->ValueRanges;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_58 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar10 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar10 = plVar2;
          }
          uVar9 = (**(code **)(*plVar10 + 8))();
          (*pcVar3)(uVar9,local_128,local_108 + (int)uVar11,&local_68,&local_98);
          local_110 = lVar4 + 4;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar1);
      }
    }
    else {
      uVar11 = 0;
      if (0 < iVar1) {
        do {
          uVar8 = 0;
          if ((int)uVar11 < iVar1) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_f8 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_f0 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_res20[0] = uVar11 + param_2;
          local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_c8 = *(undefined8 *)&this->ValueRanges;
          uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_b8 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_a8 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar10 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar10 = plVar2;
          }
          uVar9 = (**(code **)(*plVar10 + 8))();
          (*pcVar3)(uVar9,local_res20,param_1->DataPtr + (int)uVar11,&local_c8,&local_f8);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar1);
      }
    }
    bVar6 = true;
  }
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  return bVar6;
}

// GetRangeImpl @ 149819eb0

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_>
::GetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_>
               *this,TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong *plVar11;
  uint uVar12;
  char local_res10 [16];
  int local_res20 [2];
  undefined4 local_168 [2];
  void *local_160;
  undefined8 local_158;
  longlong local_150;
  TVector<double> *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar1 = param_1->ArrayNum;
  pcVar10 = local_res10;
  local_160 = (void *)0x0;
  local_158 = 0;
  local_res10[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_160,pcVar10);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res10[0] == '\0') {
      uVar12 = 0;
      if (0 < iVar1) {
        local_150 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar12 < iVar1) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            pcVar10 = (char *)(longlong)(int)uVar12;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          local_148 = param_1->DataPtr;
          uVar8 = 0;
          if ((int)uVar12 < (int)local_158) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (pcVar10 = (char *)(longlong)(int)uVar12,
             bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          lVar4 = local_150;
          local_b8 = *(undefined8 *)&this->ValueRanges;
          uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_a8 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_98 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_168[0] = *(undefined4 *)(local_150 + (longlong)local_160);
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_68 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_58 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar11 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar11 = plVar2;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar3)(uVar9,local_168,local_148 + (int)uVar12,&local_b8,pcVar10);
          local_150 = lVar4 + 4;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar1);
      }
    }
    else {
      uVar12 = 0;
      if (0 < iVar1) {
        do {
          uVar8 = 0;
          if ((int)uVar12 < iVar1) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            pcVar10 = (char *)(longlong)(int)uVar12;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          local_138 = *(undefined8 *)&this->ValueRanges;
          uStack_130 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_res20[0] = uVar12 + param_2;
          local_128 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_120 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_118 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_110 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_108 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_100 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_f8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_f0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_c8 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar11 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar11 = plVar2;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar3)(uVar9,local_res20,param_1->DataPtr + (int)uVar12,&local_138,pcVar10);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar1);
      }
    }
    bVar6 = true;
  }
  if (local_160 != (void *)0x0) {
    FMemory::Free(local_160);
  }
  return bVar6;
}

// GetRangeImpl @ 14981a240

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_>
::GetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_>
               *this,TArrayView<UE::Math::TVector<double>,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  char local_res10 [16];
  int local_res20 [2];
  undefined4 local_128 [2];
  void *local_120;
  undefined8 local_118;
  longlong local_110;
  TVector<double> *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar1 = param_1->ArrayNum;
  local_120 = (void *)0x0;
  local_118 = 0;
  local_res10[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_120,local_res10);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res10[0] == '\0') {
      uVar11 = 0;
      if (0 < iVar1) {
        local_110 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar11 < iVar1) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_108 = param_1->DataPtr;
          uVar8 = 0;
          if ((int)uVar11 < (int)local_118) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          lVar4 = local_110;
          local_98 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_128[0] = *(undefined4 *)(local_110 + (longlong)local_120);
          local_68 = *(undefined8 *)&this->ValueRanges;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_58 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar10 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar10 = plVar2;
          }
          uVar9 = (**(code **)(*plVar10 + 8))();
          (*pcVar3)(uVar9,local_128,local_108 + (int)uVar11,&local_68,&local_98);
          local_110 = lVar4 + 4;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar1);
      }
    }
    else {
      uVar11 = 0;
      if (0 < iVar1) {
        do {
          uVar8 = 0;
          if ((int)uVar11 < iVar1) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_f8 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_f0 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_res20[0] = uVar11 + param_2;
          local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_c8 = *(undefined8 *)&this->ValueRanges;
          uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_b8 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_a8 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Getter);
          plVar2 = *(longlong **)&(this->Getter).field_0x28;
          pcVar3 = *(code **)&this->Getter;
          plVar10 = (longlong *)&(this->Getter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar10 = plVar2;
          }
          uVar9 = (**(code **)(*plVar10 + 8))();
          (*pcVar3)(uVar9,local_res20,param_1->DataPtr + (int)uVar11,&local_c8,&local_f8);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar1);
      }
    }
    bVar6 = true;
  }
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  return bVar6;
}

// SetRangeImpl @ 149834770

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TQuat<double>,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_>
::SetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TQuat<double>,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_>
               *this,TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  TQuat<double> *pTVar8;
  undefined8 uVar9;
  uint uVar10;
  char *pcVar11;
  longlong *plVar12;
  uint uVar13;
  char local_res20 [8];
  int local_158 [2];
  undefined4 local_150 [2];
  void *local_148;
  undefined8 local_140;
  longlong local_138;
  TQuat<double> *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  pcVar11 = local_res20;
  uVar13 = 0;
  iVar1 = param_1->ArrayNum;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_res20[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_148,pcVar11);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res20[0] == '\0') {
      if (0 < iVar1) {
        local_138 = 0;
        do {
          lVar4 = local_138;
          local_130 = TArrayView<UE::Math::TQuat<double>_const_,int>::operator[](param_1,uVar13);
          uVar10 = 0;
          if ((int)uVar13 < (int)local_140) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if (uVar10 == 0) {
            pcVar11 = (char *)(longlong)(int)uVar13;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          local_a8 = *(undefined8 *)&this->ValueRanges;
          uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_98 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_150[0] = *(undefined4 *)(lVar4 + (longlong)local_148);
          local_68 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_58 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_38 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_30 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
          plVar2 = *(longlong **)&(this->Setter).field_0x28;
          pcVar3 = *(code **)&this->Setter;
          plVar12 = (longlong *)&(this->Setter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar12 = plVar2;
          }
          uVar9 = (**(code **)(*plVar12 + 8))();
          (*pcVar3)(uVar9,local_150,local_130,&local_a8,pcVar11);
          uVar13 = uVar13 + 1;
          local_138 = local_138 + 4;
        } while ((int)uVar13 < iVar1);
      }
    }
    else if (0 < iVar1) {
      do {
        pTVar8 = TArrayView<UE::Math::TQuat<double>_const_,int>::operator[](param_1,uVar13);
        local_128 = *(undefined8 *)&this->ValueRanges;
        uStack_120 = *(undefined8 *)&(this->ValueRanges).field_0x8;
        local_118 = *(undefined8 *)&(this->ValueRanges).field_0x10;
        uStack_110 = *(undefined8 *)&(this->ValueRanges).field_0x18;
        local_158[0] = uVar13 + param_2;
        local_108 = *(undefined8 *)&(this->ValueRanges).field_0x20;
        uStack_100 = *(undefined8 *)&(this->ValueRanges).field_0x28;
        local_f8 = *(undefined8 *)&(this->ValueRanges).field_0x30;
        uStack_f0 = *(undefined8 *)&(this->ValueRanges).field_0x38;
        local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
        uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
        local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
        uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
        local_c8 = *(undefined8 *)&(this->ValueRanges).field_0x60;
        uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x68;
        local_b8 = *(undefined8 *)&(this->ValueRanges).field_0x70;
        uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x78;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar2 = *(longlong **)&(this->Setter).field_0x28;
        pcVar3 = *(code **)&this->Setter;
        plVar12 = (longlong *)&(this->Setter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar12 = plVar2;
        }
        uVar9 = (**(code **)(*plVar12 + 8))();
        (*pcVar3)(uVar9,local_158,pTVar8,&local_128);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar1);
    }
    bVar6 = true;
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  return bVar6;
}

// SetRangeImpl @ 149834a50

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TQuat<double>,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_>
::SetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TQuat<double>,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_>
               *this,TArrayView<UE::Math::TQuat<double>_const_,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  TQuat<double> *pTVar8;
  undefined8 uVar9;
  uint uVar10;
  char *pcVar11;
  longlong *plVar12;
  uint uVar13;
  char local_res20 [8];
  int local_158 [2];
  undefined4 local_150 [2];
  void *local_148;
  undefined8 local_140;
  longlong local_138;
  TQuat<double> *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  pcVar11 = local_res20;
  uVar13 = 0;
  iVar1 = param_1->ArrayNum;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_res20[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_148,pcVar11);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res20[0] == '\0') {
      if (0 < iVar1) {
        local_138 = 0;
        do {
          lVar4 = local_138;
          local_130 = TArrayView<UE::Math::TQuat<double>_const_,int>::operator[](param_1,uVar13);
          uVar10 = 0;
          if ((int)uVar13 < (int)local_140) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if (uVar10 == 0) {
            pcVar11 = (char *)(longlong)(int)uVar13;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          local_a8 = *(undefined8 *)&this->ValueRanges;
          uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_98 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_150[0] = *(undefined4 *)(lVar4 + (longlong)local_148);
          local_68 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_58 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_38 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_30 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
          plVar2 = *(longlong **)&(this->Setter).field_0x28;
          pcVar3 = *(code **)&this->Setter;
          plVar12 = (longlong *)&(this->Setter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar12 = plVar2;
          }
          uVar9 = (**(code **)(*plVar12 + 8))();
          (*pcVar3)(uVar9,local_150,local_130,&local_a8,pcVar11);
          uVar13 = uVar13 + 1;
          local_138 = local_138 + 4;
        } while ((int)uVar13 < iVar1);
      }
    }
    else if (0 < iVar1) {
      do {
        pTVar8 = TArrayView<UE::Math::TQuat<double>_const_,int>::operator[](param_1,uVar13);
        local_128 = *(undefined8 *)&this->ValueRanges;
        uStack_120 = *(undefined8 *)&(this->ValueRanges).field_0x8;
        local_118 = *(undefined8 *)&(this->ValueRanges).field_0x10;
        uStack_110 = *(undefined8 *)&(this->ValueRanges).field_0x18;
        local_158[0] = uVar13 + param_2;
        local_108 = *(undefined8 *)&(this->ValueRanges).field_0x20;
        uStack_100 = *(undefined8 *)&(this->ValueRanges).field_0x28;
        local_f8 = *(undefined8 *)&(this->ValueRanges).field_0x30;
        uStack_f0 = *(undefined8 *)&(this->ValueRanges).field_0x38;
        local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
        uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
        local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
        uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
        local_c8 = *(undefined8 *)&(this->ValueRanges).field_0x60;
        uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x68;
        local_b8 = *(undefined8 *)&(this->ValueRanges).field_0x70;
        uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x78;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar2 = *(longlong **)&(this->Setter).field_0x28;
        pcVar3 = *(code **)&this->Setter;
        plVar12 = (longlong *)&(this->Setter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar12 = plVar2;
        }
        uVar9 = (**(code **)(*plVar12 + 8))();
        (*pcVar3)(uVar9,local_158,pTVar8,&local_128);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar1);
    }
    bVar6 = true;
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  return bVar6;
}

// SetRangeImpl @ 149834d30

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_>
::SetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>_>
               *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  TVector<double> *pTVar8;
  undefined8 uVar9;
  uint uVar10;
  char *pcVar11;
  longlong *plVar12;
  uint uVar13;
  char local_res20 [8];
  int local_158 [2];
  undefined4 local_150 [2];
  void *local_148;
  undefined8 local_140;
  longlong local_138;
  TVector<double> *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  pcVar11 = local_res20;
  uVar13 = 0;
  iVar1 = param_1->ArrayNum;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_res20[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_148,pcVar11);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res20[0] == '\0') {
      if (0 < iVar1) {
        local_138 = 0;
        do {
          lVar4 = local_138;
          local_130 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,uVar13);
          uVar10 = 0;
          if ((int)uVar13 < (int)local_140) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if (uVar10 == 0) {
            pcVar11 = (char *)(longlong)(int)uVar13;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          local_a8 = *(undefined8 *)&this->ValueRanges;
          uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_98 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_150[0] = *(undefined4 *)(lVar4 + (longlong)local_148);
          local_68 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_58 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_38 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_30 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
          plVar2 = *(longlong **)&(this->Setter).field_0x28;
          pcVar3 = *(code **)&this->Setter;
          plVar12 = (longlong *)&(this->Setter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar12 = plVar2;
          }
          uVar9 = (**(code **)(*plVar12 + 8))();
          (*pcVar3)(uVar9,local_150,local_130,&local_a8,pcVar11);
          uVar13 = uVar13 + 1;
          local_138 = local_138 + 4;
        } while ((int)uVar13 < iVar1);
      }
    }
    else if (0 < iVar1) {
      do {
        pTVar8 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,uVar13);
        local_128 = *(undefined8 *)&this->ValueRanges;
        uStack_120 = *(undefined8 *)&(this->ValueRanges).field_0x8;
        local_118 = *(undefined8 *)&(this->ValueRanges).field_0x10;
        uStack_110 = *(undefined8 *)&(this->ValueRanges).field_0x18;
        local_158[0] = uVar13 + param_2;
        local_108 = *(undefined8 *)&(this->ValueRanges).field_0x20;
        uStack_100 = *(undefined8 *)&(this->ValueRanges).field_0x28;
        local_f8 = *(undefined8 *)&(this->ValueRanges).field_0x30;
        uStack_f0 = *(undefined8 *)&(this->ValueRanges).field_0x38;
        local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
        uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
        local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
        uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
        local_c8 = *(undefined8 *)&(this->ValueRanges).field_0x60;
        uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x68;
        local_b8 = *(undefined8 *)&(this->ValueRanges).field_0x70;
        uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x78;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar2 = *(longlong **)&(this->Setter).field_0x28;
        pcVar3 = *(code **)&this->Setter;
        plVar12 = (longlong *)&(this->Setter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar12 = plVar2;
        }
        uVar9 = (**(code **)(*plVar12 + 8))();
        (*pcVar3)(uVar9,local_158,pTVar8,&local_128);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar1);
    }
    bVar6 = true;
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  return bVar6;
}

// SetRangeImpl @ 149835010

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_>
::SetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_>
               *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  TVector<double> *pTVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  char local_res20 [8];
  int local_218 [2];
  undefined4 local_210 [2];
  void *local_208;
  undefined8 local_200;
  longlong local_1f8;
  TVector<double> *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  uVar12 = 0;
  iVar1 = param_1->ArrayNum;
  local_208 = (void *)0x0;
  local_200 = 0;
  local_res20[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_208,local_res20);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res20[0] == '\0') {
      if (0 < iVar1) {
        local_1f8 = 0;
        do {
          lVar4 = local_1f8;
          local_1f0 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,uVar12);
          uVar10 = 0;
          if ((int)uVar12 < (int)local_200) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_188 = *(undefined8 *)&(this->ValueRanges).field_0xb0;
          uStack_180 = *(undefined8 *)&(this->ValueRanges).field_0xb8;
          local_178 = *(undefined8 *)&(this->ValueRanges).field_0xc0;
          uStack_170 = *(undefined8 *)&(this->ValueRanges).field_0xc8;
          local_168 = *(undefined8 *)&(this->ValueRanges).field_0xd0;
          uStack_160 = *(undefined8 *)&(this->ValueRanges).field_0xd8;
          local_210[0] = *(undefined4 *)(lVar4 + (longlong)local_208);
          local_158 = *(undefined8 *)&(this->ValueRanges).field_0x80;
          uStack_150 = *(undefined8 *)&(this->ValueRanges).field_0x88;
          local_148 = *(undefined8 *)&(this->ValueRanges).field_0x90;
          uStack_140 = *(undefined8 *)&(this->ValueRanges).field_0x98;
          local_138 = *(undefined8 *)&(this->ValueRanges).field_0xa0;
          uStack_130 = *(undefined8 *)&(this->ValueRanges).field_0xa8;
          local_a8 = *(undefined8 *)&this->ValueRanges;
          uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_98 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_68 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_58 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_38 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_30 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
          plVar2 = *(longlong **)&(this->Setter).field_0x28;
          pcVar3 = *(code **)&this->Setter;
          plVar11 = (longlong *)&(this->Setter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar11 = plVar2;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar3)(uVar9,local_210,local_1f0,&local_a8,&local_158,&local_188);
          uVar12 = uVar12 + 1;
          local_1f8 = local_1f8 + 4;
        } while ((int)uVar12 < iVar1);
      }
    }
    else if (0 < iVar1) {
      do {
        pTVar8 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,uVar12);
        local_1e8 = *(undefined8 *)&(this->ValueRanges).field_0xb0;
        uStack_1e0 = *(undefined8 *)&(this->ValueRanges).field_0xb8;
        local_1d8 = *(undefined8 *)&(this->ValueRanges).field_0xc0;
        uStack_1d0 = *(undefined8 *)&(this->ValueRanges).field_0xc8;
        local_218[0] = uVar12 + param_2;
        local_1c8 = *(undefined8 *)&(this->ValueRanges).field_0xd0;
        uStack_1c0 = *(undefined8 *)&(this->ValueRanges).field_0xd8;
        local_1b8 = *(undefined8 *)&(this->ValueRanges).field_0x80;
        uStack_1b0 = *(undefined8 *)&(this->ValueRanges).field_0x88;
        local_1a8 = *(undefined8 *)&(this->ValueRanges).field_0x90;
        uStack_1a0 = *(undefined8 *)&(this->ValueRanges).field_0x98;
        local_198 = *(undefined8 *)&(this->ValueRanges).field_0xa0;
        uStack_190 = *(undefined8 *)&(this->ValueRanges).field_0xa8;
        local_128 = *(undefined8 *)&this->ValueRanges;
        uStack_120 = *(undefined8 *)&(this->ValueRanges).field_0x8;
        local_118 = *(undefined8 *)&(this->ValueRanges).field_0x10;
        uStack_110 = *(undefined8 *)&(this->ValueRanges).field_0x18;
        local_108 = *(undefined8 *)&(this->ValueRanges).field_0x20;
        uStack_100 = *(undefined8 *)&(this->ValueRanges).field_0x28;
        local_f8 = *(undefined8 *)&(this->ValueRanges).field_0x30;
        uStack_f0 = *(undefined8 *)&(this->ValueRanges).field_0x38;
        local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
        uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
        local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
        uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
        local_c8 = *(undefined8 *)&(this->ValueRanges).field_0x60;
        uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x68;
        local_b8 = *(undefined8 *)&(this->ValueRanges).field_0x70;
        uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x78;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar2 = *(longlong **)&(this->Setter).field_0x28;
        pcVar3 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar11 = plVar2;
        }
        uVar9 = (**(code **)(*plVar11 + 8))();
        (*pcVar3)(uVar9,local_218,pTVar8,&local_128,&local_1b8,&local_1e8);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    bVar6 = true;
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  return bVar6;
}

// SetRangeImpl @ 1498353c0

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_>
::SetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>_>
               *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  TVector<double> *pTVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  char local_res20 [8];
  int local_118 [2];
  undefined4 local_110 [2];
  void *local_108;
  undefined8 local_100;
  longlong local_f8;
  TVector<double> *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  uVar12 = 0;
  iVar1 = param_1->ArrayNum;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_res20[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_108,local_res20);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res20[0] == '\0') {
      if (0 < iVar1) {
        local_f8 = 0;
        do {
          lVar4 = local_f8;
          local_f0 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,uVar12);
          uVar10 = 0;
          if ((int)uVar12 < (int)local_100) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_68 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_110[0] = *(undefined4 *)(lVar4 + (longlong)local_108);
          local_58 = *(undefined8 *)&this->ValueRanges;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_38 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_30 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
          plVar2 = *(longlong **)&(this->Setter).field_0x28;
          pcVar3 = *(code **)&this->Setter;
          plVar11 = (longlong *)&(this->Setter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar11 = plVar2;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar3)(uVar9,local_110,local_f0,&local_58,&local_88);
          uVar12 = uVar12 + 1;
          local_f8 = local_f8 + 4;
        } while ((int)uVar12 < iVar1);
      }
    }
    else if (0 < iVar1) {
      do {
        pTVar8 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,uVar12);
        local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x30;
        uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x38;
        local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
        uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
        local_118[0] = uVar12 + param_2;
        local_c8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
        uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
        local_b8 = *(undefined8 *)&this->ValueRanges;
        uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
        local_a8 = *(undefined8 *)&(this->ValueRanges).field_0x10;
        uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x18;
        local_98 = *(undefined8 *)&(this->ValueRanges).field_0x20;
        uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x28;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar2 = *(longlong **)&(this->Setter).field_0x28;
        pcVar3 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar11 = plVar2;
        }
        uVar9 = (**(code **)(*plVar11 + 8))();
        (*pcVar3)(uVar9,local_118,pTVar8,&local_b8,&local_e8);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    bVar6 = true;
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  return bVar6;
}

// SetRangeImpl @ 149835690

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_>
::SetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>_>
               *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  TVector<double> *pTVar8;
  undefined8 uVar9;
  uint uVar10;
  char *pcVar11;
  longlong *plVar12;
  uint uVar13;
  char local_res20 [8];
  int local_158 [2];
  undefined4 local_150 [2];
  void *local_148;
  undefined8 local_140;
  longlong local_138;
  TVector<double> *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  pcVar11 = local_res20;
  uVar13 = 0;
  iVar1 = param_1->ArrayNum;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_res20[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_148,pcVar11);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res20[0] == '\0') {
      if (0 < iVar1) {
        local_138 = 0;
        do {
          lVar4 = local_138;
          local_130 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,uVar13);
          uVar10 = 0;
          if ((int)uVar13 < (int)local_140) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if (uVar10 == 0) {
            pcVar11 = (char *)(longlong)(int)uVar13;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
          }
          local_a8 = *(undefined8 *)&this->ValueRanges;
          uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_98 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_150[0] = *(undefined4 *)(lVar4 + (longlong)local_148);
          local_68 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_58 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x60;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x68;
          local_38 = *(undefined8 *)&(this->ValueRanges).field_0x70;
          uStack_30 = *(undefined8 *)&(this->ValueRanges).field_0x78;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
          plVar2 = *(longlong **)&(this->Setter).field_0x28;
          pcVar3 = *(code **)&this->Setter;
          plVar12 = (longlong *)&(this->Setter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar12 = plVar2;
          }
          uVar9 = (**(code **)(*plVar12 + 8))();
          (*pcVar3)(uVar9,local_150,local_130,&local_a8,pcVar11);
          uVar13 = uVar13 + 1;
          local_138 = local_138 + 4;
        } while ((int)uVar13 < iVar1);
      }
    }
    else if (0 < iVar1) {
      do {
        pTVar8 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,uVar13);
        local_128 = *(undefined8 *)&this->ValueRanges;
        uStack_120 = *(undefined8 *)&(this->ValueRanges).field_0x8;
        local_118 = *(undefined8 *)&(this->ValueRanges).field_0x10;
        uStack_110 = *(undefined8 *)&(this->ValueRanges).field_0x18;
        local_158[0] = uVar13 + param_2;
        local_108 = *(undefined8 *)&(this->ValueRanges).field_0x20;
        uStack_100 = *(undefined8 *)&(this->ValueRanges).field_0x28;
        local_f8 = *(undefined8 *)&(this->ValueRanges).field_0x30;
        uStack_f0 = *(undefined8 *)&(this->ValueRanges).field_0x38;
        local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
        uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
        local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
        uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
        local_c8 = *(undefined8 *)&(this->ValueRanges).field_0x60;
        uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x68;
        local_b8 = *(undefined8 *)&(this->ValueRanges).field_0x70;
        uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x78;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar2 = *(longlong **)&(this->Setter).field_0x28;
        pcVar3 = *(code **)&this->Setter;
        plVar12 = (longlong *)&(this->Setter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar12 = plVar2;
        }
        uVar9 = (**(code **)(*plVar12 + 8))();
        (*pcVar3)(uVar9,local_158,pTVar8,&local_128);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar1);
    }
    bVar6 = true;
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  return bVar6;
}

// SetRangeImpl @ 149835970

bool __thiscall
FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_>
::SetRangeImpl(FPCGCustomPointPropertyAccessor<UE::Math::TVector<double>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>,TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>_>
               *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,int param_2,
              IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  TVector<double> *pTVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  char local_res20 [8];
  int local_118 [2];
  undefined4 local_110 [2];
  void *local_108;
  undefined8 local_100;
  longlong local_f8;
  TVector<double> *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_3->bIsReadOnly != false) {
    return false;
  }
  uVar12 = 0;
  iVar1 = param_1->ArrayNum;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_res20[0] = '\0';
  cVar5 = (**(code **)(param_3->_padding_ + 8))(param_3,param_2,iVar1,&local_108,local_res20);
  if (cVar5 == '\0') {
    bVar6 = false;
  }
  else {
    if (local_res20[0] == '\0') {
      if (0 < iVar1) {
        local_f8 = 0;
        do {
          lVar4 = local_f8;
          local_f0 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,uVar12);
          uVar10 = 0;
          if ((int)uVar12 < (int)local_100) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_88 = *(undefined8 *)&(this->ValueRanges).field_0x30;
          uStack_80 = *(undefined8 *)&(this->ValueRanges).field_0x38;
          local_78 = *(undefined8 *)&(this->ValueRanges).field_0x40;
          uStack_70 = *(undefined8 *)&(this->ValueRanges).field_0x48;
          local_68 = *(undefined8 *)&(this->ValueRanges).field_0x50;
          uStack_60 = *(undefined8 *)&(this->ValueRanges).field_0x58;
          local_110[0] = *(undefined4 *)(lVar4 + (longlong)local_108);
          local_58 = *(undefined8 *)&this->ValueRanges;
          uStack_50 = *(undefined8 *)&(this->ValueRanges).field_0x8;
          local_48 = *(undefined8 *)&(this->ValueRanges).field_0x10;
          uStack_40 = *(undefined8 *)&(this->ValueRanges).field_0x18;
          local_38 = *(undefined8 *)&(this->ValueRanges).field_0x20;
          uStack_30 = *(undefined8 *)&(this->ValueRanges).field_0x28;
          UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
          plVar2 = *(longlong **)&(this->Setter).field_0x28;
          pcVar3 = *(code **)&this->Setter;
          plVar11 = (longlong *)&(this->Setter).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar11 = plVar2;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar3)(uVar9,local_110,local_f0,&local_58,&local_88);
          uVar12 = uVar12 + 1;
          local_f8 = local_f8 + 4;
        } while ((int)uVar12 < iVar1);
      }
    }
    else if (0 < iVar1) {
      do {
        pTVar8 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,uVar12);
        local_e8 = *(undefined8 *)&(this->ValueRanges).field_0x30;
        uStack_e0 = *(undefined8 *)&(this->ValueRanges).field_0x38;
        local_d8 = *(undefined8 *)&(this->ValueRanges).field_0x40;
        uStack_d0 = *(undefined8 *)&(this->ValueRanges).field_0x48;
        local_118[0] = uVar12 + param_2;
        local_c8 = *(undefined8 *)&(this->ValueRanges).field_0x50;
        uStack_c0 = *(undefined8 *)&(this->ValueRanges).field_0x58;
        local_b8 = *(undefined8 *)&this->ValueRanges;
        uStack_b0 = *(undefined8 *)&(this->ValueRanges).field_0x8;
        local_a8 = *(undefined8 *)&(this->ValueRanges).field_0x10;
        uStack_a0 = *(undefined8 *)&(this->ValueRanges).field_0x18;
        local_98 = *(undefined8 *)&(this->ValueRanges).field_0x20;
        uStack_90 = *(undefined8 *)&(this->ValueRanges).field_0x28;
        UE::Core::Private::Function::CheckCallable(*(void **)&this->Setter);
        plVar2 = *(longlong **)&(this->Setter).field_0x28;
        pcVar3 = *(code **)&this->Setter;
        plVar11 = (longlong *)&(this->Setter).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar11 = plVar2;
        }
        uVar9 = (**(code **)(*plVar11 + 8))();
        (*pcVar3)(uVar9,local_118,pTVar8,&local_b8,&local_e8);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar1);
    }
    bVar6 = true;
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  return bVar6;
}

