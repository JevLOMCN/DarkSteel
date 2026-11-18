// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 10

// StaticStruct @ 1441f2080

UScriptStruct * __cdecl FIrisFastArraySerializer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIrisFastArraySerializer,(UObject *)pUVar1,
                         L"IrisFastArraySerializer");
  }
  return Z_Registration_Info_UScriptStruct_FIrisFastArraySerializer.OuterSingleton;
}

// FIrisFastArraySerializer @ 1441f86f0

FIrisFastArraySerializer * __thiscall
FIrisFastArraySerializer::FIrisFastArraySerializer
          (FIrisFastArraySerializer *this,FIrisFastArraySerializer *param_1)

{
  FReplicationStateHeader *pFVar1;
  uint *puVar2;
  uint uVar3;
  
  FFastArraySerializer::FFastArraySerializer
            ((FFastArraySerializer *)this,(FFastArraySerializer *)param_1);
  puVar2 = this->ChangeMaskStorage;
  pFVar1 = &this->ReplicationStateHeader;
  pFVar1->NetHandleId = 0;
  pFVar1->bStateIsDirty = 0;
  pFVar1->bInitStateIsDirty = 0;
  if (puVar2 != (uint *)&this->field_0x11c) {
    do {
      uVar3 = 0;
      if (1 < (ulonglong)((-0x10c - (longlong)this) + (longlong)puVar2 >> 2)) {
        uVar3 = 0xffffffff;
      }
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
    } while (puVar2 != (uint *)&this->field_0x11c);
  }
  return this;
}

// FIrisFastArraySerializer @ 1441f8760

FIrisFastArraySerializer * __thiscall
FIrisFastArraySerializer::FIrisFastArraySerializer
          (FIrisFastArraySerializer *this,FIrisFastArraySerializer *param_1)

{
  FReplicationStateHeader *pFVar1;
  uint *puVar2;
  uint uVar3;
  
  FFastArraySerializer::FFastArraySerializer
            ((FFastArraySerializer *)this,(FFastArraySerializer *)param_1);
  puVar2 = this->ChangeMaskStorage;
  pFVar1 = &this->ReplicationStateHeader;
  pFVar1->NetHandleId = 0;
  pFVar1->bStateIsDirty = 0;
  pFVar1->bInitStateIsDirty = 0;
  if (puVar2 != (uint *)&this->field_0x11c) {
    do {
      uVar3 = 0;
      if (1 < (ulonglong)((-0x10c - (longlong)this) + (longlong)puVar2 >> 2)) {
        uVar3 = 0xffffffff;
      }
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
    } while (puVar2 != (uint *)&this->field_0x11c);
  }
  return this;
}

// FIrisFastArraySerializer @ 1441f87d0

FIrisFastArraySerializer * __thiscall
FIrisFastArraySerializer::FIrisFastArraySerializer(FIrisFastArraySerializer *this)

{
  FReplicationStateHeader *pFVar1;
  uint *puVar2;
  uint uVar3;
  
  FFastArraySerializer::FFastArraySerializer((FFastArraySerializer *)this);
  puVar2 = this->ChangeMaskStorage;
  pFVar1 = &this->ReplicationStateHeader;
  pFVar1->NetHandleId = 0;
  pFVar1->bStateIsDirty = 0;
  pFVar1->bInitStateIsDirty = 0;
  if (puVar2 != (uint *)&this->field_0x11c) {
    do {
      uVar3 = 0;
      if (1 < (ulonglong)((-0x10c - (longlong)this) + (longlong)puVar2 >> 2)) {
        uVar3 = 0xffffffff;
      }
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
    } while (puVar2 != (uint *)&this->field_0x11c);
  }
  return this;
}

// operator= @ 1441fa460

FIrisFastArraySerializer * __thiscall
FIrisFastArraySerializer::operator=
          (FIrisFastArraySerializer *this,FIrisFastArraySerializer *param_1)

{
  if (this != param_1) {
    FFastArraySerializer::operator=((FFastArraySerializer *)this,(FFastArraySerializer *)param_1);
    if ((this->ReplicationStateHeader).NetHandleId != 0) {
      InternalMarkAllItemsChanged(this);
    }
  }
  return this;
}

// operator= @ 1441fa4a0

FIrisFastArraySerializer * __thiscall
FIrisFastArraySerializer::operator=
          (FIrisFastArraySerializer *this,FIrisFastArraySerializer *param_1)

{
  if (this != param_1) {
    FFastArraySerializer::operator=((FFastArraySerializer *)this,(FFastArraySerializer *)param_1);
    if ((this->ReplicationStateHeader).NetHandleId != 0) {
      InternalMarkAllItemsChanged(this);
    }
  }
  return this;
}

// InitChangeMask @ 14420f8c0

void __thiscall FIrisFastArraySerializer::InitChangeMask(FIrisFastArraySerializer *this)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = this->ChangeMaskStorage;
  if (puVar1 != (uint *)&this->field_0x11c) {
    do {
      uVar2 = 0;
      if (1 < (ulonglong)((-0x10c - (longlong)this) + (longlong)puVar1 >> 2)) {
        uVar2 = 0xffffffff;
      }
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
    } while (puVar1 != (uint *)&this->field_0x11c);
  }
  return;
}

// InternalMarkAllItemsChanged @ 144211330

void __thiscall
FIrisFastArraySerializer::InternalMarkAllItemsChanged(FIrisFastArraySerializer *this)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = this->ChangeMaskStorage;
  if (puVar1 == (uint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x5a6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*puVar1 & 1) == 0) {
    (&this->ReplicationStateHeader)->bStateIsDirty = 1;
  }
  puVar1[0] = 0xffffffff;
  puVar1[1] = 0xffffffff;
  return;
}

// InternalMarkArrayAsDirty @ 1442113a0

void __thiscall FIrisFastArraySerializer::InternalMarkArrayAsDirty(FIrisFastArraySerializer *this)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = this->ChangeMaskStorage;
  if (puVar1 == (uint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x5a6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*puVar1 & 1) == 0) {
    *puVar1 = *puVar1 | 1;
    (&this->ReplicationStateHeader)->bStateIsDirty = 1;
  }
  return;
}

// InternalMarkItemChanged @ 144211410

void __thiscall
FIrisFastArraySerializer::InternalMarkItemChanged(FIrisFastArraySerializer *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  puVar1 = this->ChangeMaskStorage;
  if (puVar1 == (uint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x5a6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = param_1 % 0x3f + 1;
  if (0x3f < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1[uVar4 >> 5] = puVar1[uVar4 >> 5] | 1 << (uVar4 & 0x1f);
  if ((*puVar1 & 1) == 0) {
    *puVar1 = *puVar1 | 1;
    (&this->ReplicationStateHeader)->bStateIsDirty = 1;
  }
  return;
}

