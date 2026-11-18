// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 48

// GetGenericObjectKeys @ 1499f5d90

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<void,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<void,void> *this,int param_1,
          TArrayView<void_*,int> *param_2)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (void *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pvVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(void **)(lVar8 + (longlong)param_2->DataPtr) = pvVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 1499f5e60

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<void,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<void,void> *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (void *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pvVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(void **)(lVar8 + (longlong)param_2->DataPtr) = pvVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetNum @ 1499f9ba0

int __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<void,void>::GetNum
          (FPCGAttributeAccessorKeysSingleObjectPtr<void,void> *this)

{
  return 1;
}

// IsClassSupported @ 149a00570

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<void,void>::IsClassSupported
          (FPCGAttributeAccessorKeysSingleObjectPtr<void,void> *this,UStruct *param_1)

{
  return false;
}

// GetGenericObjectKeys @ 149c76b20

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<unsigned_char,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<unsigned_char,void> *this,int param_1,
          TArrayView<void_*,int> *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (uchar *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      puVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(uchar **)(lVar8 + (longlong)param_2->DataPtr) = puVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149c76bf0

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<unsigned_char,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<unsigned_char,void> *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (uchar *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      puVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(uchar **)(lVar8 + (longlong)param_2->DataPtr) = puVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149c76cc0

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSplineMeshParams,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSplineMeshParams,void> *this,int param_1,
          TArrayView<void_*,int> *param_2)

{
  FPCGSplineMeshParams *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (FPCGSplineMeshParams *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pFVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(FPCGSplineMeshParams **)(lVar8 + (longlong)param_2->DataPtr) = pFVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149c76d90

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSplineMeshParams,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSplineMeshParams,void> *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  FPCGSplineMeshParams *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (FPCGSplineMeshParams *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pFVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(FPCGSplineMeshParams **)(lVar8 + (longlong)param_2->DataPtr) = pFVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149c76e60

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FSplineMeshComponentDescriptor,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<FSplineMeshComponentDescriptor,void> *this,
          int param_1,TArrayView<void_*,int> *param_2)

{
  FSplineMeshComponentDescriptor *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (FSplineMeshComponentDescriptor *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pFVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(FSplineMeshComponentDescriptor **)(lVar8 + (longlong)param_2->DataPtr) = pFVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149c76f30

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FSplineMeshComponentDescriptor,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<FSplineMeshComponentDescriptor,void> *this,
          int param_1,TArrayView<void_const_*,int> *param_2)

{
  FSplineMeshComponentDescriptor *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (FSplineMeshComponentDescriptor *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pFVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(FSplineMeshComponentDescriptor **)(lVar8 + (longlong)param_2->DataPtr) = pFVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149c77000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<AActor,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<AActor,void> *this,int param_1,
          TArrayView<void_*,int> *param_2)

{
  AActor *pAVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (AActor *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pAVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(AActor **)(lVar8 + (longlong)param_2->DataPtr) = pAVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149c770d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<AActor,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<AActor,void> *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  AActor *pAVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (AActor *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pAVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(AActor **)(lVar8 + (longlong)param_2->DataPtr) = pAVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149c771a0

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<USplineComponent,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<USplineComponent,void> *this,int param_1,
          TArrayView<void_*,int> *param_2)

{
  USplineComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (USplineComponent *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pUVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(USplineComponent **)(lVar8 + (longlong)param_2->DataPtr) = pUVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149c77270

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<USplineComponent,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<USplineComponent,void> *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  USplineComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (USplineComponent *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pUVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(USplineComponent **)(lVar8 + (longlong)param_2->DataPtr) = pUVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149c77340

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<USplineMeshComponent,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<USplineMeshComponent,void> *this,int param_1,
          TArrayView<void_*,int> *param_2)

{
  USplineMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (USplineMeshComponent *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pUVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(USplineMeshComponent **)(lVar8 + (longlong)param_2->DataPtr) = pUVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149c77410

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<USplineMeshComponent,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<USplineMeshComponent,void> *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  USplineMeshComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (USplineMeshComponent *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pUVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(USplineMeshComponent **)(lVar8 + (longlong)param_2->DataPtr) = pUVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetNum @ 149c77a10

int __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<unsigned_char,void>::GetNum
          (FPCGAttributeAccessorKeysSingleObjectPtr<unsigned_char,void> *this)

{
  return 1;
}

// GetNum @ 149c77a20

int __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSplineMeshParams,void>::GetNum
          (FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSplineMeshParams,void> *this)

{
  return 1;
}

// GetNum @ 149c77a30

int __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FSplineMeshComponentDescriptor,void>::GetNum
          (FPCGAttributeAccessorKeysSingleObjectPtr<FSplineMeshComponentDescriptor,void> *this)

{
  return 1;
}

// GetNum @ 149c77a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<AActor,void>::GetNum
          (FPCGAttributeAccessorKeysSingleObjectPtr<AActor,void> *this)

{
  return 1;
}

// GetNum @ 149c77a50

int __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<USplineComponent,void>::GetNum
          (FPCGAttributeAccessorKeysSingleObjectPtr<USplineComponent,void> *this)

{
  return 1;
}

// GetNum @ 149c77a60

int __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<USplineMeshComponent,void>::GetNum
          (FPCGAttributeAccessorKeysSingleObjectPtr<USplineMeshComponent,void> *this)

{
  return 1;
}

// IsClassSupported @ 149c806e0

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<unsigned_char,void>::IsClassSupported
          (FPCGAttributeAccessorKeysSingleObjectPtr<unsigned_char,void> *this,UStruct *param_1)

{
  return false;
}

// IsClassSupported @ 149c806f0

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSplineMeshParams,void>::IsClassSupported
          (FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSplineMeshParams,void> *this,
          UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGSplineMeshParams,(UObject *)pUVar3,
                           L"PCGSplineMeshParams");
      if (Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return false;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IsClassSupported @ 149c80770

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FSplineMeshComponentDescriptor,void>::IsClassSupported
          (FPCGAttributeAccessorKeysSingleObjectPtr<FSplineMeshComponentDescriptor,void> *this,
          UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar3 = FSplineMeshComponentDescriptor::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// IsClassSupported @ 149c807d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<AActor,void>::IsClassSupported
          (FPCGAttributeAccessorKeysSingleObjectPtr<AActor,void> *this,UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// IsClassSupported @ 149c80830

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<USplineComponent,void>::IsClassSupported
          (FPCGAttributeAccessorKeysSingleObjectPtr<USplineComponent,void> *this,UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_USplineComponent_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// IsClassSupported @ 149c80890

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<USplineMeshComponent,void>::IsClassSupported
          (FPCGAttributeAccessorKeysSingleObjectPtr<USplineMeshComponent,void> *this,
          UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// GetGenericObjectKeys @ 149e58f60

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftISMComponentDescriptor,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftISMComponentDescriptor,void> *this,
          int param_1,TArrayView<void_*,int> *param_2)

{
  FPCGSoftISMComponentDescriptor *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (FPCGSoftISMComponentDescriptor *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pFVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(FPCGSoftISMComponentDescriptor **)(lVar8 + (longlong)param_2->DataPtr) = pFVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149e59030

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftISMComponentDescriptor,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftISMComponentDescriptor,void> *this,
          int param_1,TArrayView<void_const_*,int> *param_2)

{
  FPCGSoftISMComponentDescriptor *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (FPCGSoftISMComponentDescriptor *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pFVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(FPCGSoftISMComponentDescriptor **)(lVar8 + (longlong)param_2->DataPtr) = pFVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149e59100

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftSkinnedMeshComponentDescriptor,void>::
GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftSkinnedMeshComponentDescriptor,void>
           *this,int param_1,TArrayView<void_*,int> *param_2)

{
  FPCGSoftSkinnedMeshComponentDescriptor *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (FPCGSoftSkinnedMeshComponentDescriptor *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pFVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(FPCGSoftSkinnedMeshComponentDescriptor **)(lVar8 + (longlong)param_2->DataPtr) = pFVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149e591d0

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftSkinnedMeshComponentDescriptor,void>::
GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftSkinnedMeshComponentDescriptor,void>
           *this,int param_1,TArrayView<void_const_*,int> *param_2)

{
  FPCGSoftSkinnedMeshComponentDescriptor *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (FPCGSoftSkinnedMeshComponentDescriptor *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pFVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(FPCGSoftSkinnedMeshComponentDescriptor **)(lVar8 + (longlong)param_2->DataPtr) = pFVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149e592a0

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<UObject,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<UObject,void> *this,int param_1,
          TArrayView<void_*,int> *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (UObject *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pUVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(UObject **)(lVar8 + (longlong)param_2->DataPtr) = pUVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149e59370

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<UObject,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<UObject,void> *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (UObject *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pUVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(UObject **)(lVar8 + (longlong)param_2->DataPtr) = pUVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149e59440

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<UPCGPolygon2DData,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<UPCGPolygon2DData,void> *this,int param_1,
          TArrayView<void_*,int> *param_2)

{
  UPCGPolygon2DData *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (UPCGPolygon2DData *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pUVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(UPCGPolygon2DData **)(lVar8 + (longlong)param_2->DataPtr) = pUVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149e59510

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<UPCGPolygon2DData,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<UPCGPolygon2DData,void> *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  UPCGPolygon2DData *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (UPCGPolygon2DData *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pUVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(UPCGPolygon2DData **)(lVar8 + (longlong)param_2->DataPtr) = pUVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149e595e0

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<UPCGSplineData,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<UPCGSplineData,void> *this,int param_1,
          TArrayView<void_*,int> *param_2)

{
  UPCGSplineData *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (UPCGSplineData *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pUVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(UPCGSplineData **)(lVar8 + (longlong)param_2->DataPtr) = pUVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetGenericObjectKeys @ 149e596b0

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<UPCGSplineData,void>::GetGenericObjectKeys
          (FPCGAttributeAccessorKeysSingleObjectPtr<UPCGSplineData,void> *this,int param_1,
          TArrayView<void_const_*,int> *param_2)

{
  UPCGSplineData *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if (this->Ptr == (UPCGSplineData *)0x0) {
    return false;
  }
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      pUVar1 = this->Ptr;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_2->ArrayNum;
      *(UPCGSplineData **)(lVar8 + (longlong)param_2->DataPtr) = pUVar1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  return true;
}

// GetNum @ 149e5c390

int __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftISMComponentDescriptor,void>::GetNum
          (FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftISMComponentDescriptor,void> *this)

{
  return 1;
}

// GetNum @ 149e5c3a0

int __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftSkinnedMeshComponentDescriptor,void>::GetNum
          (FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftSkinnedMeshComponentDescriptor,void>
           *this)

{
  return 1;
}

// GetNum @ 149e5c3b0

int __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<UObject,void>::GetNum
          (FPCGAttributeAccessorKeysSingleObjectPtr<UObject,void> *this)

{
  return 1;
}

// GetNum @ 149e5c3c0

int __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<UPCGPolygon2DData,void>::GetNum
          (FPCGAttributeAccessorKeysSingleObjectPtr<UPCGPolygon2DData,void> *this)

{
  return 1;
}

// GetNum @ 149e5c3d0

int __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<UPCGSplineData,void>::GetNum
          (FPCGAttributeAccessorKeysSingleObjectPtr<UPCGSplineData,void> *this)

{
  return 1;
}

// IsClassSupported @ 149e77ba0

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftISMComponentDescriptor,void>::IsClassSupported
          (FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftISMComponentDescriptor,void> *this,
          UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPCGSoftISMComponentDescriptor.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGSoftISMComponentDescriptor.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGSoftISMComponentDescriptor,
                           (UObject *)pUVar3,L"PCGSoftISMComponentDescriptor");
      if (Z_Registration_Info_UScriptStruct_FPCGSoftISMComponentDescriptor.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return false;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGSoftISMComponentDescriptor.OuterSingleton)->
                 _padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGSoftISMComponentDescriptor.OuterSingleton)->
         _padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IsClassSupported @ 149e77c20

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftSkinnedMeshComponentDescriptor,void>::
IsClassSupported(FPCGAttributeAccessorKeysSingleObjectPtr<FPCGSoftSkinnedMeshComponentDescriptor,void>
                 *this,UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor,
                           (UObject *)pUVar3,L"PCGSoftSkinnedMeshComponentDescriptor");
      if (Z_Registration_Info_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return false;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor.
                 OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor.OuterSingleton)->
         _padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// IsClassSupported @ 149e77ca0

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<UObject,void>::IsClassSupported
          (FPCGAttributeAccessorKeysSingleObjectPtr<UObject,void> *this,UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// IsClassSupported @ 149e77d00

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<UPCGPolygon2DData,void>::IsClassSupported
          (FPCGAttributeAccessorKeysSingleObjectPtr<UPCGPolygon2DData,void> *this,UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGPolygon2DData_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// IsClassSupported @ 149e77d60

bool __thiscall
FPCGAttributeAccessorKeysSingleObjectPtr<UPCGSplineData,void>::IsClassSupported
          (FPCGAttributeAccessorKeysSingleObjectPtr<UPCGSplineData,void> *this,UStruct *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGSplineData_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

