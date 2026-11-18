// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// BuildNetSerializerConfig @ 1441ffdc0

FNetSerializerConfig * __thiscall
UE::Net::Private::FEnumPropertyNetSerializerInfo::BuildNetSerializerConfig
          (FEnumPropertyNetSerializerInfo *this,void *param_1,FProperty *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FNetSerializerConfig *pFVar5;
  
  if (((param_2 == (FProperty *)0x0) ||
      ((*(ulonglong *)(param_2->_padding_ + 0x18) & 0x1000000000000) == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx"),
     param_2 = (FProperty *)0x0, bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNetSerializerConfig *)(*pcVar3)();
    return pFVar5;
  }
  lVar2 = param_2[1]._padding_;
  if (lVar2 != 0) {
    if ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) != 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *(undefined4 *)((longlong)param_1 + 0x13) = 0;
      *(undefined1 *)((longlong)param_1 + 0x17) = 0;
      *(undefined4 *)((longlong)param_1 + 8) = 0;
      *(undefined ***)param_1 = &___7FEnumUint8NetSerializerConfig__6B_;
      *(undefined2 *)((longlong)param_1 + 0x10) = 0;
      *(undefined1 *)((longlong)param_1 + 0x12) = 0;
      *(undefined8 *)((longlong)param_1 + 0x18) = 0;
      InitEnumNetSerializerConfig(param_1,(UEnum *)param_2[1]._padding_);
      return param_1;
    }
    if (lVar2 != 0) {
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar1 = *(uint *)(lVar2 + 0x18);
      if ((uVar1 >> 0x12 & 1) != 0) {
        *(undefined8 *)((longlong)param_1 + 8) = 0;
        *(undefined2 *)((longlong)param_1 + 0x15) = 0;
        *(undefined1 *)((longlong)param_1 + 0x17) = 0;
        *(undefined ***)param_1 = &___7FEnumUint16NetSerializerConfig__6B_;
        *(undefined4 *)((longlong)param_1 + 0x10) = 0;
        *(undefined1 *)((longlong)param_1 + 0x14) = 0;
        *(undefined8 *)((longlong)param_1 + 0x18) = 0;
        InitEnumNetSerializerConfig(param_1,(UEnum *)param_2[1]._padding_);
        return param_1;
      }
      if ((uVar1 >> 0xb & 1) != 0) {
        *(undefined8 *)((longlong)param_1 + 8) = 0;
        *(undefined4 *)((longlong)param_1 + 0x19) = 0;
        *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
        *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
        *(undefined ***)param_1 = &___7FEnumUint32NetSerializerConfig__6B_;
        *(undefined8 *)((longlong)param_1 + 0x10) = 0;
        *(undefined1 *)((longlong)param_1 + 0x18) = 0;
        *(undefined8 *)((longlong)param_1 + 0x20) = 0;
        InitEnumNetSerializerConfig(param_1,(UEnum *)param_2[1]._padding_);
        return param_1;
      }
      if ((uVar1 >> 9 & 1) != 0) {
        *(undefined8 *)((longlong)param_1 + 8) = 0;
        *(undefined4 *)((longlong)param_1 + 0x21) = 0;
        *(undefined2 *)((longlong)param_1 + 0x25) = 0;
        *(undefined1 *)((longlong)param_1 + 0x27) = 0;
        *(undefined ***)param_1 = &___7FEnumUint64NetSerializerConfig__6B_;
        *(undefined8 *)((longlong)param_1 + 0x10) = 0;
        *(undefined8 *)((longlong)param_1 + 0x18) = 0;
        *(undefined1 *)((longlong)param_1 + 0x20) = 0;
        *(undefined8 *)((longlong)param_1 + 0x28) = 0;
        InitEnumNetSerializerConfig(param_1,(UEnum *)param_2[1]._padding_);
        return param_1;
      }
      if ((*(byte *)(lVar2 + 0x18) & 2) != 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        *(undefined4 *)((longlong)param_1 + 0x13) = 0;
        *(undefined1 *)((longlong)param_1 + 0x17) = 0;
        *(undefined4 *)((longlong)param_1 + 8) = 0;
        *(undefined ***)param_1 = &___7FEnumInt8NetSerializerConfig__6B_;
        *(undefined2 *)((longlong)param_1 + 0x10) = 0;
        *(undefined1 *)((longlong)param_1 + 0x12) = 0;
        *(undefined8 *)((longlong)param_1 + 0x18) = 0;
        InitEnumNetSerializerConfig(param_1,(UEnum *)param_2[1]._padding_);
        return param_1;
      }
      if ((int)uVar1 < 0) {
        *(undefined8 *)((longlong)param_1 + 8) = 0;
        *(undefined2 *)((longlong)param_1 + 0x15) = 0;
        *(undefined1 *)((longlong)param_1 + 0x17) = 0;
        *(undefined ***)param_1 = &___7FEnumInt16NetSerializerConfig__6B_;
        *(undefined4 *)((longlong)param_1 + 0x10) = 0;
        *(undefined1 *)((longlong)param_1 + 0x14) = 0;
        *(undefined8 *)((longlong)param_1 + 0x18) = 0;
        InitEnumNetSerializerConfig(param_1,(UEnum *)param_2[1]._padding_);
        return param_1;
      }
      if ((*(byte *)(lVar2 + 0x18) & 0x80) != 0) {
        *(undefined8 *)((longlong)param_1 + 8) = 0;
        *(undefined4 *)((longlong)param_1 + 0x19) = 0;
        *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
        *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
        *(undefined ***)param_1 = &___7FEnumInt32NetSerializerConfig__6B_;
        *(undefined8 *)((longlong)param_1 + 0x10) = 0;
        *(undefined1 *)((longlong)param_1 + 0x18) = 0;
        *(undefined8 *)((longlong)param_1 + 0x20) = 0;
        InitEnumNetSerializerConfig(param_1,(UEnum *)param_2[1]._padding_);
        return param_1;
      }
      if ((uVar1 >> 0x16 & 1) != 0) {
        *(undefined8 *)((longlong)param_1 + 8) = 0;
        *(undefined4 *)((longlong)param_1 + 0x21) = 0;
        *(undefined2 *)((longlong)param_1 + 0x25) = 0;
        *(undefined1 *)((longlong)param_1 + 0x27) = 0;
        *(undefined ***)param_1 = &___7FEnumInt64NetSerializerConfig__6B_;
        *(undefined8 *)((longlong)param_1 + 0x10) = 0;
        *(undefined8 *)((longlong)param_1 + 0x18) = 0;
        *(undefined1 *)((longlong)param_1 + 0x20) = 0;
        *(undefined8 *)((longlong)param_1 + 0x28) = 0;
        InitEnumNetSerializerConfig(param_1,(UEnum *)param_2[1]._padding_);
        return param_1;
      }
    }
  }
  return (FNetSerializerConfig *)0x0;
}

