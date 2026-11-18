// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 53

// Get @ 141f7e050

UScriptStruct * __cdecl TBaseStructure<UE::Math::TBox2<double>_>::Get(void)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
      local_res8[1] = 0;
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = local_res8[0];
      ::ScriptStruct = StaticGetBaseStructureInternal(FVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e0e0

UScriptStruct * __cdecl TBaseStructure<UE::Math::TIntPoint<int>_>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"IntPoint");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e160

UScriptStruct * __cdecl TBaseStructure<UE::Math::TIntVector2<__int64>_>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"Int64Vector2");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e1e0

UScriptStruct * __cdecl TBaseStructure<UE::Math::TIntVector3<int>_>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"IntVector");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e260

UScriptStruct * __cdecl TBaseStructure<UE::Math::TIntVector4<int>_>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"IntVector4");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e2e0

UScriptStruct * __cdecl TBaseStructure<UE::Math::TMatrix<double>_>::Get(void)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
      local_res8[1] = 0;
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = local_res8[0];
      ::ScriptStruct = StaticGetBaseStructureInternal(FVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e370

UScriptStruct * __cdecl TBaseStructure<UE::Math::TPlane<double>_>::Get(void)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
      local_res8[1] = 0;
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = local_res8[0];
      ::ScriptStruct = StaticGetBaseStructureInternal(FVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e400

UScriptStruct * __cdecl TBaseStructure<UE::Math::TQuat<double>_>::Get(void)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
      local_res8[1] = 0;
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = local_res8[0];
      ::ScriptStruct = StaticGetBaseStructureInternal(FVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e490

UScriptStruct * __cdecl TBaseStructure<UE::Math::TRay<double>_>::Get(void)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
      local_res8[1] = 0;
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = local_res8[0];
      ::ScriptStruct = StaticGetBaseStructureInternal(FVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e520

UScriptStruct * __cdecl TBaseStructure<UE::Math::TRotator<double>_>::Get(void)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
      local_res8[1] = 0;
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = local_res8[0];
      ::ScriptStruct = StaticGetBaseStructureInternal(FVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e5b0

UScriptStruct * __cdecl TBaseStructure<UE::Math::TSphere<double>_>::Get(void)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
      local_res8[1] = 0;
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = local_res8[0];
      ::ScriptStruct = StaticGetBaseStructureInternal(FVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e640

UScriptStruct * __cdecl TBaseStructure<UE::Math::TTransform<double>_>::Get(void)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
      local_res8[1] = 0;
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = local_res8[0];
      ::ScriptStruct = StaticGetBaseStructureInternal(FVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e6d0

UScriptStruct * __cdecl TBaseStructure<UE::Math::TVector2<double>_>::Get(void)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
      local_res8[1] = 0;
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = local_res8[0];
      ::ScriptStruct = StaticGetBaseStructureInternal(FVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e760

UScriptStruct * __cdecl TBaseStructure<UE::Math::TVector4<double>_>::Get(void)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
      local_res8[1] = 0;
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = local_res8[0];
      ::ScriptStruct = StaticGetBaseStructureInternal(FVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e7f0

UScriptStruct * __cdecl TBaseStructure<UE::Math::TVector<double>_>::Get(void)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar2.Value);
      local_res8[1] = 0;
      FVar1.Number = 0;
      FVar1.ComparisonIndex.Value = local_res8[0];
      ::ScriptStruct = StaticGetBaseStructureInternal(FVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e880

UScriptStruct * __cdecl TBaseStructure<FColor>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"Color");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e900

UScriptStruct * __cdecl TBaseStructure<FDateTime>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"DateTime");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7e980

UScriptStruct * __cdecl TBaseStructure<FDoubleRange>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"DoubleRange");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7ea00

UScriptStruct * __cdecl TBaseStructure<FDoubleRangeBound>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"DoubleRangeBound");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7ea80

UScriptStruct * __cdecl TBaseStructure<FFallbackStruct>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"FallbackStruct");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7eb00

UScriptStruct * __cdecl TBaseStructure<FFloatInterval>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"FloatInterval");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7eb80

UScriptStruct * __cdecl TBaseStructure<FFloatRange>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"FloatRange");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7ec00

UScriptStruct * __cdecl TBaseStructure<FFloatRangeBound>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"FloatRangeBound");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7ec80

UScriptStruct * __cdecl TBaseStructure<FFrameNumber>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"FrameNumber");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7ed00

