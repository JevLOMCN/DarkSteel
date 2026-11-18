// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 21

// ApplyImpl<int> @ 149dce780

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<int>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 local_res8 [2];
  undefined4 *local_28;
  undefined4 uStack_20;
  undefined4 *local_18;
  undefined4 uStack_10;
  
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
    local_res8[0] = 0;
    local_28 = local_res8;
    uStack_20 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0x18))
                      (pIVar1,&local_28,param_1,(this->InputKeys).Ptr,6);
    if (cVar3 != '\0') {
      if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOverrideOutputAccessor.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                           ,0x7e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
      local_18 = local_res8;
      uStack_10 = 1;
      cVar3 = (**(code **)(pIVar1->_padding_ + 0x20))(pIVar1,&local_18,0,param_2,1);
      return cVar3 != '\0';
    }
  }
  return false;
}

// ApplyImpl<float> @ 149dce8a0

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<float>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 local_res8 [2];
  undefined4 *local_28;
  undefined4 uStack_20;
  undefined4 *local_18;
  undefined4 uStack_10;
  
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
    local_res8[0] = 0;
    local_28 = local_res8;
    uStack_20 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0x38))
                      (pIVar1,&local_28,param_1,(this->InputKeys).Ptr,6);
    if (cVar3 != '\0') {
      if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOverrideOutputAccessor.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                           ,0x7e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
      local_18 = local_res8;
      uStack_10 = 1;
      cVar3 = (**(code **)(pIVar1->_padding_ + 0x40))(pIVar1,&local_18,0,param_2,1);
      return cVar3 != '\0';
    }
  }
  return false;
}

// ApplyImpl<double> @ 149dce9c0

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<double>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 local_res8;
  undefined8 *local_28;
  undefined4 uStack_20;
  undefined8 *local_18;
  undefined4 uStack_10;
  
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
    local_28 = &local_res8;
    local_res8 = 0;
    uStack_20 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0x48))
                      (pIVar1,&local_28,param_1,(this->InputKeys).Ptr,6);
    if (cVar3 != '\0') {
      if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOverrideOutputAccessor.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                           ,0x7e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
      local_18 = &local_res8;
      uStack_10 = 1;
      cVar3 = (**(code **)(pIVar1->_padding_ + 0x50))(pIVar1,&local_18,0,param_2,1);
      return cVar3 != '\0';
    }
  }
  return false;
}

// ApplyImpl<UE::Math::TQuat<double>_> @ 149dceae0

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<UE::Math::TQuat<double>_>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined8 *local_38;
  undefined4 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
    local_48 = &local_28;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    uStack_40 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0x88))
                      (pIVar1,&local_48,param_1,(this->InputKeys).Ptr,6);
    if (cVar3 != '\0') {
      if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOverrideOutputAccessor.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                           ,0x7e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
      local_38 = &local_28;
      uStack_30 = 1;
      cVar3 = (**(code **)(pIVar1->_padding_ + 0x90))(pIVar1,&local_38,0,param_2,1);
      return cVar3 != '\0';
    }
  }
  return false;
}

// ApplyImpl<UE::Math::TRotator<double>_> @ 149dcec10

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<UE::Math::TRotator<double>_>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined8 *local_38;
  undefined4 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_48 = &local_28;
    uStack_40 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 200))(pIVar1,&local_48,param_1,(this->InputKeys).Ptr,6)
    ;
    if (cVar3 != '\0') {
      if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOverrideOutputAccessor.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                           ,0x7e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
      local_38 = &local_28;
      uStack_30 = 1;
      cVar3 = (**(code **)(pIVar1->_padding_ + 0xd0))(pIVar1,&local_38,0,param_2,1);
      return cVar3 != '\0';
    }
  }
  return false;
}

// ApplyImpl<UE::Math::TTransform<double>_> @ 149dced40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<UE::Math::TTransform<double>_>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  undefined1 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    local_b8 = local_78;
    pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
    uStack_b0 = 1;
    local_c8 = 6;
    local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
    ;
    local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
    ;
    local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_48._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_48._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20)
    ;
    local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    local_28._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_28._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_28._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
    ;
    uStack_90 = 1;
    local_98 = local_b8;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0x98))(pIVar1,&local_98,param_1,(this->InputKeys).Ptr);
    if (cVar3 != '\0') {
      if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOverrideOutputAccessor.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                           ,0x7e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
      local_a8 = local_78;
      uStack_a0 = 1;
      uStack_80 = 1;
      uStack_7c = uStack_9c;
      local_c8 = 1;
      local_88 = local_a8;
      cVar3 = (**(code **)(pIVar1->_padding_ + 0xa0))(pIVar1,&local_88,0,param_2);
      return cVar3 != '\0';
    }
  }
  return false;
}

