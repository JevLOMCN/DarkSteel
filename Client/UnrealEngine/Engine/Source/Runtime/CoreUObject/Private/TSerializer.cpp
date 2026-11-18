// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 34

// operator()<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_const_> @ 141e6b6d0

void __thiscall
`FixedTagPrivate::TSerializer<22>::Save'::__l2::<lambda_2>::
operator()<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_const_>
          (void *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  FArchive *this_00;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  uint local_res8 [2];
  
  iVar2 = param_1->ArrayNum;
  puVar3 = *(undefined8 **)this;
  pFVar6 = (param_1->AllocatorInstance).Data;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 4) {
    local_res8[0] = *(uint *)pFVar6;
    this_00 = (FArchive *)*puVar3;
    if ((ulonglong)(*(longlong **)&this_00->field_0x8)[1] < **(longlong **)&this_00->field_0x8 + 4U)
    {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,local_res8);
      }
    }
    else {
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    }
  }
  return;
}

// operator()<TArray<FixedTagPrivate::FMarshalledText,TSizedDefaultAllocator<32>_>_const_> @ 141e6b790

void __thiscall
`FixedTagPrivate::TSerializer<22>::Save'::__l2::<lambda_1>::
operator()<TArray<FixedTagPrivate::FMarshalledText,TSizedDefaultAllocator<32>_>_const_>
          (void *this,TArray<FixedTagPrivate::FMarshalledText,TSizedDefaultAllocator<32>_> *param_1)

{
  FArchive *this_00;
  uint local_res8 [8];
  
  local_res8[0] = param_1->ArrayNum;
  this_00 = (FArchive *)**(undefined8 **)this;
  if (**(longlong **)&this_00->field_0x8 + 4U <= (ulonglong)(*(longlong **)&this_00->field_0x8)[1])
  {
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,local_res8);
  return;
}

// operator()<TArrayView<unsigned_int,int>_> @ 141e6b800

void __thiscall
`FixedTagPrivate::TSerializer<22>::LoadFinalData'::__l5::<lambda_1>::
operator()<TArrayView<unsigned_int,int>_>(void *this,TArrayView<unsigned_int,int> *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  FArchive *this_00;
  uint *puVar3;
  uint *puVar4;
  uint local_res8 [2];
  
  plVar2 = *(longlong **)this;
  puVar4 = param_1->DataPtr;
  if ((*(byte *)(*plVar2 + 0x29) & 2) == 0) {
    puVar1 = puVar4 + (int)*(undefined8 *)&param_1->ArrayNum;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      this_00 = (FArchive *)*plVar2;
      puVar3 = (uint *)**(undefined8 **)&this_00->field_0x8;
      if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar3 + 1) {
        if ((this_00->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_00,local_res8);
        }
      }
      else {
        local_res8[0] = *puVar3;
        **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      }
      *puVar4 = local_res8[0];
    }
  }
  return;
}

// operator()<TArrayView<unsigned_int,int>_> @ 141e6b8b0

void __thiscall
`FixedTagPrivate::TSerializer<18>::Load'::__l8::<lambda_1>::
operator()<TArrayView<unsigned_int,int>_>(void *this,TArrayView<unsigned_int,int> *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  FArchive *this_00;
  uint *puVar3;
  uint *puVar4;
  uint local_res8 [2];
  
  plVar2 = *(longlong **)this;
  puVar4 = param_1->DataPtr;
  if ((*(byte *)(*plVar2 + 0x29) & 2) == 0) {
    puVar1 = puVar4 + (int)*(undefined8 *)&param_1->ArrayNum;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      this_00 = (FArchive *)*plVar2;
      puVar3 = (uint *)**(undefined8 **)&this_00->field_0x8;
      if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar3 + 1) {
        if ((this_00->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_00,local_res8);
        }
      }
      else {
        local_res8[0] = *puVar3;
        **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      }
      *puVar4 = local_res8[0];
    }
  }
  return;
}

// operator()<TArrayView<unsigned_int,int>_> @ 141e6b960

void __thiscall
`FixedTagPrivate::TSerializer<22>::Load'::__l8::<lambda_1>::
operator()<TArrayView<unsigned_int,int>_>(void *this,TArrayView<unsigned_int,int> *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  FArchive *this_00;
  uint *puVar3;
  uint *puVar4;
  uint local_res8 [2];
  
  plVar2 = *(longlong **)this;
  puVar4 = param_1->DataPtr;
  if ((*(byte *)(*plVar2 + 0x29) & 2) == 0) {
    puVar1 = puVar4 + (int)*(undefined8 *)&param_1->ArrayNum;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      this_00 = (FArchive *)*plVar2;
      puVar3 = (uint *)**(undefined8 **)&this_00->field_0x8;
      if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar3 + 1) {
        if ((this_00->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_00,local_res8);
        }
      }
      else {
        local_res8[0] = *puVar3;
        **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      }
      *puVar4 = local_res8[0];
    }
  }
  return;
}

// operator()<TArrayView<unsigned_int,int>_> @ 141e6ba10

void __thiscall
`FixedTagPrivate::TSerializer<13>::Load'::__l8::<lambda_1>::
operator()<TArrayView<unsigned_int,int>_>(void *this,TArrayView<unsigned_int,int> *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  FArchive *this_00;
  uint *puVar3;
  uint *puVar4;
  uint local_res8 [2];
  
  plVar2 = *(longlong **)this;
  puVar4 = param_1->DataPtr;
  if ((*(byte *)(*plVar2 + 0x29) & 2) == 0) {
    puVar1 = puVar4 + (int)*(undefined8 *)&param_1->ArrayNum;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      this_00 = (FArchive *)*plVar2;
      puVar3 = (uint *)**(undefined8 **)&this_00->field_0x8;
      if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar3 + 1) {
        if ((this_00->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_00,local_res8);
        }
      }
      else {
        local_res8[0] = *puVar3;
        **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      }
      *puVar4 = local_res8[0];
    }
  }
  return;
}

// operator()<TArrayView<unsigned_int,int>_> @ 141e6bac0

void __thiscall
`FixedTagPrivate::TSerializer<22>::LoadFinalData'::__l7::<lambda_2>::
operator()<TArrayView<unsigned_int,int>_>(void *this,TArrayView<unsigned_int,int> *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  FArchive *this_00;
  uint *puVar3;
  uint *puVar4;
  uint local_res8 [2];
  
  plVar2 = *(longlong **)this;
  puVar4 = param_1->DataPtr;
  if ((*(byte *)(*plVar2 + 0x29) & 2) == 0) {
    puVar1 = puVar4 + (int)*(undefined8 *)&param_1->ArrayNum;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      this_00 = (FArchive *)*plVar2;
      puVar3 = (uint *)**(undefined8 **)&this_00->field_0x8;
      if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar3 + 1) {
        if ((this_00->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_00,local_res8);
        }
      }
      else {
        local_res8[0] = *puVar3;
        **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      }
      *puVar4 = local_res8[0];
    }
  }
  return;
}

// operator()<TArrayView<unsigned_int,int>_> @ 141e6bb70

void __thiscall
`FixedTagPrivate::TSerializer<18>::Load'::__l10::<lambda_2>::
operator()<TArrayView<unsigned_int,int>_>(void *this,TArrayView<unsigned_int,int> *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  FArchive *this_00;
  uint *puVar3;
  uint *puVar4;
  uint local_res8 [2];
  
  plVar2 = *(longlong **)this;
  puVar4 = param_1->DataPtr;
  if ((*(byte *)(*plVar2 + 0x29) & 2) == 0) {
    puVar1 = puVar4 + (int)*(undefined8 *)&param_1->ArrayNum;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      this_00 = (FArchive *)*plVar2;
      puVar3 = (uint *)**(undefined8 **)&this_00->field_0x8;
      if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar3 + 1) {
        if ((this_00->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_00,local_res8);
        }
      }
      else {
        local_res8[0] = *puVar3;
        **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      }
      *puVar4 = local_res8[0];
    }
  }
  return;
}