UScriptStruct * __cdecl TBaseStructure<FFrameRate>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"FrameRate");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7ed80

UScriptStruct * __cdecl TBaseStructure<FFrameTime>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"FrameTime");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7ee00

UScriptStruct * __cdecl TBaseStructure<FGuid>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"Guid");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7ee80

UScriptStruct * __cdecl TBaseStructure<FInt32Interval>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"Int32Interval");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7ef00

UScriptStruct * __cdecl TBaseStructure<FInt32Range>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"Int32Range");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7ef80

UScriptStruct * __cdecl TBaseStructure<FInt32RangeBound>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"Int32RangeBound");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f000

UScriptStruct * __cdecl TBaseStructure<FInterpCurveFloat>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"InterpCurveFloat");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f080

UScriptStruct * __cdecl TBaseStructure<FInterpCurveLinearColor>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"InterpCurveLinearColor");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f100

UScriptStruct * __cdecl TBaseStructure<FInterpCurveQuat>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"InterpCurveQuat");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f180

UScriptStruct * __cdecl TBaseStructure<FInterpCurveTwoVectors>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"InterpCurveTwoVectors");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f200

UScriptStruct * __cdecl TBaseStructure<FInterpCurveVector2D>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"InterpCurveVector2D");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f280

UScriptStruct * __cdecl TBaseStructure<FInterpCurveVector>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"InterpCurveVector");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f300

UScriptStruct * __cdecl TBaseStructure<FLinearColor>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"LinearColor");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f380

UScriptStruct * __cdecl TBaseStructure<FPackedRemoteObjectPathName>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"PackedRemoteObjectPathName");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f400

UScriptStruct * __cdecl TBaseStructure<FPolyglotTextData>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"PolyglotTextData");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f480

UScriptStruct * __cdecl TBaseStructure<FRandomStream>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"RandomStream");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f500

UScriptStruct * __cdecl TBaseStructure<FRemoteObjectBytes>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"RemoteObjectBytes");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f580

UScriptStruct * __cdecl TBaseStructure<FRemoteObjectData>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"RemoteObjectData");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f600

UScriptStruct * __cdecl TBaseStructure<FRemoteObjectId>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"RemoteObjectId");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f680

UScriptStruct * __cdecl TBaseStructure<FRemoteObjectPathName>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"RemoteObjectPathName");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f700

UScriptStruct * __cdecl TBaseStructure<FRemoteObjectReference>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"RemoteObjecReference");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f780

UScriptStruct * __cdecl TBaseStructure<FRemoteObjectTables>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"RemoteObjectTables");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f800

UScriptStruct * __cdecl TBaseStructure<FRemoteServerId>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"RemoteServerId");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f880

UScriptStruct * __cdecl TBaseStructure<FInterpCurvePoint<float>_>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"InterpCurvePointFloat");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f900

UScriptStruct * __cdecl TBaseStructure<FInterpCurvePoint<UE::Math::TQuat<double>_>_>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"InterpCurvePointQuat");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7f980

UScriptStruct * __cdecl TBaseStructure<FInterpCurvePoint<UE::Math::TVector2<double>_>_>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"InterpCurvePointVector2D");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7fa00

UScriptStruct * __cdecl TBaseStructure<FInterpCurvePoint<UE::Math::TVector<double>_>_>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"InterpCurvePointVector");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7fa80

UScriptStruct * __cdecl TBaseStructure<FInterpCurvePoint<FLinearColor>_>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"InterpCurvePointLinearColor");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

// Get @ 141f7fb00

UScriptStruct * __cdecl TBaseStructure<FInterpCurvePoint<FTwoVectors>_>::Get(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = ::FName::FName(local_res8,L"InterpCurvePointTwoVectors");
      ::ScriptStruct = StaticGetBaseStructureInternal(*pFVar1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return ::ScriptStruct;
}