// ApplyImpl<UE::Math::TVector2<double>_> @ 149dceec0

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<UE::Math::TVector2<double>_>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 uStack_20;
  undefined8 *local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
    local_28 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    uStack_20 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0x58))
                      (pIVar1,&local_28,param_1,(this->InputKeys).Ptr,6);
    if (cVar3 != '\0') {
      if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOverrideOutputAccessor.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                           ,0x7e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
      local_38 = &local_48;
      uStack_30 = 1;
      uStack_10 = 1;
      uStack_c = uStack_2c;
      local_18 = local_38;
      cVar3 = (**(code **)(pIVar1->_padding_ + 0x60))(pIVar1,&local_18,0,param_2,1);
      return cVar3 != '\0';
    }
  }
  return false;
}

// ApplyImpl<UE::Math::TVector4<double>_> @ 149dcefe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<UE::Math::TVector4<double>_>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined8 *local_38;
  undefined4 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = ___xmm_3ff00000000000000000000000000000;
    uStack_10 = _UNK_15061cbc8;
    local_48 = &local_28;
    uStack_40 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0x78))
                      (pIVar1,&local_48,param_1,(this->InputKeys).Ptr,6);
    if (cVar3 != '\0') {
      if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOverrideOutputAccessor.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                           ,0x7e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
      local_38 = &local_28;
      uStack_30 = 1;
      cVar3 = (**(code **)(pIVar1->_padding_ + 0x80))(pIVar1,&local_38,0,param_2,1);
      return cVar3 != '\0';
    }
  }
  return false;
}

// ApplyImpl<UE::Math::TVector<double>_> @ 149dcf110

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<UE::Math::TVector<double>_>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined8 *local_38;
  undefined4 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_48 = &local_28;
    uStack_40 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0x68))
                      (pIVar1,&local_48,param_1,(this->InputKeys).Ptr,6);
    if (cVar3 != '\0') {
      if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOverrideOutputAccessor.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                           ,0x7e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
      local_38 = &local_28;
      uStack_30 = 1;
      cVar3 = (**(code **)(pIVar1->_padding_ + 0x70))(pIVar1,&local_38,0,param_2,1);
      return cVar3 != '\0';
    }
  }
  return false;
}

// ApplyImpl<FSoftClassPath> @ 149dcf230

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<FSoftClassPath>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  if (((((this->InputKeys).Ptr == (IPCGAttributeAccessorKeys *)0x0) ||
       ((this->ObjectOverrideInputAccessor).Ptr == (IPCGAttributeAccessor *)0x0)) ||
      ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0)) ||
     (this->ObjectOverrideFunction == (pmf_15f13c7d)0x0)) {
    return false;
  }
  pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
  local_28 = 0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  local_48 = &local_28;
  uStack_40 = 1;
  cVar3 = (**(code **)(pIVar1->_padding_ + 0xf8))(pIVar1,&local_48,param_1,(this->InputKeys).Ptr,6);
  if (cVar3 != '\0') {
    if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectOverrideOutputAccessor.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                         ,0x7e,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
    local_38 = &local_28;
    uStack_30 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0x100))(pIVar1,&local_38,0,param_2,1);
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_149dcf335;
    }
  }
  bVar4 = false;
LAB_149dcf335:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return bVar4;
}

// ApplyImpl<FSoftObjectPath> @ 149dcf380

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<FSoftObjectPath>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *local_48;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  if (((((this->InputKeys).Ptr == (IPCGAttributeAccessorKeys *)0x0) ||
       ((this->ObjectOverrideInputAccessor).Ptr == (IPCGAttributeAccessor *)0x0)) ||
      ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0)) ||
     (this->ObjectOverrideFunction == (pmf_15f13c7d)0x0)) {
    return false;
  }
  pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
  local_28 = 0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  local_48 = &local_28;
  uStack_40 = 1;
  cVar3 = (**(code **)(pIVar1->_padding_ + 0xe8))(pIVar1,&local_48,param_1,(this->InputKeys).Ptr,6);
  if (cVar3 != '\0') {
    if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectOverrideOutputAccessor.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                         ,0x7e,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
    local_38 = &local_28;
    uStack_30 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0xf0))(pIVar1,&local_38,0,param_2,1);
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_149dcf485;
    }
  }
  bVar4 = false;