// operator()<TArrayView<unsigned_int,int>_> @ 141e6bc20

void __thiscall
`FixedTagPrivate::TSerializer<22>::Load'::__l10::<lambda_2>::
operator()<TArrayView<unsigned_int,int>_>(void *this,TArrayView<unsigned_int,int> *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  FArchive *this_00;
  uint *puVar3;
  uint *puVar4;
  uint local_res8 [2];
  
  plVar2 = *(longlong **)this;
  puVar4 = param_1->DataPtr;
  if ((*(byte *)(*plVar2 + 0x29) & 2) == 0) {
    puVar1 = puVar4 + (int)*(undefined8 *)&param_1->ArrayNum;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      this_00 = (FArchive *)*plVar2;
      puVar3 = (uint *)**(undefined8 **)&this_00->field_0x8;
      if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar3 + 1) {
        if ((this_00->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_00,local_res8);
        }
      }
      else {
        local_res8[0] = *puVar3;
        **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      }
      *puVar4 = local_res8[0];
    }
  }
  return;
}

// operator()<TArrayView<unsigned_int,int>_> @ 141e6bcd0

void __thiscall
`FixedTagPrivate::TSerializer<13>::Load'::__l10::<lambda_2>::
operator()<TArrayView<unsigned_int,int>_>(void *this,TArrayView<unsigned_int,int> *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  FArchive *this_00;
  uint *puVar3;
  uint *puVar4;
  uint local_res8 [2];
  
  plVar2 = *(longlong **)this;
  puVar4 = param_1->DataPtr;
  if ((*(byte *)(*plVar2 + 0x29) & 2) == 0) {
    puVar1 = puVar4 + (int)*(undefined8 *)&param_1->ArrayNum;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      this_00 = (FArchive *)*plVar2;
      puVar3 = (uint *)**(undefined8 **)&this_00->field_0x8;
      if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar3 + 1) {
        if ((this_00->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(this_00,local_res8);
        }
      }
      else {
        local_res8[0] = *puVar3;
        **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      }
      *puVar4 = local_res8[0];
    }
  }
  return;
}

// operator()<TArrayView<unsigned_int,int>_> @ 141e6bd80

void __thiscall
`FixedTagPrivate::TSerializer<18>::LoadHeader'::__l2::<lambda_3>::
operator()<TArrayView<unsigned_int,int>_>(void *this,TArrayView<unsigned_int,int> *param_1)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_c;
  
  **(ulonglong **)this = **(ulonglong **)this + 3 & 0xfffffffffffffffc;
  puVar2 = (uint *)**(ulonglong **)this;
  if (((ulonglong)puVar2 & 3) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(Data, alignof(T))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x3fc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->DataPtr = puVar2;
  *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_c,iVar1);
  **(longlong **)this = **(longlong **)this + (longlong)iVar1 * 4;
  return;
}

// operator()<TArrayView<unsigned_int,int>_> @ 141e6be40

void __thiscall
`FixedTagPrivate::TSerializer<22>::LoadHeader'::__l2::<lambda_3>::
operator()<TArrayView<unsigned_int,int>_>(void *this,TArrayView<unsigned_int,int> *param_1)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_c;
  
  **(ulonglong **)this = **(ulonglong **)this + 3 & 0xfffffffffffffffc;
  puVar2 = (uint *)**(ulonglong **)this;
  if (((ulonglong)puVar2 & 3) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(Data, alignof(T))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x3fc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->DataPtr = puVar2;
  *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_c,iVar1);
  **(longlong **)this = **(longlong **)this + (longlong)iVar1 * 4;
  return;
}

// operator()<TArrayView<unsigned_int,int>_> @ 141e6bf00

void __thiscall
`FixedTagPrivate::TSerializer<13>::LoadHeader'::__l2::<lambda_3>::
operator()<TArrayView<unsigned_int,int>_>(void *this,TArrayView<unsigned_int,int> *param_1)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_c;
  
  **(ulonglong **)this = **(ulonglong **)this + 3 & 0xfffffffffffffffc;
  puVar2 = (uint *)**(ulonglong **)this;
  if (((ulonglong)puVar2 & 3) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(Data, alignof(T))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x3fc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->DataPtr = puVar2;
  *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_c,iVar1);
  **(longlong **)this = **(longlong **)this + (longlong)iVar1 * 4;
  return;
}

// operator()<TArrayView<FixedTagPrivate::FMarshalledText,int>_> @ 141e6bfc0

void __thiscall
`FixedTagPrivate::TSerializer<18>::LoadHeader'::__l2::<lambda_3>::
operator()<TArrayView<FixedTagPrivate::FMarshalledText,int>_>
          (void *this,TArrayView<FixedTagPrivate::FMarshalledText,int> *param_1)

{
  int iVar1;
  FMarshalledText *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_c;
  
  **(ulonglong **)this = **(ulonglong **)this + 7 & 0xfffffffffffffff8;
  pFVar2 = (FMarshalledText *)**(ulonglong **)this;
  if (((ulonglong)pFVar2 & 7) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(Data, alignof(T))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x3fc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->DataPtr = pFVar2;
  *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_c,iVar1);
  **(longlong **)this = **(longlong **)this + (longlong)iVar1 * 0x10;
  return;
}

// operator()<TArrayView<FixedTagPrivate::FMarshalledText,int>_> @ 141e6c080

void __thiscall
`FixedTagPrivate::TSerializer<22>::LoadHeader'::__l2::<lambda_3>::
operator()<TArrayView<FixedTagPrivate::FMarshalledText,int>_>
          (void *this,TArrayView<FixedTagPrivate::FMarshalledText,int> *param_1)

{
  int iVar1;
  FMarshalledText *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_c;
  
  **(ulonglong **)this = **(ulonglong **)this + 7 & 0xfffffffffffffff8;
  pFVar2 = (FMarshalledText *)**(ulonglong **)this;
  if (((ulonglong)pFVar2 & 7) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(Data, alignof(T))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x3fc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->DataPtr = pFVar2;
  *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_c,iVar1);
  **(longlong **)this = **(longlong **)this + (longlong)iVar1 * 0x10;
  return;
}

// operator()<TArrayView<FixedTagPrivate::FMarshalledText,int>_> @ 141e6c140

void __thiscall
`FixedTagPrivate::TSerializer<13>::LoadHeader'::__l2::<lambda_3>::
operator()<TArrayView<FixedTagPrivate::FMarshalledText,int>_>
          (void *this,TArrayView<FixedTagPrivate::FMarshalledText,int> *param_1)