// CanUseDefaultConfig @ 144201020

bool __thiscall
UE::Net::Private::FEnumPropertyNetSerializerInfo::CanUseDefaultConfig
          (FEnumPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return false;
}

// GetNetSerializer @ 14420ae20

FNetSerializer * __thiscall
UE::Net::Private::FEnumPropertyNetSerializerInfo::GetNetSerializer
          (FEnumPropertyNetSerializerInfo *this,FProperty *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FNetSerializer *pFVar5;
  longlong lVar6;
  
  if ((param_1 == (FProperty *)0x0) ||
     ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) == 0)) {
    param_1 = (FProperty *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FNetSerializer *)(*pcVar3)();
      return pFVar5;
    }
  }
  lVar2 = param_1[1]._padding_;
  if (lVar2 != 0) {
    if ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x18) & 0x40) != 0) {
      return this->Serializers[0];
    }
    if (lVar2 != 0) {
      uVar1 = *(uint *)(*(longlong *)(lVar2 + 8) + 0x18);
      if ((uVar1 >> 0x12 & 1) != 0) {
        return this->Serializers[1];
      }
      if ((uVar1 >> 0xb & 1) != 0) {
        return this->Serializers[2];
      }
      lVar2 = *(longlong *)(lVar2 + 8);
      if ((*(uint *)(lVar2 + 0x18) >> 9 & 1) != 0) {
        return this->Serializers[3];
      }
      if ((*(byte *)(lVar2 + 0x18) & 2) != 0) {
        return this->Serializers[4];
      }
      if ((int)*(uint *)(lVar2 + 0x18) < 0) {
        return this->Serializers[5];
      }
      if ((*(byte *)(lVar2 + 0x18) & 0x80) != 0) {
        return this->Serializers[6];
      }
      lVar6 = 0x48;
      if ((*(uint *)(lVar2 + 0x18) >> 0x16 & 1) != 0) goto LAB_14420af6e;
    }
  }
  lVar6 = 8;
LAB_14420af6e:
  return *(FNetSerializer **)((longlong)this->Serializers + lVar6 + -0x10);
}

// GetPropertyTypeClass @ 14420ce80

FFieldClass * __thiscall
UE::Net::Private::FEnumPropertyNetSerializerInfo::GetPropertyTypeClass
          (FEnumPropertyNetSerializerInfo *this)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FEnumProperty",0x1000000000000,
                 CASTCLASS_FEnumProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,
                 FEnumProperty::Construct);
      atexit(`FEnumProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// IsSupported @ 144211ef0

bool __thiscall
UE::Net::Private::FEnumPropertyNetSerializerInfo::IsSupported
          (FEnumPropertyNetSerializerInfo *this,FProperty *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((param_1 == (FProperty *)0x0) ||
     ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) == 0)) {
    param_1 = (FProperty *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar1 = param_1[1]._padding_;
  if (lVar1 != 0) {
    if ((*(byte *)(*(longlong *)(lVar1 + 8) + 0x18) & 0x40) != 0) {
      return true;
    }
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 8);
      if ((*(uint *)(lVar1 + 0x18) >> 0x12 & 1) != 0) {
        return true;
      }
      if ((*(uint *)(lVar1 + 0x18) >> 0xb & 1) != 0) {
        return true;
      }
      if ((*(uint *)(lVar1 + 0x18) >> 9 & 1) != 0) {
        return true;
      }
      if ((*(byte *)(lVar1 + 0x18) & 2) != 0) {
        return true;
      }
      if ((int)*(uint *)(lVar1 + 0x18) < 0) {
        return true;
      }
      if ((*(byte *)(lVar1 + 0x18) & 0x80) != 0) {
        return true;
      }
      if ((*(uint *)(lVar1 + 0x18) >> 0x16 & 1) != 0) {
        return true;
      }
    }
  }
  return false;
}