LAB_149dcf485:
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return bVar4;
}

// ApplyImpl<FName> @ 149dcf4d0

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<FName>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 local_res8;
  undefined8 *local_28;
  undefined4 uStack_20;
  undefined8 *local_18;
  undefined4 uStack_10;
  
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
    local_res8 = 0;
    local_28 = &local_res8;
    uStack_20 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0xd8))
                      (pIVar1,&local_28,param_1,(this->InputKeys).Ptr,6);
    if (cVar3 != '\0') {
      if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOverrideOutputAccessor.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                           ,0x7e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
      local_18 = &local_res8;
      uStack_10 = 1;
      cVar3 = (**(code **)(pIVar1->_padding_ + 0xe0))(pIVar1,&local_18,0,param_2,1);
      return cVar3 != '\0';
    }
  }
  return false;
}

// ApplyImpl<FString> @ 149dcf5f0

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<FString>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  void *local_58;
  undefined8 local_50;
  void **local_48;
  undefined4 uStack_40;
  void **local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  void **local_28;
  undefined4 uStack_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (((((this->InputKeys).Ptr == (IPCGAttributeAccessorKeys *)0x0) ||
       ((this->ObjectOverrideInputAccessor).Ptr == (IPCGAttributeAccessor *)0x0)) ||
      ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0)) ||
     (this->ObjectOverrideFunction == (pmf_15f13c7d)0x0)) {
    return false;
  }
  pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = &local_58;
  uStack_40 = 1;
  uStack_20 = 1;
  local_28 = local_48;
  cVar3 = (**(code **)(pIVar1->_padding_ + 0xa8))(pIVar1,&local_28,param_1,(this->InputKeys).Ptr,6);
  if (cVar3 != '\0') {
    if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectOverrideOutputAccessor.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                         ,0x7e,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
    local_38 = &local_58;
    uStack_30 = 1;
    uStack_10 = 1;
    uStack_c = uStack_2c;
    local_18 = local_38;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0xb0))(pIVar1,&local_18,0,param_2,1);
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_149dcf6ef;
    }
  }
  bVar4 = false;
LAB_149dcf6ef:
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return bVar4;
}

// ApplyImpl<__int64> @ 149dcf730

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<__int64>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 local_res8;
  undefined8 *local_28;
  undefined4 uStack_20;
  undefined8 *local_18;
  undefined4 uStack_10;
  
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
    local_28 = &local_res8;
    local_res8 = 0;
    uStack_20 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0x28))
                      (pIVar1,&local_28,param_1,(this->InputKeys).Ptr,6);
    if (cVar3 != '\0') {
      if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOverrideOutputAccessor.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                           ,0x7e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
      local_18 = &local_res8;
      uStack_10 = 1;
      cVar3 = (**(code **)(pIVar1->_padding_ + 0x30))(pIVar1,&local_18,0,param_2,1);
      return cVar3 != '\0';
    }
  }
  return false;
}

// ApplyImpl<bool> @ 149dcf850

bool __thiscall
FPCGObjectSingleOverride::ApplyImpl<bool>
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  IPCGAttributeAccessor *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 local_res8 [8];
  undefined1 *local_28;
  undefined4 uStack_20;
  undefined1 *local_18;
  undefined4 uStack_10;
  
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    pIVar1 = (this->ObjectOverrideInputAccessor).Ptr;
    local_res8[0] = 0;
    local_28 = local_res8;
    uStack_20 = 1;
    cVar3 = (**(code **)(pIVar1->_padding_ + 0xb8))
                      (pIVar1,&local_28,param_1,(this->InputKeys).Ptr,6);
    if (cVar3 != '\0') {
      if ((this->ObjectOverrideOutputAccessor).Ptr == (IPCGAttributeAccessor *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectOverrideOutputAccessor.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\PCGObjectPropertyOverride.h"
                           ,0x7e,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      pIVar1 = (this->ObjectOverrideOutputAccessor).Ptr;
      local_18 = local_res8;
      uStack_10 = 1;
      cVar3 = (**(code **)(pIVar1->_padding_ + 0xc0))(pIVar1,&local_18,0,param_2,1);
      return cVar3 != '\0';
    }
  }
  return false;
}