{
  int iVar1;
  FMarshalledText *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_c;
  
  **(ulonglong **)this = **(ulonglong **)this + 7 & 0xfffffffffffffff8;
  pFVar2 = (FMarshalledText *)**(ulonglong **)this;
  if (((ulonglong)pFVar2 & 7) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(Data, alignof(T))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x3fc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->DataPtr = pFVar2;
  *(ulonglong *)&param_1->ArrayNum = CONCAT44(uStack_c,iVar1);
  **(longlong **)this = **(longlong **)this + (longlong)iVar1 * 0x10;
  return;
}

// LoadItem<int> @ 141e79690

int __thiscall FixedTagPrivate::TSerializer<18>::LoadItem<int>(TSerializer<18> *this)

{
  int iVar1;
  FArchive *this_00;
  int *piVar2;
  uint local_res8 [8];
  
  this_00 = this->Ar;
  piVar2 = (int *)**(undefined8 **)&this_00->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    iVar1 = *piVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return iVar1;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    return local_res8[0];
  }
  FArchive::SerializeByteOrderSwapped(this_00,local_res8);
  return local_res8[0];
}

// LoadItem<int> @ 141e79700

int __thiscall FixedTagPrivate::TSerializer<22>::LoadItem<int>(TSerializer<22> *this)

{
  int iVar1;
  FArchive *this_00;
  int *piVar2;
  uint local_res8 [8];
  
  this_00 = this->Ar;
  piVar2 = (int *)**(undefined8 **)&this_00->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    iVar1 = *piVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return iVar1;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    return local_res8[0];
  }
  FArchive::SerializeByteOrderSwapped(this_00,local_res8);
  return local_res8[0];
}

// LoadItem<int> @ 141e79770

int __thiscall FixedTagPrivate::TSerializer<13>::LoadItem<int>(TSerializer<13> *this)

{
  int iVar1;
  FArchive *this_00;
  int *piVar2;
  uint local_res8 [8];
  
  this_00 = this->Ar;
  piVar2 = (int *)**(undefined8 **)&this_00->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    iVar1 = *piVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return iVar1;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    return local_res8[0];
  }
  FArchive::SerializeByteOrderSwapped(this_00,local_res8);
  return local_res8[0];
}

// LoadItem<unsigned_int> @ 141e797e0

uint __thiscall FixedTagPrivate::TSerializer<18>::LoadItem<unsigned_int>(TSerializer<18> *this)

{
  uint uVar1;
  FArchive *this_00;
  uint *puVar2;
  uint local_res8 [8];
  
  this_00 = this->Ar;
  puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    uVar1 = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return uVar1;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    return local_res8[0];
  }
  FArchive::SerializeByteOrderSwapped(this_00,local_res8);
  return local_res8[0];
}

// LoadItem<unsigned_int> @ 141e79850

uint __thiscall FixedTagPrivate::TSerializer<22>::LoadItem<unsigned_int>(TSerializer<22> *this)

{
  uint uVar1;
  FArchive *this_00;
  uint *puVar2;
  uint local_res8 [8];
  
  this_00 = this->Ar;
  puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    uVar1 = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return uVar1;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    return local_res8[0];
  }
  FArchive::SerializeByteOrderSwapped(this_00,local_res8);
  return local_res8[0];
}

// LoadItem<unsigned_int> @ 141e798c0

uint __thiscall FixedTagPrivate::TSerializer<13>::LoadItem<unsigned_int>(TSerializer<13> *this)

{
  uint uVar1;
  FArchive *this_00;
  uint *puVar2;
  uint local_res8 [8];
  
  this_00 = this->Ar;
  puVar2 = (uint *)**(undefined8 **)&this_00->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    uVar1 = *puVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return uVar1;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    return local_res8[0];
  }
  FArchive::SerializeByteOrderSwapped(this_00,local_res8);
  return local_res8[0];
}

// LoadItem<FAssetRegistryExportPath> @ 141e79930

/* WARNING: Enum "Type": Some values do not have unique names */

FAssetRegistryExportPath * __thiscall
FixedTagPrivate::TSerializer<13>::LoadItem<FAssetRegistryExportPath>
          (TSerializer<13> *this,FAssetRegistryExportPath *__return_storage_ptr__)

{
  FName FVar1;
  longlong *plVar2;
  UClass *pUVar3;
  ForAnyElementType FVar4;
  FName *pFVar5;
  FName local_res8;
  FName local_res10;
  FName local_88;
  FName FStack_80;
  FTopLevelAssetPath local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  FName local_38;
  FName local_30;
  FName local_28 [2];
  
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  local_28[0].ComparisonIndex.Value = 0;
  local_28[0].Number = 0;
  plVar2 = (longlong *)(**(code **)(*(longlong *)this->Ar + 0x178))(this->Ar,&local_38);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x178))(plVar2,local_28);
  (**(code **)(*plVar2 + 0x178))(plVar2,&local_30);
  (__return_storage_ptr__->ClassPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassPath).PackageName.Number = 0;
  (__return_storage_ptr__->ClassPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->ClassPath).AssetName.Number = 0;
  (__return_storage_ptr__->Class).ComparisonIndex = 0;
  (__return_storage_ptr__->Class).Number = 0;
  (__return_storage_ptr__->Package).ComparisonIndex = 0;
  (__return_storage_ptr__->Package).Number = 0;
  (__return_storage_ptr__->Object).ComparisonIndex = 0;
  (__return_storage_ptr__->Object).Number = 0;
  local_res8 = local_38;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FStack_80.ComparisonIndex.Value = 0;
  FStack_80.Number = 0;
  if (local_38 != (FName)0x0) {
    ::FName::ToString(&local_res8,&local_68);
    local_58.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    local_58.Data.ArrayNum = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      local_58.Data.ArrayNum = 0;
    }
    pUVar3 = Z_Construct_UClass_UStruct_NoRegister();
    local_48.Size = local_58.Data.ArrayNum;
    local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    UClass::TryConvertShortTypeNameToPathName
              (&local_78,pUVar3,&local_48,NoLogging,
               L"AssetRegistry trying to convert short name to path name");
    local_88 = local_78.PackageName;
    FStack_80 = local_78.AssetName;
    if (local_78.PackageName == (FName)0x0) {
      FLinkerLoad::FindNewPathNameForClass(&local_58,&local_68,false);
      local_48.Size = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        local_48.Size = 0;
      }
      for (FVar4.Data = local_58.Data.AllocatorInstance.Data;
          FVar4.Data != local_58.Data.AllocatorInstance.Data + (longlong)local_48.Size * 2;
          FVar4.Data = FVar4.Data + 2) {
        if (*(short *)FVar4.Data == 0x2f) {
          local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
          local_78.PackageName.ComparisonIndex.Value = 0;
          local_78.PackageName.Number = 0;
          local_78.AssetName.ComparisonIndex.Value = 0;
          local_78.AssetName.Number = 0;
          FTopLevelAssetPath::TrySetPath(&local_78,&local_48);
          goto LAB_141e79a98;
        }
      }
      local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
      pUVar3 = Z_Construct_UClass_UStruct_NoRegister();
      UClass::TryConvertShortTypeNameToPathName
                (&local_78,pUVar3,&local_48,NoLogging,
                 L"AssetRegistry trying to convert redirected short name to path name");
