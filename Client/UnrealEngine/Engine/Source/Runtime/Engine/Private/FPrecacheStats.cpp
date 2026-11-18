// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FPrecacheStats @ 1483e8b50

void __thiscall PSOCollectorStats::FPrecacheStats::~FPrecacheStats(FPrecacheStats *this)

{
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
              *)&(this->UntrackedData).PerVertexFactoryCount);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->UntrackedData).StatsLock);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
              *)&(this->TooLateData).PerVertexFactoryCount);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->TooLateData).StatsLock);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
              *)&(this->MissData).PerVertexFactoryCount);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->MissData).StatsLock);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
              *)&(this->HitData).PerVertexFactoryCount);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->HitData).StatsLock);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
              *)&(this->UsageData).PerVertexFactoryCount);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->UsageData).StatsLock);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
              *)&(this->PrecacheData).PerVertexFactoryCount);
                    /* WARNING: Could not recover jumptable at 0x0001483e8beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->PrecacheData).StatsLock);
  return;
}