// Apply @ 149e4a110

bool __thiscall
FPCGObjectSingleOverride::Apply
          (FPCGObjectSingleOverride *this,int param_1,IPCGAttributeAccessorKeys *param_2)

{
  undefined1 uVar1;
  FPCGObjectSingleOverride *pFVar2;
  FPCGObjectSingleOverride *local_res8;
  
  local_res8 = this;
  pFVar2 = UE::Core::Private::
           DereferenceIfNecessary<FPCGObjectSingleOverride,FPCGObjectSingleOverride_*>(&local_res8);
  uVar1 = (*(code *)this->ObjectOverrideFunction)(pFVar2,param_1,param_2);
  return (bool)uVar1;
}

// GatherAllOverridesToLoad @ 149e57400

void __thiscall
FPCGObjectSingleOverride::GatherAllOverridesToLoad
          (FPCGObjectSingleOverride *this,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1)

{
  IPCGAttributeAccessorKeys *pIVar1;
  IPCGAttributeAccessor *pIVar2;
  <lambda_1> local_res8 [4];
  
  if ((((this->bWillNeedLoading != false) &&
       (pIVar1 = (this->InputKeys).Ptr, pIVar1 != (IPCGAttributeAccessorKeys *)0x0)) &&
      (pIVar2 = (this->ObjectOverrideInputAccessor).Ptr, pIVar2 != (IPCGAttributeAccessor *)0x0)) &&
     (((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0 &&
      (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)))) {
    local_res8[0].Callback.OutObjectsToLoad = (<lambda_1>)(<lambda_1>)param_1;
    PCGMetadataElementCommon::
    ApplyOnAccessorRange<FSoftObjectPath,_PCGMetadataElementCommon::ApplyOnAccessor<FSoftObjectPath,_FPCGObjectSingleOverride::GatherAllOverridesToLoad_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
              (pIVar1,pIVar2,local_res8,StrictType,0x100,-1);
  }
  return;
}

// Initialize @ 149e75ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGObjectSingleOverride::Initialize
          (FPCGObjectSingleOverride *this,FPCGAttributePropertySelector *param_1,FString *param_2,
          UStruct *param_3,UPCGData *param_4,FPCGContext *param_5,bool param_6)

{
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> *pTVar1;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *pTVar2;
  ushort uVar3;
  ushort uVar4;
  IPCGAttributeAccessorKeys *pIVar5;
  IPCGAttributeAccessor *pIVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FPCGModule *pFVar11;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar12;
  FString *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FName *pFVar16;
  FProperty *pFVar17;
  ulonglong uVar18;
  FText *pFVar19;
  code *pcVar20;
  IPCGAttributeAccessor *pIVar21;
  int iVar22;
  undefined1 auVar23 [8];
  FString *pFVar24;
  ulonglong uVar25;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_280;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> local_268;
  undefined1 local_258 [8];
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> local_250;
  FName local_248;
  undefined1 local_240 [16];
  FString *local_230;
  undefined1 local_228 [16];
  undefined4 local_218;
  atomic<int> aStack_214;
  int local_210;
  int iStack_20c;
  undefined4 local_208;
  FString *local_200;
  pmf_15f13c7d local_1f8;
  undefined1 local_1f0;
  FProperty *local_1e8;
  undefined8 local_1e0;
  FName local_1d8;
  undefined8 local_1d0;
  UPCGData *local_1c8;
  undefined1 local_1c0 [72];
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  UPCGData **local_b8;
  FPCGAttributePropertySelector *pFStack_b0;
  longlong local_a8;
  FText local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_230 = param_2;
  pFVar11 = FPCGModule::GetPCGModuleChecked();
  local_1c8 = param_4;
  if (param_4 == (UPCGData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    local_258 = (undefined1  [8])0x0;
  }
  else {
    local_1c0._16_8_ = &local_1c8;
    local_1c0[0x20] = 0;
    local_a8 = (ulonglong)(uint7)local_1c0._33_7_ << 8;
    local_1c0._24_8_ = param_1;
    local_b8 = (UPCGData **)local_1c0._16_8_;
    pFStack_b0 = param_1;
    FPCGAttributeAccessorFactory::
    CallOnMethod<UPCGData_const_,_FPCGAttributeAccessorFactory::CreateSimpleConstKeys_::__l2::<lambda_1>_>
              (&pFVar11->AttributeAccessorFactory,(UPCGData *)local_258,(<lambda_1> *)param_4);
  }
  auVar23 = local_258;
  if (this != (FPCGObjectSingleOverride *)local_258) {
    pIVar5 = (this->InputKeys).Ptr;
    (this->InputKeys).Ptr = (IPCGAttributeAccessorKeys *)local_258;
    local_258 = (undefined1  [8])0x0;
    auVar23 = (undefined1  [8])(IPCGAttributeAccessorKeys *)0x0;
    if (pIVar5 != (IPCGAttributeAccessorKeys *)0x0) {
      (**(code **)pIVar5->_padding_)(pIVar5,1);
    }
  }
  if (auVar23 != (undefined1  [8])0x0) {
    (**(code **)((IPCGAttributeAccessorKeys *)auVar23)->_padding_)(auVar23,1);
  }
  TVar12 = PCGAttributeAccessorHelpers::CreateConstAccessor
                     ((UPCGData *)local_1c0,(FPCGAttributePropertySelector *)param_4,
                      SUB81(param_1,0));
  pTVar1 = &this->ObjectOverrideInputAccessor;
  if ((IPCGAttributeAccessor *)pTVar1 != TVar12.Ptr) {
    pIVar21 = pTVar1->Ptr;
    pTVar1->Ptr = (IPCGAttributeAccessor *)(TVar12.Ptr)->_padding_;
    (TVar12.Ptr)->_padding_ = 0;
    if (pIVar21 != (IPCGAttributeAccessor *)0x0) {
      (**(code **)pIVar21->_padding_)(pIVar21,1);
    }
  }
  if ((undefined8 *)local_1c0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1c0._0_8_)(local_1c0._0_8_,1);
  }
  if (pTVar1->Ptr == (IPCGAttributeAccessor *)0x0) {
    pFVar13 = FPCGAttributePropertySelector::ToString(param_1,(FString *)(local_1c0 + 0x38),false);
    FText::FromString(&local_178,pFVar13);
    if ((UPCGMetadata *)local_1c0._56_8_ != (UPCGMetadata *)0x0) {
      FMemory::Free((void *)local_1c0._56_8_);
    }
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_168,L"PCGObjectPropertyOverride",L"OverrideInputInvalid",
                         L"ObjectOverride for input \'{0}\' does not exist or is unsupported. Check the attribute or property selection."
                        );
    pFVar15 = FTextFormat::FTextFormat(&local_88,pFVar14,Default);
    pFVar14 = FText::Format<FText>(&local_98,pFVar15,&local_178);
    PCGLog::LogWarningOnGraph(pFVar14,param_5);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    if (local_168.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    return;
  }
  local_228._8_8_ = (UPCGMetadata *)0x0;
  local_228._0_8_ = &___7FPCGAttributePropertySelector__6B_;
  local_218._0_1_ = false;
  local_218._1_1_ = (atomic<unsigned_char>)0x0;
  local_218._2_2_ = 0;
  aStack_214 = (atomic<int>)0x0;
  local_210 = 0;
  iStack_20c = 0;
  local_208._0_1_ = Index;
  local_208._1_3_ = 0;
  local_200 = (FString *)0x0;
  local_1f8 = (pmf_15f13c7d)0x0;
  local_1f0 = 0;
  FPCGAttributePropertySelector::Update((FPCGAttributePropertySelector *)(local_240 + 0x18),param_2)
  ;
  if (local_1f8._0_4_ == 0) {
    iVar10 = (param_2->Data).ArrayNum;
    iVar22 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar22 = 0;
    }
    pFVar16 = ::FName::FName((FName *)(local_1c0 + 0x28),iVar22,
                             (wchar_t *)(param_2->Data).AllocatorInstance.Data,FNAME_Add);
    pFVar17 = UStruct::FindPropertyByName(param_3,*pFVar16);
    if (pFVar17 != (FProperty *)0x0) {
      PCGAttributeAccessorHelpers::
      DispatchPropertyTypes<_PCGAttributeAccessorHelpers::CreatePropertyAccessor_::__l2::<lambda_1>_>
                ((FProperty *)(local_258 + 0x18),(<lambda_1> *)pFVar17);
      pTVar2 = &this->ObjectOverrideOutputAccessor;
      if (pTVar2 != (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *)
                    (local_258 + 0x18)) {
        pIVar21 = pTVar2->Ptr;
        pTVar2->Ptr = (IPCGAttributeAccessor *)local_240._0_8_;
        local_240._0_8_ = (IPCGAttributeAccessor *)0x0;
        if (pIVar21 != (IPCGAttributeAccessor *)0x0) {
          (**(code **)pIVar21->_padding_)(pIVar21,1);
        }
      }
      if ((IPCGAttributeAccessor *)local_240._0_8_ != (IPCGAttributeAccessor *)0x0) {
        (**(code **)((IPCGAttributeAccessor *)local_240._0_8_)->_padding_)(local_240._0_8_,1);
      }
      local_1e8 = (FProperty *)0x0;
      local_1e0 = 0;
      bVar8 = (bool)(**(code **)(pFVar17->_padding_ + 0x170))(pFVar17,&local_1e8,1);
      this->bWillNeedLoading = bVar8;
      if (local_1e8 != (FProperty *)0x0) {
        FMemory::Free(local_1e8);
      }
    }
  }
  else {
    uVar9 = local_1f8._0_4_ + 1;
    local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_280.ArrayNum = 0;
    local_280.ArrayMax = 0;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    iVar10 = 0;
    if (0 < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar9,&local_280.AllocatorInstance,0,&local_280.ArrayMax);
      iVar10 = local_280.ArrayNum;
    }
    local_250.Ptr = (IPCGAttributeAccessor *)CONCAT44(local_210,aStack_214);
    if ((local_280.AllocatorInstance.Data <= (FScriptContainerElement *)(local_258 + 8)) &&
       ((FScriptContainerElement *)(local_258 + 8) <
        local_280.AllocatorInstance.Data + (longlong)local_280.ArrayMax * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      iVar10 = local_280.ArrayNum;
    }
    if (iVar10 == local_280.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_280.AllocatorInstance,&local_280.ArrayMax);
    }
    local_280.ArrayNum = iVar10 + 1;
    *(IPCGAttributeAccessor **)(local_280.AllocatorInstance.Data + (longlong)iVar10 * 8) =
         local_250.Ptr;
    uVar7 = local_1f8._0_4_;
    uVar18 = (ulonglong)(int)local_1f8._0_4_;
    pFVar24 = local_200 + uVar18;
    pFVar13 = local_200;
    while( true ) {
      if ((int)uVar18 != uVar7) {
        local_288[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_288);
      }
      if (pFVar13 == pFVar24) break;
      iVar22 = (pFVar13->Data).ArrayNum;
      iVar10 = iVar22 + -1;
      if (iVar22 == 0) {
        iVar10 = 0;
      }
      pFVar16 = ::FName::FName((FName *)(local_1c0 + 0x30),iVar10,
                               (wchar_t *)(pFVar13->Data).AllocatorInstance.Data,FNAME_Add);
      local_248 = *pFVar16;
      if (((local_280.AllocatorInstance.Data <= (FScriptContainerElement *)(local_258 + 0x10)) &&
          ((FScriptContainerElement *)(local_258 + 0x10) <
           local_280.AllocatorInstance.Data + (longlong)local_280.ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      iVar10 = local_280.ArrayNum;
      if (local_280.ArrayNum == local_280.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_280.AllocatorInstance,&local_280.ArrayMax);
      }
      pFVar13 = pFVar13 + 1;
      local_280.ArrayNum = iVar10 + 1;
      *(FName *)(local_280.AllocatorInstance.Data + (longlong)iVar10 * 8) = local_248;
      uVar18 = (ulonglong)local_1f8 & 0xffffffff;
    }
    pIVar21 = (IPCGAttributeAccessor *)0x0;
    local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ArrayNum = 0;
    local_268.ArrayMax = 0;
    PCGAttributeAccessorHelpers::GetPropertyChain(&local_280,param_3,&local_268);
    if (local_268.ArrayNum != 0) {
      local_1d8.ComparisonIndex.Value = 0;
      local_1d8.Number = 0;
      local_1d0 = 0;
      uVar9 = 0;
      if ((int)(local_268.ArrayNum - 1U) < local_268.ArrayNum) {
        uVar9 = ~(local_268.ArrayNum - 1U) >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
      }
      bVar8 = (bool)(**(code **)(**(longlong **)
                                   (local_268.AllocatorInstance.Data +
                                   (longlong)(local_268.ArrayNum + -1) * 8) + 0x170))
                              (*(longlong **)
                                (local_268.AllocatorInstance.Data +
                                (longlong)(local_268.ArrayNum + -1) * 8),&local_1d8,1);
      this->bWillNeedLoading = bVar8;
      if (local_268.ArrayNum != 0) {
        local_1c0._8_8_ = &local_268;
        uVar9 = 0;
        if ((int)(local_268.ArrayNum - 1U) < local_268.ArrayNum) {
          uVar9 = ~(local_268.ArrayNum - 1U) >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
        }
        PCGAttributeAccessorHelpers::
        DispatchPropertyTypes<_PCGAttributeAccessorHelpers::CreatePropertyChainAccessor_::__l2::<lambda_1>_>
                  ((FProperty *)(local_240 + 8),
                   *(<lambda_1> **)
                    (local_268.AllocatorInstance.Data + (longlong)(local_268.ArrayNum + -1) * 8));
        pIVar21 = (IPCGAttributeAccessor *)local_240._8_8_;
      }
      pTVar2 = &this->ObjectOverrideOutputAccessor;
      if (pTVar2 != (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *)
                    (local_240 + 8)) {
        pIVar6 = pTVar2->Ptr;
        pTVar2->Ptr = pIVar21;
        pIVar21 = pIVar6;
      }
      if (pIVar21 != (IPCGAttributeAccessor *)0x0) {
        (**(code **)pIVar21->_padding_)(pIVar21,1);
      }
      if (local_1d8 != (FName)0x0) {
        FMemory::Free((void *)local_1d8);
      }
    }
    if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.AllocatorInstance.Data);
    }
    param_2 = local_230;
    if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.AllocatorInstance.Data);
      param_2 = local_230;
    }
  }
  pIVar21 = (this->ObjectOverrideOutputAccessor).Ptr;
  if (pIVar21 == (IPCGAttributeAccessor *)0x0) {
    pFVar14 = FText::FromString(&local_78,param_2);
    pFVar19 = FText::AsLocalizable_Advanced_LocText
                        (&local_148,L"PCGObjectPropertyOverride",L"OverrideOutputInvalid",
                         L"ObjectOverride for object property \'{0}\' is invalid or unsupported. Check the attribute or property selection."
                        );
    pFVar15 = FTextFormat::FTextFormat(&local_68,pFVar19,Default);
    pFVar14 = FText::Format<FText>(&local_158,pFVar15,pFVar14);
    PCGLog::LogWarningOnGraph(pFVar14,param_5);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    goto LAB_149e764ad;
  }
  uVar3 = pIVar21->UnderlyingType;
  uVar4 = ((this->ObjectOverrideInputAccessor).Ptr)->UnderlyingType;
  if ((0xe < uVar4) || (0xe < uVar3)) {
    if ((uVar3 < 0xf) && (uVar18 = (ulonglong)uVar3, uVar25 = (ulonglong)uVar4, uVar4 < 0xf))
    goto LAB_149e76251;
LAB_149e76344:
    pFVar13 = PCG::Private::GetTypeName(&local_138,uVar3);
    FText::FromString(&local_108,pFVar13);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    pFVar13 = PCG::Private::GetTypeName
                        (&local_128,((this->ObjectOverrideInputAccessor).Ptr)->UnderlyingType);
    FText::FromString(&local_f8,pFVar13);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    pFVar14 = FText::FromString(&local_58,param_2);
    pFVar13 = FPCGAttributePropertySelector::ToString(param_1,&local_118,false);
    FText::FromString(&local_e8,pFVar13);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    pFVar19 = FText::AsLocalizable_Advanced_LocText
                        (&local_c8,L"PCGObjectPropertyOverride",L"TypesIncompatible",
                         L"ObjectOverride cannot set input \'{0}\' to output \'{1}\'. Cannot convert type \'{2}\' to type \'{3}\'. Will be skipped."
                        );
    pFVar15 = FTextFormat::FTextFormat(&local_48,pFVar19,Default);
    pFVar14 = FText::Format<FText,FText,FText,FText>
                        (&local_d8,pFVar15,&local_e8,pFVar14,&local_f8,&local_108);
    PCGLog::LogWarningOnGraph(pFVar14,param_5);
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
    pIVar21 = (this->ObjectOverrideInputAccessor).Ptr;
    if (pIVar21 != (IPCGAttributeAccessor *)0x0) {
      (this->ObjectOverrideInputAccessor).Ptr = (IPCGAttributeAccessor *)0x0;
      (**(code **)pIVar21->_padding_)(pIVar21,1);
    }
    pIVar21 = (this->ObjectOverrideOutputAccessor).Ptr;
    if (pIVar21 != (IPCGAttributeAccessor *)0x0) {
      (this->ObjectOverrideOutputAccessor).Ptr = (IPCGAttributeAccessor *)0x0;
      (**(code **)pIVar21->_padding_)(pIVar21,1);
    }
    goto LAB_149e764ad;
  }
  uVar25 = (ulonglong)(uint)uVar4;
  uVar18 = (ulonglong)(uint)uVar3;
  if (PCG::Private::BroadcastableTypes.Values[uVar4][uVar3] == false) {
LAB_149e76251:
    if (PCG::Private::ConstructibleTypes.Values[uVar18][uVar25] == false) goto LAB_149e76344;
  }
  switch(pIVar21->UnderlyingType) {
  case 0:
    pcVar20 = ApplyImpl<float>;
    break;
  case 1:
    pcVar20 = ApplyImpl<double>;
    break;
  case 2:
    pcVar20 = ApplyImpl<int>;
    break;
  case 3:
    pcVar20 = ApplyImpl<__int64>;
    break;
  case 4:
    pcVar20 = ApplyImpl<UE::Math::TVector2<double>_>;
    break;
  case 5:
    pcVar20 = ApplyImpl<UE::Math::TVector<double>_>;
    break;
  case 6:
    pcVar20 = ApplyImpl<UE::Math::TVector4<double>_>;
    break;
  case 7:
    pcVar20 = ApplyImpl<UE::Math::TQuat<double>_>;
    break;
  case 8:
    pcVar20 = ApplyImpl<UE::Math::TTransform<double>_>;
    break;
  case 9:
    pcVar20 = ApplyImpl<FString>;
    break;
  case 10:
    pcVar20 = ApplyImpl<bool>;
    break;
  case 0xb:
    pcVar20 = ApplyImpl<UE::Math::TRotator<double>_>;
    break;
  case 0xc:
    pcVar20 = ApplyImpl<FName>;
    break;
  case 0xd:
    pcVar20 = ApplyImpl<FSoftObjectPath>;
    break;
  case 0xe:
    pcVar20 = ApplyImpl<FSoftClassPath>;
    break;
  default:
    goto switchD_149e76280_default;
  }
  this->ObjectOverrideFunction = (pmf_15f13c7d)pcVar20;