LAB_141e79a98:
      FVar1 = local_res8;
      if (local_78.PackageName == (FName)0x0) {
        pFVar5 = ::FName::FName(&local_res10,L"/Unknown");
        local_78.PackageName.ComparisonIndex.Value = 0;
        local_78.PackageName.Number = 0;
        local_78.AssetName.ComparisonIndex.Value = 0;
        local_78.AssetName.Number = 0;
        FTopLevelAssetPath::TrySetPath(&local_78,*pFVar5,FVar1);
      }
      FStack_80 = local_78.AssetName;
      local_88 = local_78.PackageName;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->Object = local_28[0];
  __return_storage_ptr__->Package = local_30;
  (__return_storage_ptr__->ClassPath).PackageName = local_88;
  (__return_storage_ptr__->ClassPath).AssetName = FStack_80;
  return __return_storage_ptr__;
}

// LoadViewData<FAssetRegistryExportPath> @ 141e79b60

void __thiscall
FixedTagPrivate::TSerializer<18>::LoadViewData<FAssetRegistryExportPath>
          (TSerializer<18> *this,TArrayView<FAssetRegistryExportPath,int> *param_1)

{
  FAssetRegistryExportPath *pFVar1;
  longlong *plVar2;
  FAssetRegistryExportPath *pFVar3;
  FName local_38;
  FName FStack_30;
  FName local_28;
  FName FStack_20;
  FName local_18 [2];
  
  if ((this->Ar->field_0x29 & 2) == 0) {
    pFVar3 = param_1->DataPtr;
    pFVar1 = pFVar3 + param_1->ArrayNum;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
      local_38.ComparisonIndex.Value = 0;
      local_38.Number = 0;
      FStack_30.ComparisonIndex.Value = 0;
      FStack_30.Number = 0;
      local_28.ComparisonIndex.Value = 0;
      local_28.Number = 0;
      FStack_20.ComparisonIndex.Value = 0;
      FStack_20.Number = 0;
      local_18[0].ComparisonIndex.Value = 0;
      local_18[0].Number = 0;
      plVar2 = (longlong *)(**(code **)(*(longlong *)this->Ar + 0x178))(this->Ar,&local_38);
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x178))(plVar2,&FStack_30);
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x178))(plVar2,local_18);
      (**(code **)(*plVar2 + 0x178))(plVar2,&FStack_20);
      (pFVar3->ClassPath).PackageName = local_38;
      (pFVar3->ClassPath).AssetName = FStack_30;
      pFVar3->Class = local_28;
      pFVar3->Package = FStack_20;
      pFVar3->Object = local_18[0];
    }
  }
  return;
}

// LoadViewData<FAssetRegistryExportPath> @ 141e79c50

void __thiscall
FixedTagPrivate::TSerializer<22>::LoadViewData<FAssetRegistryExportPath>
          (TSerializer<22> *this,TArrayView<FAssetRegistryExportPath,int> *param_1)

{
  FAssetRegistryExportPath *pFVar1;
  longlong *plVar2;
  FAssetRegistryExportPath *pFVar3;
  FName local_38;
  FName FStack_30;
  FName local_28;
  FName FStack_20;
  FName local_18 [2];
  
  if ((this->Ar->field_0x29 & 2) == 0) {
    pFVar3 = param_1->DataPtr;
    pFVar1 = pFVar3 + param_1->ArrayNum;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
      local_38.ComparisonIndex.Value = 0;
      local_38.Number = 0;
      FStack_30.ComparisonIndex.Value = 0;
      FStack_30.Number = 0;
      local_28.ComparisonIndex.Value = 0;
      local_28.Number = 0;
      FStack_20.ComparisonIndex.Value = 0;
      FStack_20.Number = 0;
      local_18[0].ComparisonIndex.Value = 0;
      local_18[0].Number = 0;
      plVar2 = (longlong *)(**(code **)(*(longlong *)this->Ar + 0x178))(this->Ar,&local_38);
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x178))(plVar2,&FStack_30);
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x178))(plVar2,local_18);
      (**(code **)(*plVar2 + 0x178))(plVar2,&FStack_20);
      (pFVar3->ClassPath).PackageName = local_38;
      (pFVar3->ClassPath).AssetName = FStack_30;
      pFVar3->Class = local_28;
      pFVar3->Package = FStack_20;
      pFVar3->Object = local_18[0];
    }
  }
  return;
}

// LoadViewData<FixedTagPrivate::FNumberlessExportPath> @ 141e79d40

