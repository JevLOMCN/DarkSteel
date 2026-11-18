// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 8

// Validate @ 144317db0

bool __cdecl
UE::Net::Private::FEnumNetSerializerBase<signed_char,FEnumInt8NetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  
  lVar2 = param_2->_padding_;
  if (*(byte *)(lVar2 + 0x12) < 9) {
    cVar1 = *(char *)param_2->Source;
    cVar3 = *(char *)(lVar2 + 0x11);
    if (cVar1 < *(char *)(lVar2 + 0x11)) {
      cVar3 = cVar1;
    }
    cVar5 = *(char *)(lVar2 + 0x10);
    if (*(char *)(lVar2 + 0x10) < cVar3) {
      cVar5 = cVar3;
    }
    if (cVar1 == cVar5) {
      if (*(UEnum **)(lVar2 + 0x18) != (UEnum *)0x0) {
        bVar4 = UEnum::IsValidEnumValue(*(UEnum **)(lVar2 + 0x18),(longlong)cVar1);
        return bVar4;
      }
      return true;
    }
  }
  return false;
}

// Validate @ 144317e00

bool __cdecl
UE::Net::Private::FEnumNetSerializerBase<unsigned_char,FEnumUint8NetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  ulonglong *puVar10;
  byte bVar11;
  uint uVar12;
  longlong lVar13;
  TArrayView<__int64_const_,int> TStack_28;
  
  lVar4 = param_2->_padding_;
  if (*(byte *)(lVar4 + 0x12) < 9) {
    bVar1 = *(byte *)param_2->Source;
    bVar8 = *(byte *)(lVar4 + 0x11);
    if (bVar1 < *(byte *)(lVar4 + 0x11)) {
      bVar8 = bVar1;
    }
    bVar11 = *(byte *)(lVar4 + 0x10);
    if (*(byte *)(lVar4 + 0x10) < bVar8) {
      bVar11 = bVar8;
    }
    if (bVar1 == bVar11) {
      lVar4 = *(longlong *)(lVar4 + 0x18);
      if (lVar4 == 0) {
        return true;
      }
      iVar2 = *(int *)(lVar4 + 0x50);
      uVar12 = 0;
      if (0 < (longlong)iVar2) {
        lVar13 = 0;
        do {
          if ((((int)uVar12 < 0) || (*(int *)(lVar4 + 0x50) <= (int)uVar12)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xd78,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar3 = *(int *)(lVar4 + 0x50);
          if ((iVar3 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar9 = 0;
          if ((int)uVar12 < iVar3) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          TStack_28.DataPtr = (long64 *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffe);
          TStack_28.ArrayNum = *(int *)(lVar4 + 0x50);
          if ((TStack_28.ArrayNum < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          puVar10 = (ulonglong *)TArrayView<__int64_const_,int>::operator[](&TStack_28,uVar12);
          if (*puVar10 == (ulonglong)bVar1) {
            return true;
          }
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar2);
      }
      return false;
    }
  }
  return false;
}

// Validate @ 144317e50

bool __cdecl
UE::Net::Private::FEnumNetSerializerBase<short,FEnumInt16NetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  short sVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  long64 *plVar10;
  short sVar11;
  uint uVar12;
  longlong lVar13;
  TArrayView<__int64_const_,int> TStack_28;
  
  lVar4 = param_2->_padding_;
  if (*(byte *)(lVar4 + 0x14) < 0x11) {
    sVar1 = *(short *)param_2->Source;
    sVar11 = *(short *)(lVar4 + 0x12);
    if (sVar1 < *(short *)(lVar4 + 0x12)) {
      sVar11 = sVar1;
    }
    sVar6 = *(short *)(lVar4 + 0x10);
    if (*(short *)(lVar4 + 0x10) < sVar11) {
      sVar6 = sVar11;
    }
    if (sVar1 == sVar6) {
      lVar4 = *(longlong *)(lVar4 + 0x18);
      if (lVar4 == 0) {
        return true;
      }
      iVar2 = *(int *)(lVar4 + 0x50);
      uVar12 = 0;
      if (0 < (longlong)iVar2) {
        lVar13 = 0;
        do {
          if ((((int)uVar12 < 0) || (*(int *)(lVar4 + 0x50) <= (int)uVar12)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xd78,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          iVar3 = *(int *)(lVar4 + 0x50);
          if ((iVar3 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          uVar9 = 0;
          if ((int)uVar12 < iVar3) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          TStack_28.DataPtr = (long64 *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffe);
          TStack_28.ArrayNum = *(int *)(lVar4 + 0x50);
          if ((TStack_28.ArrayNum < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          plVar10 = TArrayView<__int64_const_,int>::operator[](&TStack_28,uVar12);
          if (*plVar10 == (longlong)sVar1) {
            return true;
          }
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar2);
      }
      return false;
    }
  }
  return false;
}

// Validate @ 144317ea0

bool __cdecl
UE::Net::Private::FEnumNetSerializerBase<unsigned_short,FEnumUint16NetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  ushort uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  ulonglong *puVar10;
  ushort uVar11;
  uint uVar12;
  longlong lVar13;
  TArrayView<__int64_const_,int> TStack_28;
  
  lVar4 = param_2->_padding_;
  if (*(byte *)(lVar4 + 0x14) < 0x11) {
    uVar1 = *(ushort *)param_2->Source;
    uVar11 = *(ushort *)(lVar4 + 0x12);
    if (uVar1 < *(ushort *)(lVar4 + 0x12)) {
      uVar11 = uVar1;
    }
    uVar6 = *(ushort *)(lVar4 + 0x10);
    if (*(ushort *)(lVar4 + 0x10) < uVar11) {
      uVar6 = uVar11;
    }
    if (uVar1 == uVar6) {
      lVar4 = *(longlong *)(lVar4 + 0x18);
      if (lVar4 == 0) {
        return true;
      }
      iVar2 = *(int *)(lVar4 + 0x50);
      uVar12 = 0;
      if (0 < (longlong)iVar2) {
        lVar13 = 0;
        do {
          if ((((int)uVar12 < 0) || (*(int *)(lVar4 + 0x50) <= (int)uVar12)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xd78,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          iVar3 = *(int *)(lVar4 + 0x50);
          if ((iVar3 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          uVar9 = 0;
          if ((int)uVar12 < iVar3) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          TStack_28.DataPtr = (long64 *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffe);
          TStack_28.ArrayNum = *(int *)(lVar4 + 0x50);
          if ((TStack_28.ArrayNum < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          puVar10 = (ulonglong *)TArrayView<__int64_const_,int>::operator[](&TStack_28,uVar12);
          if (*puVar10 == (ulonglong)uVar1) {
            return true;
          }
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar2);
      }
      return false;
    }
  }
  return false;
}

// Validate @ 144317ef0

bool __cdecl
UE::Net::Private::FEnumNetSerializerBase<int,FEnumInt32NetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  long64 *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  TArrayView<__int64_const_,int> TStack_28;
  
  lVar3 = param_2->_padding_;
  if (*(byte *)(lVar3 + 0x18) < 0x21) {
    iVar2 = *(int *)param_2->Source;
    iVar9 = *(int *)(lVar3 + 0x14);
    if (iVar2 < *(int *)(lVar3 + 0x14)) {
      iVar9 = iVar2;
    }
    iVar1 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) < iVar9) {
      iVar1 = iVar9;
    }
    if (iVar2 == iVar1) {
      lVar3 = *(longlong *)(lVar3 + 0x20);
      if (lVar3 == 0) {
        return true;
      }
      iVar9 = *(int *)(lVar3 + 0x50);
      uVar10 = 0;
      if (0 < (longlong)iVar9) {
        lVar11 = 0;
        do {
          if ((((int)uVar10 < 0) || (*(int *)(lVar3 + 0x50) <= (int)uVar10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xd78,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar1 = *(int *)(lVar3 + 0x50);
          if ((iVar1 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          uVar7 = 0;
          if ((int)uVar10 < iVar1) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          TStack_28.DataPtr = (long64 *)(*(ulonglong *)(lVar3 + 0x48) & 0xfffffffffffffffe);
          TStack_28.ArrayNum = *(int *)(lVar3 + 0x50);
          if ((TStack_28.ArrayNum < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          plVar8 = TArrayView<__int64_const_,int>::operator[](&TStack_28,uVar10);
          if (*plVar8 == (longlong)iVar2) {
            return true;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar9);
      }
      return false;
    }
  }
  return false;
}

// Validate @ 144317f30

bool __cdecl
UE::Net::Private::FEnumNetSerializerBase<unsigned_int,FEnumUint32NetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong lVar11;
  TArrayView<__int64_const_,int> TStack_28;
  
  lVar4 = param_2->_padding_;
  if (*(byte *)(lVar4 + 0x18) < 0x21) {
    uVar3 = *(uint *)param_2->Source;
    uVar10 = *(uint *)(lVar4 + 0x14);
    if (uVar3 < *(uint *)(lVar4 + 0x14)) {
      uVar10 = uVar3;
    }
    uVar8 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) < uVar10) {
      uVar8 = uVar10;
    }
    if (uVar3 == uVar8) {
      lVar4 = *(longlong *)(lVar4 + 0x20);
      if (lVar4 == 0) {
        return true;
      }
      iVar1 = *(int *)(lVar4 + 0x50);
      uVar10 = 0;
      if (0 < (longlong)iVar1) {
        lVar11 = 0;
        do {
          if ((((int)uVar10 < 0) || (*(int *)(lVar4 + 0x50) <= (int)uVar10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xd78,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar2 = *(int *)(lVar4 + 0x50);
          if ((iVar2 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar8 = 0;
          if ((int)uVar10 < iVar2) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          TStack_28.DataPtr = (long64 *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffe);
          TStack_28.ArrayNum = *(int *)(lVar4 + 0x50);
          if ((TStack_28.ArrayNum < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          puVar9 = (ulonglong *)TArrayView<__int64_const_,int>::operator[](&TStack_28,uVar10);
          if (*puVar9 == (ulonglong)uVar3) {
            return true;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar1);
      }
      return false;
    }
  }
  return false;
}

// Validate @ 144317f70

bool __cdecl
UE::Net::Private::FEnumNetSerializerBase<__int64,FEnumInt64NetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  long64 *plVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  TArrayView<__int64_const_,int> TStack_28;
  
  lVar3 = param_2->_padding_;
  if (*(byte *)(lVar3 + 0x20) < 0x41) {
    lVar4 = *(longlong *)param_2->Source;
    lVar12 = *(longlong *)(lVar3 + 0x18);
    if (lVar4 < *(longlong *)(lVar3 + 0x18)) {
      lVar12 = lVar4;
    }
    lVar10 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) < lVar12) {
      lVar10 = lVar12;
    }
    if (lVar4 == lVar10) {
      lVar3 = *(longlong *)(lVar3 + 0x28);
      if (lVar3 == 0) {
        return true;
      }
      iVar1 = *(int *)(lVar3 + 0x50);
      uVar11 = 0;
      if (0 < (longlong)iVar1) {
        lVar12 = 0;
        do {
          if ((((int)uVar11 < 0) || (*(int *)(lVar3 + 0x50) <= (int)uVar11)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xd78,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar2 = *(int *)(lVar3 + 0x50);
          if ((iVar2 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar8 = 0;
          if ((int)uVar11 < iVar2) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          TStack_28.DataPtr = (long64 *)(*(ulonglong *)(lVar3 + 0x48) & 0xfffffffffffffffe);
          TStack_28.ArrayNum = *(int *)(lVar3 + 0x50);
          if ((TStack_28.ArrayNum < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          plVar9 = TArrayView<__int64_const_,int>::operator[](&TStack_28,uVar11);
          if (*plVar9 == lVar4) {
            return true;
          }
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar1);
      }
      return false;
    }
  }
  return false;
}

// Validate @ 144317fc0

bool __cdecl
UE::Net::Private::FEnumNetSerializerBase<unsigned___int64,FEnumUint64NetSerializerConfig>::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  TArrayView<__int64_const_,int> TStack_28;
  
  lVar3 = param_2->_padding_;
  if (*(byte *)(lVar3 + 0x20) < 0x41) {
    uVar4 = *(ulonglong *)param_2->Source;
    uVar11 = *(ulonglong *)(lVar3 + 0x18);
    if (uVar4 < *(ulonglong *)(lVar3 + 0x18)) {
      uVar11 = uVar4;
    }
    uVar10 = *(ulonglong *)(lVar3 + 0x10);
    if (*(ulonglong *)(lVar3 + 0x10) < uVar11) {
      uVar10 = uVar11;
    }
    if (uVar4 == uVar10) {
      lVar3 = *(longlong *)(lVar3 + 0x28);
      if (lVar3 == 0) {
        return true;
      }
      iVar1 = *(int *)(lVar3 + 0x50);
      uVar12 = 0;
      if (0 < (longlong)iVar1) {
        lVar13 = 0;
        do {
          if ((((int)uVar12 < 0) || (*(int *)(lVar3 + 0x50) <= (int)uVar12)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0xd78,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar2 = *(int *)(lVar3 + 0x50);
          if ((iVar2 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar8 = 0;
          if ((int)uVar12 < iVar2) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          TStack_28.DataPtr = (long64 *)(*(ulonglong *)(lVar3 + 0x48) & 0xfffffffffffffffe);
          TStack_28.ArrayNum = *(int *)(lVar3 + 0x50);
          if ((TStack_28.ArrayNum < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          puVar9 = (ulonglong *)TArrayView<__int64_const_,int>::operator[](&TStack_28,uVar12);
          if (*puVar9 == uVar4) {
            return true;
          }
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar1);
      }
      return false;
    }
  }
  return false;
}