switchD_149e76280_default:
  (this->ObjectOverrideInputSelector).Selection = param_1->Selection;
  (this->ObjectOverrideInputSelector).DomainName = param_1->DomainName;
  (this->ObjectOverrideInputSelector).AttributeName = param_1->AttributeName;
  (this->ObjectOverrideInputSelector).PropertyName = param_1->PropertyName;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ObjectOverrideInputSelector).ExtraNames,&param_1->ExtraNames);
  (this->ObjectOverrideInputSelector).ExtraProperty = param_1->ExtraProperty;
LAB_149e764ad:
  DestructItems<FString,int>(local_200,local_1f8._0_4_);
  if (local_200 != (FString *)0x0) {
    FMemory::Free(local_200);
  }
  return;
}

// IsValid @ 149e781b0

bool __thiscall FPCGObjectSingleOverride::IsValid(FPCGObjectSingleOverride *this)

{
  if (((((this->InputKeys).Ptr != (IPCGAttributeAccessorKeys *)0x0) &&
       ((this->ObjectOverrideInputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
      ((this->ObjectOverrideOutputAccessor).Ptr != (IPCGAttributeAccessor *)0x0)) &&
     (this->ObjectOverrideFunction != (pmf_15f13c7d)0x0)) {
    return true;
  }
  return false;
}

// PostApply @ 149e7a2b0

void __thiscall FPCGObjectSingleOverride::PostApply(FPCGObjectSingleOverride *this,UObject *param_1)

{
  return;
}

// PreApply @ 149e7a4b0

void __thiscall FPCGObjectSingleOverride::PreApply(FPCGObjectSingleOverride *this,UObject *param_1)

{
  return;
}