void __thiscall
FixedTagPrivate::TSerializer<18>::LoadViewData<FixedTagPrivate::FNumberlessExportPath>
          (TSerializer<18> *this,TArrayView<FixedTagPrivate::FNumberlessExportPath,int> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong *plVar7;
  FNumberlessExportPath *pFVar8;
  FNumberlessExportPath *pFVar9;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  
  if ((this->Ar->field_0x29 & 2) == 0) {
    pFVar9 = param_1->DataPtr;
    pFVar8 = pFVar9 + param_1->ArrayNum;
    for (; pFVar9 != pFVar8; pFVar9 = pFVar9 + 1) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18[0] = 0;
      plVar7 = (longlong *)(**(code **)(*(longlong *)this->Ar + 0x178))(this->Ar,&local_38);
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x178))(plVar7,&local_30);
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x178))(plVar7,local_18);
      (**(code **)(*plVar7 + 0x178))(plVar7,&local_20);
      uVar2 = local_38;
      if (((int)((ulonglong)local_38 >> 0x20) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Name.GetNumber() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                             ,0x133,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = local_30;
      if (((int)((ulonglong)local_30 >> 0x20) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Name.GetNumber() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                             ,0x133,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = local_18[0];
      if (((int)((ulonglong)local_18[0] >> 0x20) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Name.GetNumber() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                             ,0x133,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = local_20;
      if (((int)((ulonglong)local_20 >> 0x20) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Name.GetNumber() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                             ,0x133,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar9->ClassPackage = (FNameEntryId)(int)uVar2;
      pFVar9->ClassObject = (FNameEntryId)(int)uVar3;
      pFVar9->Package = (FNameEntryId)(int)uVar4;
      pFVar9->Object = (FNameEntryId)(int)uVar5;
    }
  }
  return;
}

// LoadViewData<FixedTagPrivate::FNumberlessExportPath> @ 141e79f10

void __thiscall
FixedTagPrivate::TSerializer<22>::LoadViewData<FixedTagPrivate::FNumberlessExportPath>
          (TSerializer<22> *this,TArrayView<FixedTagPrivate::FNumberlessExportPath,int> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong *plVar7;
  FNumberlessExportPath *pFVar8;
  FNumberlessExportPath *pFVar9;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  
  if ((this->Ar->field_0x29 & 2) == 0) {
    pFVar9 = param_1->DataPtr;
    pFVar8 = pFVar9 + param_1->ArrayNum;
    for (; pFVar9 != pFVar8; pFVar9 = pFVar9 + 1) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18[0] = 0;
      plVar7 = (longlong *)(**(code **)(*(longlong *)this->Ar + 0x178))(this->Ar,&local_38);
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x178))(plVar7,&local_30);
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x178))(plVar7,local_18);
      (**(code **)(*plVar7 + 0x178))(plVar7,&local_20);
      uVar2 = local_38;
      if (((int)((ulonglong)local_38 >> 0x20) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Name.GetNumber() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                             ,0x133,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = local_30;
      if (((int)((ulonglong)local_30 >> 0x20) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Name.GetNumber() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                             ,0x133,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = local_18[0];
      if (((int)((ulonglong)local_18[0] >> 0x20) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Name.GetNumber() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                             ,0x133,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = local_20;
      if (((int)((ulonglong)local_20 >> 0x20) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Name.GetNumber() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                             ,0x133,L""), bVar6)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar9->ClassPackage = (FNameEntryId)(int)uVar2;
      pFVar9->ClassObject = (FNameEntryId)(int)uVar3;
      pFVar9->Package = (FNameEntryId)(int)uVar4;
      pFVar9->Object = (FNameEntryId)(int)uVar5;
    }
  }
  return;
}

// LoadViewData<FixedTagPrivate::FMarshalledText> @ 141e7a0e0

void __thiscall
FixedTagPrivate::TSerializer<18>::LoadViewData<FixedTagPrivate::FMarshalledText>
          (TSerializer<18> *this,TArrayView<FixedTagPrivate::FMarshalledText,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  FUtf8String *pFVar3;
  int iVar4;
  FUtf8String *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FString local_48;
  FUtf8String local_38;
  FUtf8String local_28;
  
  if ((this->Ar->field_0x29 & 2) == 0) {
    pFVar3 = &param_1->DataPtr->String;
    pFVar5 = pFVar3 + param_1->ArrayNum;
    if (pFVar3 != pFVar5) {
      do {
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        ::operator<<(this->Ar,&local_48);
        iVar4 = 0;
        iVar7 = local_48.Data.ArrayNum + -1;
        if (local_48.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        pFVar2 = FUtf8String::ConstructFromPtrSize
                           (&local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar7);
        pFVar6 = (FScriptContainerElement *)0x0;
        iVar7 = iVar4;
        if (&local_28 != pFVar2) {
          pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
          (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar4 = (pFVar2->Data).ArrayNum;
          iVar7 = (pFVar2->Data).ArrayMax;
          (pFVar2->Data).ArrayNum = 0;
          (pFVar2->Data).ArrayMax = 0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (pFVar3 != &local_28) {
          pFVar1 = (((TArray<char8_t,TSizedDefaultAllocator<32>_> *)
                    &(pFVar3->Data).AllocatorInstance)->AllocatorInstance).Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (((TArray<char8_t,TSizedDefaultAllocator<32>_> *)&(pFVar3->Data).AllocatorInstance)->
          AllocatorInstance).Data = pFVar6;
          (pFVar3->Data).ArrayNum = iVar4;
          (pFVar3->Data).ArrayMax = iVar7;
          pFVar6 = (FScriptContainerElement *)0x0;
        }
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        pFVar3 = pFVar3 + 1;
      } while (pFVar3 != pFVar5);
    }
  }
  return;
}

// LoadViewData<FixedTagPrivate::FMarshalledText> @ 141e7a220

void __thiscall
FixedTagPrivate::TSerializer<22>::LoadViewData<FixedTagPrivate::FMarshalledText>
          (TSerializer<22> *this,TArrayView<FixedTagPrivate::FMarshalledText,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  int iVar4;
  FMarshalledText *pFVar5;
  FMarshalledText *pFVar6;
  FUtf8String local_38;
  FMarshalledText local_28;
  
  if ((this->Ar->field_0x29 & 2) == 0) {
    pFVar5 = param_1->DataPtr;
    pFVar6 = pFVar5 + param_1->ArrayNum;
    if (pFVar5 != pFVar6) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      do {
        ::operator<<(this->Ar,&local_38);
        FVar2.Data = local_38.Data.AllocatorInstance.Data;
        iVar3 = local_38.Data.ArrayNum;
        iVar4 = local_38.Data.ArrayMax;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        if (pFVar5 == &local_28) {
          if (FVar2.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar2.Data);
          }
        }
        else {
          pFVar1 = (pFVar5->String).Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (pFVar5->String).Data.AllocatorInstance.Data = FVar2.Data;
          (pFVar5->String).Data.ArrayNum = iVar3;
          (pFVar5->String).Data.ArrayMax = iVar4;
        }
        pFVar5 = pFVar5 + 1;
      } while (pFVar5 != pFVar6);
    }
  }
  return;
}

// LoadViewData<FixedTagPrivate::FMarshalledText> @ 141e7a300

void __thiscall
FixedTagPrivate::TSerializer<13>::LoadViewData<FixedTagPrivate::FMarshalledText>
          (TSerializer<13> *this,TArrayView<FixedTagPrivate::FMarshalledText,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  FUtf8String *pFVar3;
  int iVar4;
  FUtf8String *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FString local_48;
  FUtf8String local_38;
  FUtf8String local_28;
  
  if ((this->Ar->field_0x29 & 2) == 0) {
    pFVar3 = &param_1->DataPtr->String;
    pFVar5 = pFVar3 + param_1->ArrayNum;
    if (pFVar3 != pFVar5) {
      do {
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        ::operator<<(this->Ar,&local_48);
        iVar4 = 0;
        iVar7 = local_48.Data.ArrayNum + -1;
        if (local_48.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        pFVar2 = FUtf8String::ConstructFromPtrSize
                           (&local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar7);
        pFVar6 = (FScriptContainerElement *)0x0;
        iVar7 = iVar4;
        if (&local_28 != pFVar2) {
          pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
          (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar4 = (pFVar2->Data).ArrayNum;
          iVar7 = (pFVar2->Data).ArrayMax;
          (pFVar2->Data).ArrayNum = 0;
          (pFVar2->Data).ArrayMax = 0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (pFVar3 != &local_28) {
          pFVar1 = (((TArray<char8_t,TSizedDefaultAllocator<32>_> *)
                    &(pFVar3->Data).AllocatorInstance)->AllocatorInstance).Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (((TArray<char8_t,TSizedDefaultAllocator<32>_> *)&(pFVar3->Data).AllocatorInstance)->
          AllocatorInstance).Data = pFVar6;
          (pFVar3->Data).ArrayNum = iVar4;
          (pFVar3->Data).ArrayMax = iVar7;
          pFVar6 = (FScriptContainerElement *)0x0;
        }
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        pFVar3 = pFVar3 + 1;
      } while (pFVar3 != pFVar5);
    }
  }
  return;
}

// LoadHeader @ 141eac050

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FixedTagPrivate::ELoadOrder> __thiscall
FixedTagPrivate::TSerializer<18>::LoadHeader(TSerializer<18> *this,FStore *param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  TOptional<FixedTagPrivate::ELoadOrder> TVar6;
  FStore *in_R8;
  uchar *local_res10;
  <lambda_1> local_res20;
  <lambda_3> local_128;
  void *local_120 [3];
  FDisplayNameEntryId *local_108;
  undefined8 uStack_100;
  FName *local_f8;
  undefined8 uStack_f0;
  FNumberlessExportPath *local_e8;
  undefined8 uStack_e0;
  FAssetRegistryExportPath *local_d8;
  undefined8 uStack_d0;
  FMarshalledText *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  FNumberlessPair *local_78;
  undefined8 uStack_70;
  FNumberedPair *local_68;
  undefined8 uStack_60;
  
  *(undefined1 *)((longlong)&(param_1->Pairs).DataPtr + 4) = 0;
  uVar4 = LoadItem<unsigned_int>(this);
  if (uVar4 == 0x12345678) {
    uVar5 = 0;
  }
  else {
    if (uVar4 != 0x12345679) {
      if (2 < (byte)LogAssetDataTags._0_1_) {
        (**(code **)(*(longlong *)this->Ar + 0x18))(this->Ar,local_120);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_struct_TOptional<FixedTagPrivate::ELoadOrder>___cdecl_FixedTagPrivate::TSerializer<18>::LoadHeader(FixedTagPrivate::FStore&___ptr64)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogAssetDataTags);
        if (local_120[0] != (void *)0x0) {
          FMemory::Free(local_120[0]);
        }
      }
      FArchiveState::SetError((FArchiveState *)this->Ar);
      return (TOptional<FixedTagPrivate::ELoadOrder>)param_1;
    }
    uVar5 = 1;
  }
  *(undefined4 *)&(param_1->Pairs).DataPtr = uVar5;
  *(undefined1 *)((longlong)&(param_1->Pairs).DataPtr + 4) = 1;
  local_res20.__this = this;
  VisitViews<0,FixedTagPrivate::FStore_&,_FixedTagPrivate::TSerializer<18>::LoadHeader_::__l2::<lambda_1>_>
            (in_R8,&local_res20);
  local_108 = (in_R8->NumberlessNames).DataPtr;
  uStack_100 = *(undefined8 *)&(in_R8->NumberlessNames).ArrayNum;
  local_f8 = (in_R8->Names).DataPtr;
  uStack_f0 = *(undefined8 *)&(in_R8->Names).ArrayNum;
  local_e8 = (in_R8->NumberlessExportPaths).DataPtr;
  uStack_e0 = *(undefined8 *)&(in_R8->NumberlessExportPaths).ArrayNum;
  local_d8 = (in_R8->ExportPaths).DataPtr;
  uStack_d0 = *(undefined8 *)&(in_R8->ExportPaths).ArrayNum;
  local_c8 = (in_R8->Texts).DataPtr;
  uStack_c0 = *(undefined8 *)&(in_R8->Texts).ArrayNum;
  local_b8 = (in_R8->AnsiStringOffsets).DataPtr;
  uStack_b0 = *(undefined8 *)&(in_R8->AnsiStringOffsets).ArrayNum;
  local_a8 = (in_R8->WideStringOffsets).DataPtr;
  uStack_a0 = *(undefined8 *)&(in_R8->WideStringOffsets).ArrayNum;
  local_98 = (in_R8->AnsiStrings).DataPtr;
  uStack_90 = *(undefined8 *)&(in_R8->AnsiStrings).ArrayNum;
  local_88 = (in_R8->WideStrings).DataPtr;
  uStack_80 = *(undefined8 *)&(in_R8->WideStrings).ArrayNum;
  local_78 = (in_R8->NumberlessPairs).DataPtr;
  uStack_70 = *(undefined8 *)&(in_R8->NumberlessPairs).ArrayNum;
  local_68 = (in_R8->Pairs).DataPtr;
  uStack_60 = *(undefined8 *)&(in_R8->Pairs).ArrayNum;
  uVar1 = ((longlong)(int)*(undefined8 *)&(in_R8->WideStrings).ArrayNum * 2 + 3 +
           ((longlong)(int)*(undefined8 *)&(in_R8->AnsiStrings).ArrayNum + 1 +
            (((longlong)(int)*(undefined8 *)&(in_R8->NumberlessNames).ArrayNum +
             ((longlong)(int)*(undefined8 *)&(in_R8->ExportPaths).ArrayNum * 5 +
              (longlong)(int)*(undefined8 *)&(in_R8->NumberlessExportPaths).ArrayNum * 2 +
             (longlong)(int)*(undefined8 *)&(in_R8->Names).ArrayNum) * 2) * 4 + 7U &
            0xfffffffffffffff8) +
            ((longlong)(int)*(undefined8 *)&(in_R8->WideStringOffsets).ArrayNum +
             (longlong)(int)*(undefined8 *)&(in_R8->Texts).ArrayNum * 4 +
            (longlong)(int)*(undefined8 *)&(in_R8->AnsiStringOffsets).ArrayNum) * 4 &
           0xfffffffffffffffe) & 0xfffffffffffffffc) +
          (longlong)(int)*(undefined8 *)&(in_R8->Pairs).ArrayNum * 0xc +
          (longlong)(int)*(undefined8 *)&(in_R8->NumberlessPairs).ArrayNum * 8;
  local_res10 = FMemory::Malloc(uVar1,0x10);
  in_R8->Data = local_res10;
  local_128.Ptr = &local_res10;
  VisitViews<0,FixedTagPrivate::FStore_&,_FixedTagPrivate::TSerializer<18>::LoadHeader_::__l2::<lambda_3>_>
            (in_R8,&local_128);
  if ((local_res10 + -uVar1 != in_R8->Data) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr - Bytes == Store.Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x4df,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar6 = (TOptional<FixedTagPrivate::ELoadOrder>)(*pcVar2)();
    return TVar6;
  }
  memset((in_R8->Texts).DataPtr,0,(longlong)(int)*(undefined8 *)&(in_R8->Texts).ArrayNum << 4);
  return (TOptional<FixedTagPrivate::ELoadOrder>)param_1;
}

// LoadHeader @ 141eac330

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FixedTagPrivate::ELoadOrder> __thiscall
FixedTagPrivate::TSerializer<22>::LoadHeader(TSerializer<22> *this,FStore *param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  TOptional<FixedTagPrivate::ELoadOrder> TVar6;
  FStore *in_R8;
  uchar *local_res10;
  <lambda_1> local_res20;
  <lambda_3> local_128;
  void *local_120 [3];
  FDisplayNameEntryId *local_108;
  undefined8 uStack_100;
  FName *local_f8;
  undefined8 uStack_f0;
  FNumberlessExportPath *local_e8;
  undefined8 uStack_e0;
  FAssetRegistryExportPath *local_d8;
  undefined8 uStack_d0;
  FMarshalledText *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  FNumberlessPair *local_78;
  undefined8 uStack_70;
  FNumberedPair *local_68;
  undefined8 uStack_60;
  
  *(undefined1 *)((longlong)&(param_1->Pairs).DataPtr + 4) = 0;
  uVar4 = LoadItem<unsigned_int>(this);
  if (uVar4 == 0x12345678) {
    uVar5 = 0;
  }
  else {
    if (uVar4 != 0x12345679) {
      if (2 < (byte)LogAssetDataTags._0_1_) {
        (**(code **)(*(longlong *)this->Ar + 0x18))(this->Ar,local_120);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_struct_TOptional<FixedTagPrivate::ELoadOrder>___cdecl_FixedTagPrivate::TSerializer<22>::LoadHeader(FixedTagPrivate::FStore&___ptr64)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogAssetDataTags);
        if (local_120[0] != (void *)0x0) {
          FMemory::Free(local_120[0]);
        }
      }
      FArchiveState::SetError((FArchiveState *)this->Ar);
      return (TOptional<FixedTagPrivate::ELoadOrder>)param_1;
    }
    uVar5 = 1;
  }
  *(undefined4 *)&(param_1->Pairs).DataPtr = uVar5;
  *(undefined1 *)((longlong)&(param_1->Pairs).DataPtr + 4) = 1;
  local_res20.__this = this;
  VisitViews<0,FixedTagPrivate::FStore_&,_FixedTagPrivate::TSerializer<22>::LoadHeader_::__l2::<lambda_1>_>
            (in_R8,&local_res20);
  local_108 = (in_R8->NumberlessNames).DataPtr;
  uStack_100 = *(undefined8 *)&(in_R8->NumberlessNames).ArrayNum;
  local_f8 = (in_R8->Names).DataPtr;
  uStack_f0 = *(undefined8 *)&(in_R8->Names).ArrayNum;
  local_e8 = (in_R8->NumberlessExportPaths).DataPtr;
  uStack_e0 = *(undefined8 *)&(in_R8->NumberlessExportPaths).ArrayNum;
  local_d8 = (in_R8->ExportPaths).DataPtr;
  uStack_d0 = *(undefined8 *)&(in_R8->ExportPaths).ArrayNum;
  local_c8 = (in_R8->Texts).DataPtr;
  uStack_c0 = *(undefined8 *)&(in_R8->Texts).ArrayNum;
  local_b8 = (in_R8->AnsiStringOffsets).DataPtr;
  uStack_b0 = *(undefined8 *)&(in_R8->AnsiStringOffsets).ArrayNum;
  local_a8 = (in_R8->WideStringOffsets).DataPtr;
  uStack_a0 = *(undefined8 *)&(in_R8->WideStringOffsets).ArrayNum;
  local_98 = (in_R8->AnsiStrings).DataPtr;
  uStack_90 = *(undefined8 *)&(in_R8->AnsiStrings).ArrayNum;
  local_88 = (in_R8->WideStrings).DataPtr;
  uStack_80 = *(undefined8 *)&(in_R8->WideStrings).ArrayNum;
  local_78 = (in_R8->NumberlessPairs).DataPtr;
  uStack_70 = *(undefined8 *)&(in_R8->NumberlessPairs).ArrayNum;
  local_68 = (in_R8->Pairs).DataPtr;
  uStack_60 = *(undefined8 *)&(in_R8->Pairs).ArrayNum;
  uVar1 = ((longlong)(int)*(undefined8 *)&(in_R8->WideStrings).ArrayNum * 2 + 3 +
           ((longlong)(int)*(undefined8 *)&(in_R8->AnsiStrings).ArrayNum + 1 +
            (((longlong)(int)*(undefined8 *)&(in_R8->NumberlessNames).ArrayNum +
             ((longlong)(int)*(undefined8 *)&(in_R8->ExportPaths).ArrayNum * 5 +
              (longlong)(int)*(undefined8 *)&(in_R8->NumberlessExportPaths).ArrayNum * 2 +
             (longlong)(int)*(undefined8 *)&(in_R8->Names).ArrayNum) * 2) * 4 + 7U &
            0xfffffffffffffff8) +
            ((longlong)(int)*(undefined8 *)&(in_R8->WideStringOffsets).ArrayNum +
             (longlong)(int)*(undefined8 *)&(in_R8->Texts).ArrayNum * 4 +
            (longlong)(int)*(undefined8 *)&(in_R8->AnsiStringOffsets).ArrayNum) * 4 &
           0xfffffffffffffffe) & 0xfffffffffffffffc) +
          (longlong)(int)*(undefined8 *)&(in_R8->Pairs).ArrayNum * 0xc +
          (longlong)(int)*(undefined8 *)&(in_R8->NumberlessPairs).ArrayNum * 8;
  local_res10 = FMemory::Malloc(uVar1,0x10);
  in_R8->Data = local_res10;
  local_128.Ptr = &local_res10;
  VisitViews<0,FixedTagPrivate::FStore_&,_FixedTagPrivate::TSerializer<22>::LoadHeader_::__l2::<lambda_3>_>
            (in_R8,&local_128);
  if ((local_res10 + -uVar1 != in_R8->Data) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr - Bytes == Store.Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x4df,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar6 = (TOptional<FixedTagPrivate::ELoadOrder>)(*pcVar2)();
    return TVar6;
  }
  memset((in_R8->Texts).DataPtr,0,(longlong)(int)*(undefined8 *)&(in_R8->Texts).ArrayNum << 4);
  return (TOptional<FixedTagPrivate::ELoadOrder>)param_1;
}

// LoadHeader @ 141eac610

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FixedTagPrivate::ELoadOrder> __thiscall
FixedTagPrivate::TSerializer<13>::LoadHeader(TSerializer<13> *this,FStore *param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  TOptional<FixedTagPrivate::ELoadOrder> TVar6;
  FStore *in_R8;
  uchar *local_res10;
  <lambda_1> local_res20;
  <lambda_3> local_128;
  void *local_120 [3];
  FDisplayNameEntryId *local_108;
  undefined8 uStack_100;
  FName *local_f8;
  undefined8 uStack_f0;
  FNumberlessExportPath *local_e8;
  undefined8 uStack_e0;
  FAssetRegistryExportPath *local_d8;
  undefined8 uStack_d0;
  FMarshalledText *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  FNumberlessPair *local_78;
  undefined8 uStack_70;
  FNumberedPair *local_68;
  undefined8 uStack_60;
  
  *(undefined1 *)((longlong)&(param_1->Pairs).DataPtr + 4) = 0;
  uVar4 = LoadItem<unsigned_int>(this);
  if (uVar4 == 0x12345678) {
    uVar5 = 0;
  }
  else {
    if (uVar4 != 0x12345679) {
      if (2 < (byte)LogAssetDataTags._0_1_) {
        (**(code **)(*(longlong *)this->Ar + 0x18))(this->Ar,local_120);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_struct_TOptional<FixedTagPrivate::ELoadOrder>___cdecl_FixedTagPrivate::TSerializer<13>::LoadHeader(FixedTagPrivate::FStore&___ptr64)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogAssetDataTags);
        if (local_120[0] != (void *)0x0) {
          FMemory::Free(local_120[0]);
        }
      }
      FArchiveState::SetError((FArchiveState *)this->Ar);
      return (TOptional<FixedTagPrivate::ELoadOrder>)param_1;
    }
    uVar5 = 1;
  }
  *(undefined4 *)&(param_1->Pairs).DataPtr = uVar5;
  *(undefined1 *)((longlong)&(param_1->Pairs).DataPtr + 4) = 1;
  local_res20.__this = this;
  VisitViews<0,FixedTagPrivate::FStore_&,_FixedTagPrivate::TSerializer<13>::LoadHeader_::__l2::<lambda_1>_>
            (in_R8,&local_res20);
  local_108 = (in_R8->NumberlessNames).DataPtr;
  uStack_100 = *(undefined8 *)&(in_R8->NumberlessNames).ArrayNum;
  local_f8 = (in_R8->Names).DataPtr;
  uStack_f0 = *(undefined8 *)&(in_R8->Names).ArrayNum;
  local_e8 = (in_R8->NumberlessExportPaths).DataPtr;
  uStack_e0 = *(undefined8 *)&(in_R8->NumberlessExportPaths).ArrayNum;
  local_d8 = (in_R8->ExportPaths).DataPtr;
  uStack_d0 = *(undefined8 *)&(in_R8->ExportPaths).ArrayNum;
  local_c8 = (in_R8->Texts).DataPtr;
  uStack_c0 = *(undefined8 *)&(in_R8->Texts).ArrayNum;
  local_b8 = (in_R8->AnsiStringOffsets).DataPtr;
  uStack_b0 = *(undefined8 *)&(in_R8->AnsiStringOffsets).ArrayNum;
  local_a8 = (in_R8->WideStringOffsets).DataPtr;
  uStack_a0 = *(undefined8 *)&(in_R8->WideStringOffsets).ArrayNum;
  local_98 = (in_R8->AnsiStrings).DataPtr;
  uStack_90 = *(undefined8 *)&(in_R8->AnsiStrings).ArrayNum;
  local_88 = (in_R8->WideStrings).DataPtr;
  uStack_80 = *(undefined8 *)&(in_R8->WideStrings).ArrayNum;
  local_78 = (in_R8->NumberlessPairs).DataPtr;
  uStack_70 = *(undefined8 *)&(in_R8->NumberlessPairs).ArrayNum;
  local_68 = (in_R8->Pairs).DataPtr;
  uStack_60 = *(undefined8 *)&(in_R8->Pairs).ArrayNum;
  uVar1 = ((longlong)(int)*(undefined8 *)&(in_R8->WideStrings).ArrayNum * 2 + 3 +
           ((longlong)(int)*(undefined8 *)&(in_R8->AnsiStrings).ArrayNum + 1 +
            (((longlong)(int)*(undefined8 *)&(in_R8->NumberlessNames).ArrayNum +
             ((longlong)(int)*(undefined8 *)&(in_R8->ExportPaths).ArrayNum * 5 +
              (longlong)(int)*(undefined8 *)&(in_R8->NumberlessExportPaths).ArrayNum * 2 +
             (longlong)(int)*(undefined8 *)&(in_R8->Names).ArrayNum) * 2) * 4 + 7U &
            0xfffffffffffffff8) +
            ((longlong)(int)*(undefined8 *)&(in_R8->WideStringOffsets).ArrayNum +
             (longlong)(int)*(undefined8 *)&(in_R8->Texts).ArrayNum * 4 +
            (longlong)(int)*(undefined8 *)&(in_R8->AnsiStringOffsets).ArrayNum) * 4 &
           0xfffffffffffffffe) & 0xfffffffffffffffc) +
          (longlong)(int)*(undefined8 *)&(in_R8->Pairs).ArrayNum * 0xc +
          (longlong)(int)*(undefined8 *)&(in_R8->NumberlessPairs).ArrayNum * 8;
  local_res10 = FMemory::Malloc(uVar1,0x10);
  in_R8->Data = local_res10;
  local_128.Ptr = &local_res10;
  VisitViews<0,FixedTagPrivate::FStore_&,_FixedTagPrivate::TSerializer<13>::LoadHeader_::__l2::<lambda_3>_>
            (in_R8,&local_128);
  if ((local_res10 + -uVar1 != in_R8->Data) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr - Bytes == Store.Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x4df,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar6 = (TOptional<FixedTagPrivate::ELoadOrder>)(*pcVar2)();
    return TVar6;
  }
  memset((in_R8->Texts).DataPtr,0,(longlong)(int)*(undefined8 *)&(in_R8->Texts).ArrayNum << 4);
  return (TOptional<FixedTagPrivate::ELoadOrder>)param_1;
}

// Save @ 141eb9ff0

void __thiscall FixedTagPrivate::TSerializer<22>::Save(TSerializer<22> *this,FStoreData *param_1)

{
  int iVar1;
  FArchive *pFVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  undefined8 local_res20;
  <lambda_1> local_108;
  <lambda_2> local_100;
  FArchiveState local_f8;
  undefined8 local_68;
  void **local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  
  local_res8[0] = 0x12345679;
  pFVar2 = this->Ar;
  puVar3 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  local_108.__this = this;
  VisitViews<0,FixedTagPrivate::FStoreData_const_&,_FixedTagPrivate::TSerializer<22>::Save_::__l2::<lambda_1>_>
            (param_1,&local_108);
  iVar1 = (param_1->Texts).ArrayNum;
  pFVar6 = (param_1->Texts).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res20 = 0;
  local_f8._padding_ = 0;
  local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_f8._40_8_ = 0;
  local_f8.ArSerializingDefaults = 0;
  local_f8.ArPortFlags = 0;
  local_f8.ArMaxSerializeSize = 0;
  local_f8.ArUEVer.FileVersionUE4 = 0;
  local_f8.ArUEVer.FileVersionUE5 = 0;
  local_f8.ArLicenseeUEVer = 0;
  local_f8.ArEngineVer.Major = 0;
  local_f8.ArEngineVer.Minor = 0;
  local_f8.ArEngineVer.Patch = 0;
  local_f8.ArEngineVer._6_2_ = 0;
  local_f8.ArEngineVer.Changelist = 0;
  local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_f8.SerializedProperty = (FProperty *)0x0;
  local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_f8.bCustomVersionsAreReset = false;
  local_f8._129_7_ = 0;
  local_f8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_f8);
  local_68 = 0;
  local_f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_60 = &local_50;
  local_58 = 0;
  FArchiveState::SetIsSaving(&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_f8._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_48._0_4_ = 0;
  if (pFVar6 != pFVar7) {
    do {
      ::operator<<((FArchive *)&local_f8,(FUtf8String *)pFVar6);
      pFVar6 = pFVar6 + 0x10;
    } while (pFVar6 != pFVar7);
  }
  pFVar2 = this->Ar;
  puVar3 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    local_res10[0] = (uint)local_48;
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  (**(code **)(*(longlong *)this->Ar + 0x188))(this->Ar,local_50,(longlong)(int)(uint)local_48);
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  FArchive::~FArchive((FArchive *)&local_f8);
  local_100.__this = this;
  VisitViews<2,FixedTagPrivate::FStoreData_const_&,_FixedTagPrivate::TSerializer<22>::Save_::__l2::<lambda_2>_>
            (param_1,&local_100);
  pFVar2 = this->Ar;
  local_res18[0] = 0x87654321;
  if ((ulonglong)(*(longlong **)&pFVar2->field_0x8)[1] < **(longlong **)&pFVar2->field_0x8 + 4U) {
    if ((pFVar2->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(pFVar2,local_res18);
      return;
    }
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res18,4);
    return;
  }
  **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  return;
}

